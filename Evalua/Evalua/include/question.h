#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <vector>
using namespace std;

struct Question {
    string text;
    string options[4];
    int correctAnswer;
    string category;
    int points;
};

vector<Question> getQuestionBank();
vector<Question> getQuestionsByCategory(string category); 

#endif