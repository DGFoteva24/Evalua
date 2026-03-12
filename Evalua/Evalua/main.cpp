#include <iostream>
#include <string>
using namespace std;

void empty() {
	cout << "Working";
}

int main() {
	cout << "Welcome to Evalua!" << endl << "Choose what you would like to do:" << endl << "-------------" << endl;
	cout << "1. Open learning material" << endl << "2. Take a test" << endl << "3. View Statistics" << endl << "4. Log in/Sign up" << endl << "5. Exit" << endl;
	cout << "Enter your choice: ";
	
	int choice;
	cin >> choice;

	switch (choice) {
	case 1: empty(); break;
	case 2: empty(); break;
	case 3: empty(); break;
	case 4: empty(); break;
	case 5: empty(); break;
	default: cout << "Please pick a number! (1-5)"; break;
	}
}
