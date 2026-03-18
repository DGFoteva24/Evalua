#include <iostream>
#include <string>
#include "../include/firstMenu.h"

using namespace std;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

void aboutUs() {
	cout << LAVANDER << "+----------------------------+" << RESET << endl;
	cout << LAVANDER << "|" << SKYBLUE << "          About Us          " << LAVANDER << "|" << RESET << endl;
	cout << LAVANDER << "+---------------------------+" << RESET << endl;

	cout << SKYBLUE << "Our Mission" << endl << LAVANDER << "--------" << RESET << endl;
	cout << SKYBLUE << "Evalua is an educational platform designed to help students learn and practice mathematics." << RESET << endl;
	cout << SKYBLUE << "Our mission is to provide high-quality learning materials and assessments to enhance the educational experience." << RESET << endl;
	cout << SKYBLUE << "We are committed to fostering a supportive and engaging learning environment for all users." << RESET << endl;
	cout << SKYBLUE << "Our Team" << endl << LAVANDER << "--------" << RESET << endl;
	cout << SKYBLUE << "Dimana Foteva - 9g - Scrum Trainer " << RESET << endl;
	cout << SKYBLUE << "Vsevolod Bolotov - 9v - Backend Developer" << RESET << endl;
	cout << SKYBLUE << "Mariela Apostolova - 9b - Backend Developer" << RESET << endl;
	cout << SKYBLUE << "Rosica Velkova - 9a - Quality Engineer" << RESET << endl;

	cout << LAVANDER << "\nPress 0 to go back: " << RESET;

	int choice;
	cin >> choice;

	if (choice == 0) {
		clearScreen();
		firstMenu();
	}
}