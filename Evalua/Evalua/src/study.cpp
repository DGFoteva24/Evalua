#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include "../include/study.h"
#include "../include/test.h"
#include "../include/statistics.h"
#include "../include/firstMenu.h"
#include "../include/trigonometry.h"
#include "../include/geometry.h"
#include "../include/menu.h"
#include "../include/algebra.h"
#include "../include/calculus.h"
#include "../include/combinatorics.h"

using namespace std;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

// Blocks until the user presses Enter, then clears the screen and returns to the study contents.
void waitForEnterAndReturn() {
    while (true) {
        char ch = _getch();
        if (ch == '\r' || ch == '\n') break;
    }
    clearScreen();
    study();
}

void study() {
    cout << LAVANDER
        << "     __________________   __________________\n"
        << " .-/|                  \\ /                  |\\-.\n"
        << " ||||      EVALUA       |                   ||||\n"
        << " ||||                   |  " << SKYBLUE << "1." << LAVANDER << " Trigonometry  ||||\n"
        << " ||||                   |                   ||||\n"
        << " |||| Online Coursebook |  " << SKYBLUE << "2." << LAVANDER << " Geometry      ||||\n"
        << " ||||                   |                   ||||\n"
        << " ||||    ";
    cout << SKYBLUE << "Mathematics" << LAVANDER << "    |  " << SKYBLUE << "3." << LAVANDER << " Algebra       ||||\n"
        << " ||||                   |                   ||||\n"
        << " ||||                   |  " << SKYBLUE << "4." << LAVANDER << " Calculus      ||||\n"
        << " ||||     ";
    cout << SKYBLUE << "9th Grade" << LAVANDER << "     |                   ||||\n"
        << " ||||                   |  " << SKYBLUE << "5." << LAVANDER << " Combinatorics ||||\n"
        << " ||||                   |                   ||||\n"
        << " ||||         " << SKYBLUE << "1" << LAVANDER << "         |         " << SKYBLUE << "2" << LAVANDER << "         ||||\n"
        << " ||||__________________ | __________________||||\n"
        << " || /= ===============\\ | /= ===============\\ ||\n"
        << " `--------------------~___~-------------------''\n"
        << RESET << "\n";

    cout << "\n" << LAVANDER << "Enter a chapter number to read, or press Enter to go back: " << RESET;

    int choice = readNumericChoice();
    if (choice == -2) {
        clearScreen();
        mainMenu();
        return;
    }

    switch (choice) {
    case 1: clearScreen(); trigonometry(); break;
    case 2: clearScreen(); geometry(); break;
    case 3: clearScreen(); algebra(); break;
    case 4: clearScreen(); calculus(); break;
    case 5: clearScreen(); combinatorics(); break;
    default:
        clearScreen();
        cout << SKYBLUE << "Please pick a number! (1-5)" << endl << endl << RESET;
        study();
        break;
    }
}


