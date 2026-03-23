#include <string>
#include <vector>
#include "../include/question.h"

using namespace std;

void addQuestion(vector<Question>& bank, string text, string o1, string o2, string o3, string o4, int correct, string category, int points) {
    Question q;

    q.text = text;
    q.options[0] = o1;
    q.options[1] = o2;
    q.options[2] = o3;
    q.options[3] = o4;

    q.correctAnswer = correct;
    q.category = category;
    q.points = points;

    bank.push_back(q);
}

vector<Question> getQuestionBank() {
    vector<Question> bank;

    // ALGEBRA
    addQuestion(bank, "What is the value of x in the equation 2x + 3 = 7?", "1", "2", "3", "4", 1, "Algebra", 10);
    addQuestion(bank, "Solve: 3x - 9 = 0", "1", "2", "3", "4", 2, "Algebra", 10);
    addQuestion(bank, "What is the solution to x/4 = 5?", "10", "15", "20", "25", 2, "Algebra", 10);
    addQuestion(bank, "Simplify: (x + 2) + (x - 5)", "2x - 3", "x - 3", "2x + 3", "x + 7", 0, "Algebra", 10);
    addQuestion(bank, "Solve: 5x = 45", "5", "7", "8", "9", 3, "Algebra", 10);
    addQuestion(bank, "Factor: x^2 - 9", "(x - 3)(x + 3)", "(x - 9)(x + 1)", "(x - 1)(x + 9)", "Prime", 0, "Algebra", 15);
    addQuestion(bank, "Expand: (x + 3)^2", "x^2 + 6x + 9", "x^2 + 3x + 9", "x^2 + 9", "x^2 + 3", 0, "Algebra", 15);
    addQuestion(bank, "Solve: x^2 = 49", "±7", "7", "-7", "0", 0, "Algebra", 15);
    addQuestion(bank, "Simplify: 4x - 2x + 7", "2x + 7", "6x + 7", "4x + 7", "x + 7", 0, "Algebra", 10);
    addQuestion(bank, "Solve: 8x + 4 = 20", "1", "2", "3", "4", 1, "Algebra", 10);
    addQuestion(bank, "Factor: x^2 + 5x + 6", "(x + 2)(x + 3)", "(x - 2)(x - 3)", "(x + 1)(x + 6)", "(x - 1)(x - 6)", 0, "Algebra", 20);
    addQuestion(bank, "Solve: 12 - x = 5", "5", "6", "7", "8", 2, "Algebra", 10);
    addQuestion(bank, "Simplify: (3x)(2x)", "6x", "6x^2", "5x^2", "3x^2", 1, "Algebra", 10);
    addQuestion(bank, "Solve: x/3 + 2 = 6", "6", "9", "12", "3", 2, "Algebra", 10);
    addQuestion(bank, "Simplify: (x - 4)(x + 4)", "x^2 - 16", "x^2 + 16", "x^2 - 8", "x^2 + 8", 0, "Algebra", 15);
    addQuestion(bank, "Solve: 7x = 63", "7", "8", "9", "6", 2, "Algebra", 10);
    addQuestion(bank, "Solve: x + x + x = 21", "5", "6", "7", "8", 2, "Algebra", 10);
    addQuestion(bank, "Simplify: 9x - 4x", "5x", "13x", "4x", "x", 0, "Algebra", 10);
    addQuestion(bank, "Solve: 3(x - 2) = 12", "2", "4", "6", "8", 2, "Algebra", 10);
    addQuestion(bank, "Factor: x^2 - x - 6", "(x - 3)(x + 2)", "(x + 3)(x - 2)", "(x - 1)(x - 6)", "(x + 1)(x + 6)", 0, "Algebra", 20);
    addQuestion(bank, "Solve: 4x - 7 = 9", "2", "3", "4", "5", 2, "Algebra", 10);
    addQuestion(bank, "Factor: x^2 + 2x - 15", "(x + 5)(x - 3)", "(x - 5)(x + 3)", "(x + 1)(x - 15)", "(x - 1)(x + 15)", 0, "Algebra", 20);
    addQuestion(bank, "Solve: 2(x - 3) = 14", "5", "7", "8", "10", 3, "Algebra", 10);
    addQuestion(bank, "Simplify: (x + 4)(x + 1)", "x^2 + 5x + 4", "x^2 + 4x + 1", "x^2 + x + 4", "x^2 + 3x + 4", 0, "Algebra", 15);
    addQuestion(bank, "Solve: x^2 - 16 = 0", "±4", "4", "-4", "0", 0, "Algebra", 15);
    addQuestion(bank, "Factor: 3x^2 - 12x", "3x(x - 4)", "3(x - 4)", "x(3x - 12)", "3x(x + 4)", 0, "Algebra", 20);
    addQuestion(bank, "Solve: 9x + 3 = 30", "2", "3", "4", "5", 1, "Algebra", 10);
    addQuestion(bank, "Simplify: (2x)(3x^2)", "6x^2", "6x^3", "5x^3", "3x^2", 1, "Algebra", 15);
    addQuestion(bank, "Solve: x/5 - 2 = 1", "10", "15", "20", "5", 1, "Algebra", 10);
    addQuestion(bank, "Factor: x^2 + 7x + 12", "(x + 3)(x + 4)", "(x - 3)(x - 4)", "(x + 2)(x + 6)", "(x - 2)(x - 6)", 0, "Algebra", 20);
    addQuestion(bank, "Solve: x + 5 = 12", "5", "6", "7", "8", 2, "Algebra", 10);
    addQuestion(bank, "Solve: 2x = 10", "2", "5", "10", "20", 1, "Algebra", 10);
    addQuestion(bank, "Solve: x - 3 = 4", "5", "6", "7", "8", 2, "Algebra", 10);
    addQuestion(bank, "Solve: 3 + x = 9", "5", "6", "7", "8", 1, "Algebra", 10);
    addQuestion(bank, "Solve: x/2 = 6", "10", "12", "14", "16", 1, "Algebra", 10);
    addQuestion(bank, "Solve: 2x + 3 = 11", "3", "4", "5", "6", 1, "Algebra", 15);
    addQuestion(bank, "Solve: 3x - 5 = 10", "3", "4", "5", "6", 2, "Algebra", 15);
    addQuestion(bank, "Solve: x^2 = 16", "2", "3", "4", "±4", 3, "Algebra", 15);
    addQuestion(bank, "Solve: 5x = 2x + 9", "2", "3", "4", "5", 1, "Algebra", 15);
    addQuestion(bank, "Solve: x^2 - 9 = 0", "±3", "3", "-3", "9", 0, "Algebra", 15);
    addQuestion(bank, "Solve: x^2 - 5x + 6 = 0", "2,3", "1,6", "3,4", "2,4", 0, "Algebra", 20);
    addQuestion(bank, "Solve: 2x^2 - 8 = 0", "±2", "±4", "±√2", "±√4", 0, "Algebra", 20);
    addQuestion(bank, "Solve: x^2 + 4x + 4 = 0", "-2", "2", "0", "4", 0, "Algebra", 20);
    addQuestion(bank, "Solve: (x-1)(x-3)=0", "1,3", "2,3", "1,2", "0,3", 0, "Algebra", 20);
    addQuestion(bank, "Solve: x^2 - x - 6 = 0", "2,-3", "3,-2", "1,-6", "-1,6", 0, "Algebra", 20);

    // CALCULUS
    addQuestion(bank, "Derivative of x^2 ?", "x", "2x", "x^2", "1", 1, "Calculus", 10);
    addQuestion(bank, "Derivative of sin(x)?", "cos(x)", "-cos(x)", "-sin(x)", "tan(x)", 0, "Calculus", 15);
    addQuestion(bank, "Derivative of e^x?", "e^x", "xe^(x-1)", "1", "0", 0, "Calculus", 10);
    addQuestion(bank, "Integral of 1 dx?", "1", "x", "x + C", "C", 2, "Calculus", 10);
    addQuestion(bank, "Derivative of ln(x)?", "1/x", "x", "ln(x)", "x ln(x)", 0, "Calculus", 15);
    addQuestion(bank, "Integral of x dx?", "x^2", "x^2/2 + C", "2x + C", "x + C", 1, "Calculus", 15);
    addQuestion(bank, "Derivative of cos(x)?", "-sin(x)", "sin(x)", "-cos(x)", "tan(x)", 0, "Calculus", 15);
    addQuestion(bank, "Derivative of 5x?", "1", "5", "5x", "x", 1, "Calculus", 10);
    addQuestion(bank, "Integral of 2x dx?", "x^2 + C", "2x^2 + C", "x + C", "2x + C", 0, "Calculus", 15);
    addQuestion(bank, "Derivative of x^3?", "3x^2", "x^2", "3x", "x^3", 0, "Calculus", 10);
    addQuestion(bank, "Integral of cos(x)?", "sin(x) + C", "-sin(x) + C", "cos(x) + C", "tan(x) + C", 0, "Calculus", 15);
    addQuestion(bank, "Derivative of tan(x)?", "sec^2(x)", "csc^2(x)", "sin(x)", "cos(x)", 0, "Calculus", 20);
    addQuestion(bank, "Integral of 1/x dx?", "ln(x) + C", "x ln(x)", "1/x + C", "x + C", 0, "Calculus", 15);
    addQuestion(bank, "Derivative of sqrt(x)?", "1/(2√x)", "√x", "x^(3/2)", "2√x", 0, "Calculus", 20);
    addQuestion(bank, "Derivative of 7?", "0", "7", "1", "-7", 0, "Calculus", 10);
    addQuestion(bank, "Integral of 0 dx?", "0", "C", "x + C", "1 + C", 1, "Calculus", 10);
    addQuestion(bank, "Derivative of x^-1?", "-x^-2", "x^-2", "-x", "1/x", 0, "Calculus", 20);
    addQuestion(bank, "Integral of e^x dx?", "e^x + C", "x e^x", "1 + C", "ln(x) + C", 0, "Calculus", 15);
    addQuestion(bank, "Derivative of 4x^2?", "4x", "8x", "2x", "8x^2", 1, "Calculus", 10);
    addQuestion(bank, "Integral of sin(x)?", "-cos(x) + C", "cos(x) + C", "tan(x) + C", "sec(x) + C", 0, "Calculus", 20);
    addQuestion(bank, "Derivative of x^4?", "4x^3", "3x^4", "x^3", "4x", 0, "Calculus", 10);
    addQuestion(bank, "Integral of x^2 dx?", "x^3 + C", "x^3/3 + C", "2x + C", "x + C", 1, "Calculus", 15);
    addQuestion(bank, "Derivative of ln(5x)?", "1/x", "5/x", "1/(5x)", "1/(x) + 5", 0, "Calculus", 20);
    addQuestion(bank, "Integral of sec^2(x) dx?", "tan(x) + C", "sec(x) + C", "sin(x) + C", "-cos(x) + C", 0, "Calculus", 20);
    addQuestion(bank, "Derivative of e^(2x)?", "2e^(2x)", "e^(2x)", "2e^x", "e^x", 0, "Calculus", 20);
    addQuestion(bank, "Integral of 3 dx?", "3x + C", "x + C", "3 + C", "C", 0, "Calculus", 10);
    addQuestion(bank, "Derivative of sin(2x)?", "2cos(2x)", "cos(2x)", "-2sin(2x)", "2sin(2x)", 0, "Calculus", 20);
    addQuestion(bank, "Integral of 1/(1 + x^2) dx?", "arctan(x) + C", "ln(x) + C", "x + C", "tan(x) + C", 0, "Calculus", 20);
    addQuestion(bank, "Derivative of x ln(x)?", "ln(x) + 1", "x/x", "1/x", "x ln(x)", 0, "Calculus", 20);
    addQuestion(bank, "Integral of cos(2x) dx?", "sin(2x) + C", "1/2 sin(2x) + C", "2sin(x) + C", "cos(x) + C", 1, "Calculus", 20);
    addQuestion(bank, "d/dx(x^2) = ?", "x", "2x", "x^2", "2", 1, "Calculus", 10);
    addQuestion(bank, "d/dx(5x) = ?", "5", "x", "0", "1", 0, "Calculus", 10);
    addQuestion(bank, "∫1 dx = ?", "x", "1", "0", "x+1", 0, "Calculus", 10);
    addQuestion(bank, "d/dx(3) = ?", "3", "1", "0", "-1", 2, "Calculus", 10);
    addQuestion(bank, "∫x dx = ?", "x", "x^2", "x^2/2", "2x", 2, "Calculus", 10);
    addQuestion(bank, "d/dx(x^3) = ?", "3x^2", "x^2", "x^3", "2x", 0, "Calculus", 15);
    addQuestion(bank, "∫2x dx = ?", "x^2", "2x^2", "x^2+1", "2x", 0, "Calculus", 15);
    addQuestion(bank, "d/dx(sin x) = ?", "cos x", "-cos x", "sin x", "-sin x", 0, "Calculus", 15);
    addQuestion(bank, "∫cos x dx = ?", "sin x", "-sin x", "cos x", "-cos x", 0, "Calculus", 15);
    addQuestion(bank, "d/dx(e^x) = ?", "e^x", "x e^x", "1", "0", 0, "Calculus", 15);
    addQuestion(bank, "d/dx(x^2 sin x) = ?", "2x sin x + x^2 cos x", "x^2 cos x", "2x cos x", "sin x", 0, "Calculus", 20);
    addQuestion(bank, "∫x^2 dx = ?", "x^3/3", "x^2/2", "2x", "x^3", 0, "Calculus", 20);
    addQuestion(bank, "d/dx(ln x) = ?", "1/x", "ln x", "x", "0", 0, "Calculus", 20);
    addQuestion(bank, "∫e^x dx = ?", "e^x", "xe^x", "e^x+1", "ln x", 0, "Calculus", 20);
    addQuestion(bank, "d/dx(tan x) = ?", "sec^2 x", "tan x", "sec x", "cos x", 0, "Calculus", 20);

    // COMBINATORICS
    addQuestion(bank, "How many permutations of 3 distinct objects exist?", "3", "6", "9", "12", 1, "Combinatorics", 10);
    addQuestion(bank, "How many subsets does a set of size 4 have?", "4", "8", "12", "16", 3, "Combinatorics", 15);
    addQuestion(bank, "What is 5! ?", "60", "100", "120", "20", 2, "Combinatorics", 15);
    addQuestion(bank, "Number of ways to choose 2 from 4?", "4", "6", "8", "12", 1, "Combinatorics", 15);
    addQuestion(bank, "How many permutations of the word CAT?", "3", "6", "9", "12", 1, "Combinatorics", 10);
    addQuestion(bank, "How many ways to arrange 4 books?", "4", "8", "16", "24", 3, "Combinatorics", 15);
    addQuestion(bank, "C(5,1) equals?", "1", "5", "10", "20", 1, "Combinatorics", 10);
    addQuestion(bank, "C(6,2) equals?", "12", "15", "30", "20", 1, "Combinatorics", 15);
    addQuestion(bank, "P(4,2) equals?", "8", "12", "6", "4", 1, "Combinatorics", 15);
    addQuestion(bank, "How many subsets does a set of size 3 have?", "3", "6", "8", "9", 2, "Combinatorics", 10);
    addQuestion(bank, "What is 4! ?", "12", "16", "24", "32", 2, "Combinatorics", 10);
    addQuestion(bank, "C(7,0) equals?", "0", "1", "7", "49", 1, "Combinatorics", 10);
    addQuestion(bank, "C(7,7) equals?", "0", "1", "7", "49", 1, "Combinatorics", 10);
    addQuestion(bank, "Number of permutations of 5 objects?", "20", "60", "120", "720", 2, "Combinatorics", 20);
    addQuestion(bank, "C(8,2) equals?", "16", "28", "32", "56", 1, "Combinatorics", 15);
    addQuestion(bank, "P(5,3) equals?", "20", "30", "60", "120", 2, "Combinatorics", 20);
    addQuestion(bank, "How many ways to choose 3 from 6?", "10", "15", "20", "30", 2, "Combinatorics", 15);
    addQuestion(bank, "C(10,1) equals?", "1", "5", "10", "20", 2, "Combinatorics", 10);
    addQuestion(bank, "C(10,2) equals?", "20", "30", "40", "45", 3, "Combinatorics", 20);
    addQuestion(bank, "How many subsets does a set of size 5 have?", "10", "16", "32", "64", 2, "Combinatorics", 15);
    addQuestion(bank, "How many permutations of 4 distinct objects?", "12", "16", "20", "24", 3, "Combinatorics", 15);
    addQuestion(bank, "C(9,3) equals?", "72", "84", "126", "36", 1, "Combinatorics", 20);
    addQuestion(bank, "P(6,2) equals?", "12", "20", "30", "36", 2, "Combinatorics", 15);
    addQuestion(bank, "How many subsets does a set of size 6 have?", "32", "64", "48", "16", 1, "Combinatorics", 15);
    addQuestion(bank, "What is 6! ?", "360", "720", "120", "240", 1, "Combinatorics", 20);
    addQuestion(bank, "C(8,3) equals?", "48", "56", "64", "80", 1, "Combinatorics", 20);
    addQuestion(bank, "P(7,3) equals?", "210", "120", "504", "720", 0, "Combinatorics", 20);
    addQuestion(bank, "How many ways to choose 4 from 8?", "56", "70", "28", "84", 1, "Combinatorics", 20);
    addQuestion(bank, "C(12,2) equals?", "66", "72", "132", "24", 0, "Combinatorics", 15);
    addQuestion(bank, "How many permutations of the word LEVEL?", "60", "120", "30", "20", 2, "Combinatorics", 20);
    addQuestion(bank, "5! = ?", "60", "120", "24", "720", 1, "Combinatorics", 10);
    addQuestion(bank, "Number of ways to choose 1 from 3?", "1", "2", "3", "6", 2, "Combinatorics", 10);
    addQuestion(bank, "3! = ?", "3", "6", "9", "12", 1, "Combinatorics", 10);
    addQuestion(bank, "Number of permutations of 2 items?", "1", "2", "3", "4", 1, "Combinatorics", 10);
    addQuestion(bank, "C(4,1) = ?", "4", "3", "2", "1", 0, "Combinatorics", 10);
    addQuestion(bank, "C(5,2) = ?", "10", "20", "5", "15", 0, "Combinatorics", 15);
    addQuestion(bank, "4! = ?", "24", "12", "16", "20", 0, "Combinatorics", 15);
    addQuestion(bank, "Permutations of 3 letters?", "3", "6", "9", "12", 1, "Combinatorics", 15);
    addQuestion(bank, "C(6,3) = ?", "20", "15", "10", "25", 0, "Combinatorics", 15);
    addQuestion(bank, "Ways to arrange 3 items?", "3", "6", "9", "12", 1, "Combinatorics", 15);
    addQuestion(bank, "C(8,2) = ?", "28", "16", "32", "24", 0, "Combinatorics", 20);
    addQuestion(bank, "6! = ?", "720", "360", "120", "840", 0, "Combinatorics", 20);
    addQuestion(bank, "C(7,3) = ?", "35", "21", "28", "42", 0, "Combinatorics", 20);
    addQuestion(bank, "Permutations of 4 items?", "24", "12", "16", "20", 0, "Combinatorics", 20);
    addQuestion(bank, "C(10,1) = ?", "10", "9", "8", "7", 0, "Combinatorics", 20);
    addQuestion(bank, "How many ways to arrange 3 books on a shelf?", "3", "6", "9", "12", 1, "Combinatorics", 10);
    addQuestion(bank, "What is 5! ?", "60", "100", "120", "24", 2, "Combinatorics", 10);
    addQuestion(bank, "How many ways to choose 1 item from 4?", "1", "2", "4", "8", 2, "Combinatorics", 10);
    addQuestion(bank, "What is 0! ?", "0", "1", "Undefined", "Infinity", 1, "Combinatorics", 10);
    addQuestion(bank, "How many 2-digit numbers can be formed from {1,2,3} with repetition?", "6", "8", "9", "12", 2, "Combinatorics", 10);
    addQuestion(bank, "What is 4! / 4?", "4", "6", "8", "24", 1, "Combinatorics", 10);
    addQuestion(bank, "How many ways to arrange 2 items from {A,B,C} without repetition?", "3", "6", "9", "2", 1, "Combinatorics", 10);
    addQuestion(bank, "P(4,1) = ?", "1", "4", "12", "24", 1, "Combinatorics", 10);
    addQuestion(bank, "How many subsets does a set of 2 elements have?", "2", "3", "4", "6", 2, "Combinatorics", 10);
    addQuestion(bank, "C(4,0) = ?", "0", "1", "4", "Undefined", 1, "Combinatorics", 10);
    addQuestion(bank, "C(5,2) = ?", "5", "10", "15", "20", 1, "Combinatorics", 15);
    addQuestion(bank, "How many ways to arrange the letters in 'CAT'?", "3", "6", "9", "12", 1, "Combinatorics", 15);
    addQuestion(bank, "P(5,2) = ?", "10", "15", "20", "25", 2, "Combinatorics", 15);
    addQuestion(bank, "How many subsets does a set of 4 elements have?", "8", "12", "16", "32", 2, "Combinatorics", 15);
    addQuestion(bank, "C(6,3) = ?", "15", "20", "18", "12", 1, "Combinatorics", 15);
    addQuestion(bank, "How many ways to arrange letters in 'LEVEL'?", "60", "120", "30", "20", 0, "Combinatorics", 20);
    addQuestion(bank, "How many ways to distribute 4 identical balls into 3 distinct boxes?", "9", "12", "15", "18", 2, "Combinatorics", 20);
    addQuestion(bank, "C(10,3) = ?", "120", "720", "210", "90", 0, "Combinatorics", 20);
    addQuestion(bank, "How many diagonals does a hexagon have?", "6", "8", "9", "12", 2, "Combinatorics", 20);
    addQuestion(bank, "In how many ways can 5 people sit in a circle?", "120", "60", "24", "20", 2, "Combinatorics", 20);

    // GEOMETRY
    addQuestion(bank, "Sum of angles in a triangle?", "90°", "180°", "270°", "360°", 1, "Geometry", 10);
    addQuestion(bank, "Area of a circle?", "πr", "2πr", "πr^2", "r^2", 2, "Geometry", 15);
    addQuestion(bank, "Perimeter of a square with side s?", "s^2", "4s", "2s", "8s", 1, "Geometry", 10);
    addQuestion(bank, "Area of a rectangle?", "l + w", "lw", "2(l + w)", "l^2 + w^2", 1, "Geometry", 10);
    addQuestion(bank, "Volume of a cube?", "s^2", "s^3", "3s", "6s^2", 1, "Geometry", 10);
    addQuestion(bank, "Right angle equals?", "45°", "60°", "90°", "180°", 2, "Geometry", 10);
    addQuestion(bank, "A polygon with 5 sides is called?", "Triangle", "Quadrilateral", "Pentagon", "Hexagon", 2, "Geometry", 10);
    addQuestion(bank, "Area of a triangle?", "bh", "1/2 bh", "2bh", "b + h", 1, "Geometry", 10);
    addQuestion(bank, "A shape with all sides equal is?", "Scalene", "Isosceles", "Equilateral", "Right", 2, "Geometry", 10);
    addQuestion(bank, "How many degrees in a straight line?", "90°", "180°", "270°", "360°", 1, "Geometry", 10);
    addQuestion(bank, "Circumference of a circle?", "πr^2", "2πr", "πr", "r^2", 1, "Geometry", 15);
    addQuestion(bank, "A 6‑sided polygon is a?", "Pentagon", "Hexagon", "Heptagon", "Octagon", 1, "Geometry", 10);
    addQuestion(bank, "Area of a square?", "s", "2s", "s^2", "4s", 2, "Geometry", 10);
    addQuestion(bank, "A triangle with all angles < 90° is?", "Acute", "Right", "Obtuse", "Reflex", 0, "Geometry", 10);
    addQuestion(bank, "A triangle with one angle > 90° is?", "Acute", "Right", "Obtuse", "Equilateral", 2, "Geometry", 10);
    addQuestion(bank, "A line with no endpoints is?", "Segment", "Ray", "Line", "Chord", 2, "Geometry", 10);
    addQuestion(bank, "A 3D shape with circular base is?", "Cube", "Sphere", "Cylinder", "Cone", 2, "Geometry", 10);
    addQuestion(bank, "A 3D shape with no edges is?", "Cube", "Sphere", "Cylinder", "Pyramid", 1, "Geometry", 10);
    addQuestion(bank, "Opposite sides of a parallelogram are?", "Equal", "Unequal", "Curved", "Parallel only", 0, "Geometry", 15);
    addQuestion(bank, "Interior angles of a square each measure?", "45°", "60°", "90°", "120°", 2, "Geometry", 10);
    addQuestion(bank, "Area of a trapezoid?", "1/2(a + b)h", "ah", "ab/2", "a + b + h", 0, "Geometry", 20);
    addQuestion(bank, "Volume of a sphere?", "4πr^2", "4/3 πr^3", "πr^3", "2πr^3", 1, "Geometry", 20);
    addQuestion(bank, "Sum of interior angles of a pentagon?", "360°", "540°", "720°", "900°", 1, "Geometry", 15);
    addQuestion(bank, "Diagonal of a square with side s?", "s", "s√2", "2s", "s/2", 1, "Geometry", 20);
    addQuestion(bank, "Area of a parallelogram?", "bh", "1/2 bh", "b + h", "b/h", 0, "Geometry", 10);
    addQuestion(bank, "A triangle with one 90° angle is?", "Acute", "Right", "Obtuse", "Equilateral", 1, "Geometry", 10);
    addQuestion(bank, "A polygon with 8 sides is a?", "Hexagon", "Heptagon", "Octagon", "Nonagon", 2, "Geometry", 10);
    addQuestion(bank, "Volume of a cylinder?", "πr^2h", "2πrh", "πrh^2", "πr^3", 0, "Geometry", 15);
    addQuestion(bank, "Surface area of a cube?", "6s", "6s^2", "s^3", "3s^2", 1, "Geometry", 15);
    addQuestion(bank, "A line that touches a circle at exactly one point is a?", "Chord", "Secant", "Tangent", "Radius", 2, "Geometry", 20);
    addQuestion(bank, "Sum of angles in triangle?", "90", "180", "270", "360", 1, "Geometry", 10);
    addQuestion(bank, "Area of square (side 2)?", "2", "4", "6", "8", 1, "Geometry", 10);
    addQuestion(bank, "Perimeter of square side 3?", "6", "9", "12", "15", 2, "Geometry", 10);
    addQuestion(bank, "Angles in right angle?", "45", "60", "90", "120", 2, "Geometry", 10);
    addQuestion(bank, "Circle has how many degrees?", "180", "270", "360", "90", 2, "Geometry", 10);
    addQuestion(bank, "Area of triangle (base 4 height 3)?", "6", "12", "8", "10", 0, "Geometry", 15);
    addQuestion(bank, "Circumference formula?", "2πr", "πr^2", "πd^2", "r^2", 0, "Geometry", 15);
    addQuestion(bank, "Area of circle?", "πr^2", "2πr", "πd", "r^2", 0, "Geometry", 15);
    addQuestion(bank, "Pythagoras: 3,4,?", "5", "6", "7", "8", 0, "Geometry", 15);
    addQuestion(bank, "Rectangle area 5x3?", "15", "10", "8", "20", 0, "Geometry", 15);
    addQuestion(bank, "Hypotenuse of 5,12 triangle?", "13", "12", "10", "14", 0, "Geometry", 20);
    addQuestion(bank, "Area of circle radius 3?", "9π", "6π", "3π", "12π", 0, "Geometry", 20);
    addQuestion(bank, "Diagonal of square side 2?", "2√2", "4", "√2", "2", 0, "Geometry", 20);
    addQuestion(bank, "Volume cube side 3?", "27", "9", "18", "36", 0, "Geometry", 20);
    addQuestion(bank, "Surface area cube side 2?", "24", "8", "16", "32", 0, "Geometry", 20);

    // TRIGONOMETRY
    addQuestion(bank, "sin(90deg) = ?", "0", "1", "-1", "2", 1, "Trigonometry", 10);
    addQuestion(bank, "cos(0deg) = ?", "0", "1", "-1", "2", 1, "Trigonometry", 10);
    addQuestion(bank, "tan(45deg) = ?", "0", "1", "-1", "√3", 1, "Trigonometry", 10);
    addQuestion(bank, "sin(0°) = ?", "0", "1", "-1", "2", 0, "Trigonometry", 10);
    addQuestion(bank, "cos(90°) = ?", "0", "1", "-1", "2", 0, "Trigonometry", 10);
    addQuestion(bank, "tan(0°) = ?", "0", "1", "-1", "Undefined", 0, "Trigonometry", 10);
    addQuestion(bank, "sin(180°) = ?", "0", "1", "-1", "2", 0, "Trigonometry", 10);
    addQuestion(bank, "cos(180°) = ?", "0", "1", "-1", "2", 2, "Trigonometry", 10);
    addQuestion(bank, "tan(90°) = ?", "0", "1", "-1", "Undefined", 3, "Trigonometry", 15);
    addQuestion(bank, "sin(30°) = ?", "1/2", "√3/2", "0", "1", 0, "Trigonometry", 15);
    addQuestion(bank, "cos(60°) = ?", "1/2", "√3/2", "0", "1", 0, "Trigonometry", 15);
    addQuestion(bank, "tan(30°) = ?", "1/2", "√3/3", "1", "√3", 1, "Trigonometry", 15);
    addQuestion(bank, "sin(60°) = ?", "1/2", "√3/2", "0", "1", 1, "Trigonometry", 15);
    addQuestion(bank, "cos(30°) = ?", "1/2", "√3/2", "0", "1", 1, "Trigonometry", 15);
    addQuestion(bank, "tan(60°) = ?", "1", "√3", "1/√3", "0", 1, "Trigonometry", 20);
    addQuestion(bank, "sin(270°) = ?", "0", "1", "-1", "2", 2, "Trigonometry", 20);
    addQuestion(bank, "cos(270°) = ?", "0", "1", "-1", "2", 0, "Trigonometry", 20);
    addQuestion(bank, "tan(180°) = ?", "0", "1", "-1", "Undefined", 0, "Trigonometry", 20);
    addQuestion(bank, "sin(45°) = ?", "1/2", "√2/2", "√3/2", "1", 1, "Trigonometry", 20);
    addQuestion(bank, "cos(45°) = ?", "1/2", "√2/2", "√3/2", "1", 1, "Trigonometry", 20);
    addQuestion(bank, "sin(210°) = ?", "-1/2", "√3/2", "-√3/2", "1/2", 0, "Trigonometry", 20);
    addQuestion(bank, "cos(300°) = ?", "1/2", "√3/2", "-1/2", "-√3/2", 0, "Trigonometry", 20);
    addQuestion(bank, "tan(135°) = ?", "1", "-1", "√3", "-√3", 1, "Trigonometry", 20);
    addQuestion(bank, "sin(225°) = ?", "-√2/2", "√2/2", "-1/2", "1/2", 0, "Trigonometry", 20);
    addQuestion(bank, "cos(240°) = ?", "-1/2", "-√3/2", "1/2", "√3/2", 0, "Trigonometry", 20);
    addQuestion(bank, "tan(315°) = ?", "1", "-1", "√3", "-√3", 1, "Trigonometry", 20);
    addQuestion(bank, "sin(π/6) = ?", "1/2", "√3/2", "0", "1", 0, "Trigonometry", 15);
    addQuestion(bank, "cos(π/3) = ?", "1/2", "√3/2", "0", "1", 0, "Trigonometry", 15);
    addQuestion(bank, "tan(π/4) = ?", "0", "1", "-1", "Undefined", 1, "Trigonometry", 10);
    addQuestion(bank, "sin(π/2) = ?", "0", "1", "-1", "2", 1, "Trigonometry", 10);
    addQuestion(bank, "sin(0) = ?", "0", "1", "-1", "2", 0, "Trigonometry", 10);
    addQuestion(bank, "cos(0) = ?", "0", "1", "-1", "2", 1, "Trigonometry", 10);
    addQuestion(bank, "tan(0) = ?", "0", "1", "-1", "undefined", 0, "Trigonometry", 10);
    addQuestion(bank, "sin(π/2) = ?", "0", "1", "-1", "2", 1, "Trigonometry", 10);
    addQuestion(bank, "cos(π/2) = ?", "0", "1", "-1", "2", 0, "Trigonometry", 10);
    addQuestion(bank, "sin(π) = ?", "0", "1", "-1", "2", 0, "Trigonometry", 15);
    addQuestion(bank, "cos(π) = ?", "-1", "1", "0", "2", 0, "Trigonometry", 15);
    addQuestion(bank, "tan(π/4) = ?", "0", "1", "-1", "2", 1, "Trigonometry", 15);
    addQuestion(bank, "sin(π/6) = ?", "1/2", "√2/2", "√3/2", "0", 0, "Trigonometry", 15);
    addQuestion(bank, "cos(π/3) = ?", "1/2", "√2/2", "√3/2", "0", 0, "Trigonometry", 15);
    addQuestion(bank, "sin^2x + cos^2x = ?", "1", "0", "x", "2", 0, "Trigonometry", 20);
    addQuestion(bank, "tan x = sin x / ?", "cos x", "tan x", "sin x", "1", 0, "Trigonometry", 20);
    addQuestion(bank, "sec x = ?", "1/cos x", "1/sin x", "cos x", "tan x", 0, "Trigonometry", 20);
    addQuestion(bank, "csc x = ?", "1/sin x", "1/cos x", "tan x", "cos x", 0, "Trigonometry", 20);
    addQuestion(bank, "cos^2x - sin^2x = ?", "cos2x", "sin2x", "1", "0", 0, "Trigonometry", 20);

    return bank;
}

vector<Question> getQuestionsByCategory(string category) {
    vector<Question> bank = getQuestionBank();
    vector<Question> filtered;

    for (Question q : bank)
    {
        if (q.category == category) {
            filtered.push_back(q);
        }
    }

    return filtered;
}