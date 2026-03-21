#include <iostream>
#include <string>
#include <conio.h>
#include "../include/calculus.h"
#include "../include/study.h"

using namespace std;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

void clearScreen();

void calculus() {

    string content = string(LAVANDER) + R"(

+------------------------------+
|           CALCULUS           |
+------------------------------+

)" + RESET +

string(SKYBLUE) + R"(Basic Concepts
)" + RESET +

R"(Derivative    - measures the rate of change of a function (dy/dx)
Integral      - measures the area under a curve
Limit         - the value a function approaches as the input approaches some point
Function      - a relation between inputs and outputs (e.g., f(x) = x^2)

)" +

string(SKYBLUE) + R"(Important Formulas
)" + RESET +

R"(Power Rule: d/dx[x^n] = n*x^(n-1)
Sum Rule: d/dx[f(x)+g(x)] = f'(x) + g'(x)
Definite Integral: int[a to b] f(x) dx = F(b) - F(a)
Fundamental Theorem of Calculus: int f'(x) dx = f(x) + C

)" +

string(SKYBLUE) + R"(Example
)" + RESET +

R"(Derivative Example:
f(x) = 3x^2 + 5x

f'(x) = d/dx[3x^2 + 5x]
      = 6x + 5

Integral Example:
int(6x + 5) dx = 3x^2 + 5x + C

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