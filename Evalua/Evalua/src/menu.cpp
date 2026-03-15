#include <iostream>
#include <string>
#include <cstdlib>
#include "../include/study.h"
#include "../include/test.h"
#include "../include/statistics.h"
#include "../include/firstMenu.h"

using namespace std;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

void clearScreen();
void exitProgram();

void mainMenu() {
    cout << LAVANDER << "+---------------------------------------+" << RESET << endl;
    cout << SKYBLUE << "|           Welcome to Evalua!          |" << RESET << endl;
    cout << LAVANDER << "+---------------------------------------+" << RESET << endl;

    cout << endl;

    cout << LAVANDER << "Choose what you would like to do:" << RESET << endl;
    cout << endl;

    cout << SKYBLUE << "1. Open learning material" << RESET << endl;
    cout << SKYBLUE << "2. Take a test" << RESET << endl;
    cout << SKYBLUE << "3. View Statistics" << RESET << endl;
    cout << SKYBLUE << "4. Log Out" << RESET << endl;
    cout << SKYBLUE << "5. Exit" << RESET << endl;

    cout << endl;

    cout << LAVANDER << "Enter your choice: " << RESET;

    int choice;
    cin >> choice;

    switch (choice) {
    case 1: clearScreen(); study(); break;
    case 2: clearScreen(); test(); break;
    case 3: clearScreen(); statistics(); break;
    case 4: clearScreen(); firstMenu(); break;
    case 5: clearScreen(); exitProgram(); break;
    default:
        cout << "Please pick a number! (1-5)" << endl;
        break;
    }
}