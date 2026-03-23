#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <cctype>
#include <windows.h>
#include <conio.h>
#include <chrono>
#include "../include/statistics.h"
#include "../include/signUp.h"
#include "../include/menu.h"
#include "../include/question.h"
#include "../include/test.h"
#include "../include/firstMenu.h"

using namespace std;

#define RESET    "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE  "\033[38;5;117m"
#define GREEN    "\033[38;5;114m"
#define RED      "\033[38;5;203m"

void randomTest();
void algebraTest();
void calculusTest();
void combinatoricsTest();
void geometryTest();
void trigonometryTest();

// Picks 7 easy, 8 medium, 5 hard questions from the pool.
// If a tier is short, fills the gap from the tier below it.

vector<Question> selectByDifficulty(vector<Question>& pool) {
	vector<Question> easy, medium, hard;

	for (auto& q : pool) {
		if (q.points == 10)       easy.push_back(q);
		else if (q.points == 15)  medium.push_back(q);
		else                      hard.push_back(q);
	}

	mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

	shuffle(easy.begin(), easy.end(), rng);
	shuffle(medium.begin(), medium.end(), rng);
	shuffle(hard.begin(), hard.end(), rng);

	vector<Question> selected;

	for (int i = 0; i < 10 && i < (int)easy.size(); i++) selected.push_back(easy[i]);
	for (int i = 0; i < 5 && i < (int)medium.size(); i++) selected.push_back(medium[i]);
	for (int i = 0; i < 5 && i < (int)hard.size(); i++) selected.push_back(hard[i]);

	return selected;
}

void runTest(vector<Question>& questions, string category) {
	SetConsoleOutputCP(CP_UTF8);
	int score = 0;
	int maxScore = 0;
	int total = questions.size();

	for (int i = 0; i < total; i++) {
		Question& q = questions[i];

		cout << LAVANDER << "\nQuestion " << (i + 1) << " of " << total << RESET << endl;
		cout << SKYBLUE << q.text << RESET << endl << endl;

		for (int j = 0; j < 4; j++) {
			cout << LAVANDER << char('A' + j) << ". " << RESET
				<< q.options[j] << endl;
		}

		cout << endl << SKYBLUE << "Your answer (A-D or 1-4): " << RESET;

		int selectedIndex;
		while (true) {
			char ch = _getch();
			cout << ch << endl;
			if (ch >= '1' && ch <= '4') {
				selectedIndex = ch - '1';
				break;
			}
			char up = toupper(static_cast<unsigned char>(ch));
			if (up >= 'A' && up <= 'D') {
				selectedIndex = up - 'A';
				break;
			}
			cout << endl << RED << "Please select an option (A-D or 1-4): " << RESET;
		}

		maxScore += q.points;

		if (selectedIndex == q.correctAnswer) {
			cout << GREEN << "Correct! +" << q.points << " points" << RESET << endl;
			score += q.points;
		}
		else {
			cout << RED << "Wrong! The correct answer was: "
				<< q.options[q.correctAnswer] << RESET << endl;
		}

		cout << LAVANDER << "\nPress any key to continue..." << RESET;
		{
			char _ch = _getch();
			cout << _ch << endl;
		}
		clearScreen();
	}

	cout << endl;
	cout << LAVANDER << "+----------------------------------+" << RESET << endl;
	cout << SKYBLUE << "|           Test Complete!         |" << RESET << endl;
	cout << LAVANDER << "+----------------------------------+" << RESET << endl;

	int pct = (maxScore > 0) ? (score * 100 / maxScore) : 0;
	cout << SKYBLUE << "Score: " << pct << "%" << RESET << endl;

	string grade;

	if (pct >= 90) grade = "6";
	else if (pct >= 80) grade = "5";
	else if (pct >= 70) grade = "4";
	else if (pct >= 60) grade = "3";
	else grade = "2";

	cout << SKYBLUE << "Grade: " << grade << RESET << endl << endl;

	saveResult(currentUser, category, stoi(grade));

	cout << LAVANDER << "Press Enter to return to the menu..." << RESET;
	{
		char _ch = _getch();
		cout << _ch << endl;
	}

	clearScreen();
	mainMenu();
}

// ── Menu ──────────────────────────────────────────────────────────────────────
void test() {
	cout << LAVANDER << "+----------------------------------+" << RESET << endl;
	cout << SKYBLUE << "|          Choose a test!          |" << RESET << endl;
	cout << LAVANDER << "+----------------------------------+" << RESET << endl;

	cout << SKYBLUE << endl
		<< "1. Random Test" << endl
		<< "2. Algebra Test" << endl
		<< "3. Calculus Test" << endl
		<< "4. Combinatorics Test" << endl
		<< "5. Geometry Test" << endl
		<< "6. Trigonometry Test" << RESET << endl << endl;

	cout << LAVANDER << "Enter your choice or press Enter to go back: " << RESET;

	int choice = readNumericChoice();

	if (choice == -2) {
		clearScreen();
		mainMenu();
		return;
	}

	switch (choice) {
	case 1: clearScreen(); randomTest(); break;
	case 2: clearScreen(); algebraTest(); break;
	case 3: clearScreen(); calculusTest(); break;
	case 4: clearScreen(); combinatoricsTest(); break;
	case 5: clearScreen(); geometryTest(); break;
	case 6: clearScreen(); trigonometryTest(); break;
	default:
		clearScreen();
		cout << SKYBLUE << "Please pick a number! (1-6)" << endl << endl << RESET;
		test();
		break;
	}
}

// ── Individual test builders ──────────────────────────────────────────────────
void randomTest() {
	vector<Question> bank = getQuestionBank();
	vector<Question> selected = selectByDifficulty(bank);
	runTest(selected, "Random");
}

void algebraTest() {
	vector<Question> questions = getQuestionsByCategory("Algebra");
	vector<Question> selected = selectByDifficulty(questions);
	runTest(selected, "Algebra");
}

void calculusTest() {
	vector<Question> questions = getQuestionsByCategory("Calculus");
	vector<Question> selected = selectByDifficulty(questions);
	runTest(selected, "Calculus");
}

void combinatoricsTest() {
	vector<Question> questions = getQuestionsByCategory("Combinatorics");
	vector<Question> selected = selectByDifficulty(questions);
	runTest(selected, "Combinatorics");
}

void geometryTest() {
	vector<Question> questions = getQuestionsByCategory("Geometry");
	vector<Question> selected = selectByDifficulty(questions);
	runTest(selected, "Geometry");
}

void trigonometryTest() {
	vector<Question> questions = getQuestionsByCategory("Trigonometry");
	vector<Question> selected = selectByDifficulty(questions);
	runTest(selected, "Trigonometry");
}