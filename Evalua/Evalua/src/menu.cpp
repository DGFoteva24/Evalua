#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include "../include/study.h"
#include "../include/test.h"
#include "../include/statistics.h"
#include "../include/firstMenu.h"
#include "../include/menu.h"

using namespace std;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

void clearScreen();
void exitProgram();

// Read a single key and return its numeric value (0-9), -2 for Enter, or -1 for other keys
int readNumericChoice() {
    char ch = _getch();
    cout << ch << endl;
    if (ch == '\r' || ch == '\n')
        return -2;
    if (ch >= '0' && ch <= '9')
        return ch - '0';
    return -1;
}

void mainMenu() {
    cout << LAVANDER << "+---------------------------------------+" << RESET << endl;
    cout << LAVANDER << "|" << SKYBLUE << "           Welcome to Evalua!          " << LAVANDER << "|" << RESET << endl;
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

    int choice = readNumericChoice();

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