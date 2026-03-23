#include <iostream>
#include <string>
#include <conio.h>
#include "../include/firstMenu.h"

using namespace std;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

void aboutUs() {
	cout << LAVANDER << "+----------------------------------+" << RESET << endl;
	cout << SKYBLUE << "|            About us            |" << RESET << endl;
	cout << LAVANDER << "+----------------------------------+" << RESET << endl << endl;

	cout << SKYBLUE << "Our Mission" << endl << LAVANDER << "-----------" << RESET << endl;
	cout << SKYBLUE << "Evalua is an educational platform designed to help students learn and practice mathematics." << RESET << endl;
	cout << SKYBLUE << "Our mission is to provide high-quality learning materials and assessments to enhance the educational experience." << RESET << endl;
	cout << SKYBLUE << "We are committed to fostering a supportive and engaging learning environment for all users." << RESET << endl << endl;

	cout << SKYBLUE << "What We Offer" << endl << LAVANDER << "-----------" << RESET << endl;
	cout << SKYBLUE << "1. Uniquely formatted study material: Covering Algebra, Geometry, Trigonometry, and Calculus." << RESET << endl;
	cout << SKYBLUE << "2. Interactive tests: Tests made up of different difficulty levels and categories." << RESET << endl;
	cout << SKYBLUE << "3. Performance tracking : Detailed statistics to monitor progress and identify areas for improvement." << RESET << endl;
	cout << SKYBLUE << "4. Homework assignments: Practice problems to reinforce learning and prepare for tests." << RESET << endl << endl;

	cout << SKYBLUE << "Our Team" << endl << LAVANDER << "-----------" << RESET << endl;
	cout << SKYBLUE << "Dimana Foteva - 9G - Scrum Trainer " << RESET << endl;
	cout << SKYBLUE << "Vsevolod Bolotov - 9V - Backend Developer" << RESET << endl;
	cout << SKYBLUE << "Mariela Apostolova - 9B - Backend Developer" << RESET << endl;
	cout << SKYBLUE << "Rosica Velkova - 9A - Quality Engineer" << RESET << endl;

    cout << LAVANDER << "\nPress Enter to return to the menu..." << RESET;
	while (_getch() != '\r');
	clearScreen();
	return;
}