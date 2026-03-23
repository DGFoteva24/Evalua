#include <iostream>
#include <string>
#include <conio.h>
#include "../include/geometry.h"
#include "../include/study.h"

using namespace std;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

void clearScreen();

void geometry() {

    string content = string(LAVANDER) + R"(+------------------------------+ )" + RESET + string(SKYBLUE) + R"(
|           GEOMETRY           | )"+ RESET + string(LAVANDER) + R"(
+------------------------------+

)" + RESET +

string(SKYBLUE) + R"(Basic Shapes
)" + RESET +

R"(Triangle - 3 sides
Square   - 4 equal sides
Rectangle- opposite sides equal
Circle   - round shape

)" +

string(SKYBLUE) + R"(Important Formulas
)" + RESET +

R"(Area of triangle    = (base * height) / 2
Area of rectangle   = length * width
Area of circle      = pi * r^2
Perimeter of square = 4 * side

)" +

string(SKYBLUE) + R"(Example
)" + RESET +

R"(Rectangle
length = 5
width  = 3

Area = 5 * 3 = 15

)";

    cout << content;

    cout << LAVANDER << "\nPress Enter to go back: " << RESET;
    waitForEnterAndReturn();
}