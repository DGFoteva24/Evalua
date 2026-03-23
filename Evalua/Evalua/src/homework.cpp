#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "../include/homework.h"
#include "../include/study.h"
#include "../include/menu.h"

using namespace std;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

void clearScreen();

void homework() {
    // Ensure console uses UTF-8 for Unicode symbols
    SetConsoleOutputCP(CP_UTF8);

    string content = string(LAVANDER) + R"(+------------------------------+
|          )" + string(SKYBLUE) + R"(Homework)" + RESET + string(LAVANDER) + R"(            |
+------------------------------+

)" + RESET +

string(LAVANDER) + R"(Practice Tasks

)" + RESET + string(SKYBLUE) +

R"(1) Algebra: Practice problems matching the study material and question bank : )" + RESET + string(LAVANDER) + R"(
   a) Solve the linear equation: 2x + 3 = 7.
   b) Solve: 5x = 45.
   c) Factor: x^2 - 9.
   d) Expand: (x + 3)^2 and simplify.
   e) Solve the quadratic: x^2 - 16 = 0.

)" + RESET + string(SKYBLUE) +

R"(2) Geometry: Problems drawn from the geometry notes and question bank: )" + RESET + string(LAVANDER) + R"(
   a) Find the area of a triangle with base = 10 and height = 6.
   b) Compute the circumference of a circle with radius = 4.
   c) Given a right triangle with legs 3 and 4, find the hypotenuse.
   d) Find the diagonal length of a square with side s (express in terms of s).
   e) Area of a rectangle with length = 5 and width = 3.

)" + RESET + string(SKYBLUE) +

R"(3) Trigonometry: Based on basic ratios and identities covered: )" + RESET + string(LAVANDER) + R"(
   a) Calculate sin(30°), cos(60°), tan(45°).
   b) Simplify sin^2(theta) + cos^2(theta).
   c) Evaluate sin(90°) and cos(0°).
   d) Given sin(30°)=1/2, identify the corresponding angle(s) in [0,360°).
   e) Use the identity to compute sin^2(45°) + cos^2(45°).

)" + RESET + string(SKYBLUE) +

R"(4) Calculus: From the calculus material and examples: )" + RESET + string(LAVANDER) + R"(
   a) Differentiate f(x) = 3x^2 + 5x.
   b) Compute f'(2) for the function in (a).
   c) Compute the integral of x dx (indefinite integral).
   d) Evaluate the definite integral from 0 to 1 of (3x^2 - 2x + 1) dx.
   e) Apply the power rule: d/dx[x^n] = n*x^(n-1) to x^3.

)" + RESET + string(SKYBLUE) +

R"(5) Combinatorics / Probability: Increasing difficulty (a-e): )" + RESET + string(LAVANDER) + R"(
   a) How many ways to arrange 3 distinct books on a shelf?
   b) How many distinct permutations of the letters in "TEST"?
   c) How many 2-card draws (order matters) from 52-card deck? How many without replacement?
   d) What is the probability of drawing 2 aces in a row without replacement?
   e) From 6 students, how many ways to choose a president and vice-president (order matters)?

)";

    cout << content;

    cout << LAVANDER << "\nPress Enter to return to the menu..." << RESET;
    char ch = _getch();
    cout << ch << endl;
    if (ch == '\r' || ch == '\n') {
        clearScreen();
        mainMenu();
    }
}