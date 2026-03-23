#include <iostream>
#include <string>
#include <conio.h>
#include "../include/trigonometry.h"
#include "../include/study.h"

using namespace std;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

void clearScreen();
void trigonometry() {

    string content = string(LAVANDER) + R"(+--------------------------------+ )" + RESET + string(SKYBLUE) + R"(
|          TRIGONOMETRY          | )" + RESET + string(LAVANDER) + R"(
+--------------------------------+

)" + RESET +

string(SKYBLUE) + R"(Basic Ratios
)" + RESET +

R"(sin(x) = opposite / hypotenuse
cos(x) = adjacent / hypotenuse
tan(x) = opposite / adjacent

)" +

string(SKYBLUE) + R"(Important Identity
)" + RESET +

R"(sin(x)^2 + cos(x)^2 = 1

)";

    cout << content;

    cout << LAVANDER << "\nPress Enter to go back: " << RESET;
    waitForEnterAndReturn();
}