#include <iostream>
#include <string>
#include <conio.h>
#include "../include/algebra.h"
#include "../include/study.h"

using namespace std;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

void clearScreen();

void algebra() {

    string content = string(LAVANDER) + R"(

+------------------------------+ )" + RESET + string(SKYBLUE) + R"(
|            ALGEBRA           | )" + RESET + string(LAVANDER) + R"(
+------------------------------+

)" + RESET +

string(SKYBLUE) + R"(Basic Concepts
)" + RESET +

R"(Variable    - a symbol representing a number (e.g., x, y)
Constant    - a fixed value (e.g., 5, 10)
Expression  - combination of variables, constants, and operators (e.g., 2x + 3)
Equation    - a statement that two expressions are equal (e.g., 2x + 3 = 7)

)" +

string(SKYBLUE) + R"(Important Formulas
)" + RESET +

R"(Solving linear equation: ax + b = 0  =>  x = -b / a
Quadratic equation: ax^2 + bx + c = 0  =>  x = (-b +/- sqrt(b^2 - 4ac)) / (2a)
Slope of a line: m = (y2 - y1) / (x2 - x1)
Distance formula: d = sqrt((x2 - x1)^2 + (y2 - y1)^2)

)" +

string(SKYBLUE) + R"(Example
)" + RESET +

R"(Linear Equation:
2x + 3 = 7
2x = 7 - 3
2x = 4
x = 4 / 2
x = 2

)";

    cout << content;

    cout << LAVANDER << "Press Enter to go back: " << RESET;
    char ch = _getch();
    cout << ch << endl;
    if (ch == '\r' || ch == '\n') {
        clearScreen();
        study();
    }
}