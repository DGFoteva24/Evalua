#include <iostream>
#include <string>
#include <conio.h>
#include "../include/combinatorics.h"
#include "../include/study.h"

using namespace std;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

void clearScreen();

void combinatorics() {

    string content = string(LAVANDER) + R"(

+------------------------------+ )" + RESET + string(SKYBLUE) + R"(
|        COMBINATORICS         | )" + RESET + string(LAVANDER) + R"(
+------------------------------+

)" + RESET +

string(SKYBLUE) + R"(Basic Concepts
)" + RESET +

R"(Permutation  - arrangement of objects in a specific order
Combination  - selection of objects without regard to order
Factorial (!) - product of all positive integers up to n, e.g., 5! = 5*4*3*2*1
nPr         - number of permutations of n objects taken r at a time
nCr         - number of combinations of n objects taken r at a time

)" +

string(SKYBLUE) + R"(Important Formulas
)" + RESET +

R"(Factorial: n! = n * (n-1) * (n-2) * ... * 1
Permutation: nPr = n! / (n-r)!
Combination: nCr = n! / (r! * (n-r)!)

)" +

string(SKYBLUE) + R"(Example
)" + RESET +

R"(Permutation Example:
How many ways to arrange 3 books out of 5?
5P3 = 5! / (5-3)! = 5*4*3 = 60

Combination Example:
How many ways to choose 3 books out of 5?
5C3 = 5! / (3! * (5-3)!) = 10

)";

    cout << content;

    cout << LAVANDER << "Press Enter to return to the menu..." << RESET;
    char ch = _getch();
    cout << ch << endl;
    if (ch == '\r' || ch == '\n') {
        clearScreen();
        study();
    }
}