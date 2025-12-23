#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>
#include <string>
#include "Utils.h"

using namespace std;

class Question {
protected:
    string questionText;
    int points;
    Category category;

public:
    Question(string text, int p, Category cat);
    virtual ~Question() {}

    virtual void askQuestion() const = 0;   
    virtual bool checkAnswer() = 0;       

    int getPoints() const { return points; }
    string getCategory() const { return getCategoryString(category); }
};

#endif