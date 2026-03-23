#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include "../include/statistics.h"
#include "../include/signUp.h"
#include "../include/menu.h"
#include "../include/firstMenu.h"
using namespace std;

#define RESET    "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE  "\033[38;5;117m"

const string RESULTS_FILE = "results.txt";

void saveResult(string username, string category, int grade) {
	ofstream file(RESULTS_FILE, ios::app);
	if (file.is_open()) {
		file << username << " " << category << " " << grade << "\n";
		file.close();
	}
}

void statistics() {
	cout << LAVANDER << "+----------------------------------+" << RESET << endl;
	cout << SKYBLUE << "|            Statistics            |" << RESET << endl;
	cout << LAVANDER << "+----------------------------------+" << RESET << endl << endl;

	ifstream file(RESULTS_FILE);
	if (!file.is_open() || file.peek() == ifstream::traits_type::eof()) {
		cout << SKYBLUE << "No test results found yet. Take a test first!" << RESET << endl;
	}
	else {
		string username, category;
		int grade;
		vector<tuple<string, string, int>> results;

		while (file >> username >> category >> grade)
			results.push_back({ username, category, grade });
		file.close();

		// Overall stats
		int total = results.size(), sum = 0, highest = 2, lowest = 6;
		for (auto& r : results) {
			int g = get<2>(r);
			sum += g;
			if (g > highest) highest = g;
			if (g < lowest)  lowest = g;
		}

		cout << SKYBLUE << "Overall (" << total << " tests taken):" << RESET << endl;
		cout << "  Highest grade:  " << highest << endl;
		cout << "  Lowest grade:   " << lowest << endl;
		cout << "  Average grade:  " << fixed << setprecision(1)
			<< (double)sum / total << endl << endl;

		// Stats by category
		map<string, vector<int>> byCategory;
		for (auto& r : results)
			byCategory[get<1>(r)].push_back(get<2>(r));

		cout << SKYBLUE << "By Category:" << RESET << endl;
		for (auto& kv : byCategory) {
			int cs = 0, ch = 2, cl = 6;
			for (int g : kv.second) {
				cs += g;
				if (g > ch) ch = g;
				if (g < cl) cl = g;
			}
			cout << endl << "  " << kv.first << ":" << endl
				<< LAVANDER << "  > " << RESET << "Highest: " << ch << endl
				<< LAVANDER << "  > " << RESET << "Lowest: " << cl << endl
				<< LAVANDER << "  > " << RESET << "Average: " << fixed << setprecision(1)
				<< (double)cs / kv.second.size() << endl;
		}
		cout << endl;

		// Your personal stats
		int mySum = 0, myHigh = -1, myLow = 7, myCount = 0;
		for (auto& r : results) {
			if (get<0>(r) == currentUser) {
				int g = get<2>(r);
				mySum += g;
				myCount++;
				if (g > myHigh) myHigh = g;
				if (g < myLow)  myLow = g;
			}
		}

		cout << SKYBLUE << "Your Stats (" << currentUser << "):" << RESET << endl;
		if (myCount == 0) {
			cout << "  You haven't taken any tests yet." << endl;
		}
		else {
			cout << "  Tests taken:   " << myCount << endl;
			cout << "  Highest grade: " << myHigh << endl;
			cout << "  Lowest grade:  " << myLow << endl;
			cout << "  Average grade: " << fixed << setprecision(1)
				<< (double)mySum / myCount << endl;
		}
	}

	cout << endl << LAVANDER << "Press Enter to return to the menu..." << RESET;
	cin.ignore();
	cin.get();
	clearScreen();
	mainMenu();
}