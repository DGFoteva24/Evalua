#include <iostream>
#include <string>
#include <cstdlib>
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

void study() {
    cout << LAVANDER << " _________________________________________________________________ " << endl;
    cout << "|                                ||                               |" << endl;
    cout << "|             " << SKYBLUE << "Evalua" << LAVANDER << "             ||           " << SKYBLUE << "TABLE OF" << LAVANDER << "            |" << endl;
    cout << "|       Online Coursebook        ||           " << SKYBLUE << "CONTENTS" << LAVANDER << "            |" << endl;
    cout << "|          Mathematics           ||                               |" << endl;
    cout << "|           9th Grade            ||      1. Trigonometry          |" << endl;
    cout << "|                                ||      2. Geometry              |" << endl;
    cout << "|                                ||      3. Algebra               |" << endl;
    cout << "|                                ||      4. Calculus              |" << endl;
    cout << "|                                ||      5. Combinatorics         |" << endl;

    for (int i = 0; i < 6; i++) {
        cout << "|                                ||                               |" << endl;
    }

    cout << "|               0                ||               1               |" << endl;
    cout << "|________________________________||_______________________________|" << RESET << endl;

    cout << "\n" << LAVANDER << "Enter a chapter number to read, or " << SKYBLUE << "0" << LAVANDER << " to go back: " << RESET;
   
    int choice;
    cin >> choice;

    switch (choice) {
    case 0: clearScreen(); mainMenu(); break;
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

  
