#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include "../include/firstMenu.h"
#include "../include/menu.h"
#include "../include/signUp.h"
#include "../include/logIn.h"
#include "../include/aboutUs.h"

using namespace std;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

void clearScreen();
void exitProgram();

void firstMenu() {
    int choice;

    do {
        // Clear screen for fresh display
        clearScreen();

        cout << SKYBLUE << R"(   ____                         __                       
  F ___J    _    _     ___ _    LJ    _    _      ___ _  
 J |___:   J |  | L   F __` L   FJ   J |  | L    F __` L 
 | _____|  J J  F L  | |--| |  J  L  | |  | |   | |--| | 
 F L____:  J\ \/ /F  F L__J J  J  L  F L__J J   F L__J J 
J________L  \\__//  J\____,__L J__L J\____,__L J\____,__L
|________|   \__/    J____,__F |__|  J____,__F  J____,__F)" << RESET << "\n\n\n";

        cout << LAVANDER << R"(Digital Learning Hub for Modern Education
---------------------------------------------------------)" << "\n\n";

        cout << SKYBLUE << " 1. Sign up" << RESET << endl;
        cout << SKYBLUE << " 2. Log in" << RESET << endl;
        cout << SKYBLUE << " 3. About us" << RESET << endl;
        cout << SKYBLUE << " 4. Exit" << RESET << endl;

        cout << endl;

        cout << LAVANDER << "Enter your choice: " << RESET;
        choice = readNumericChoice();

        switch (choice) {
        case 1:
            clearScreen();
            registerUser();
            break;
        case 2:
            clearScreen();
            loginUser();
            break;
        case 3:
            clearScreen();
            aboutUs();
            break;
        case 4:
            clearScreen();
            exitProgram();
            break;
        default:
            cout << SKYBLUE << "\nPlease pick a number! (1-4)\n\n" << RESET << "Press Enter to return to the menu...";
            {
                char _ch = _getch();
                cout << _ch << endl;
            }
            continue;
        }
    } while (choice != 4);
}
void exitProgram() {
    cout << "Exiting the program. Goodbye!" << endl;
    exit(0);
}

void clearScreen() {
    system("cls");
}