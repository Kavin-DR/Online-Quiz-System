#ifndef TRUEFALSEQUESTION_H
#define TRUEFALSEQUESTION_H

#include "Question.h"

class TrueFalseQuestion : public Question {
private:
    bool correctAnswer; 

public:
    TrueFalseQuestion(string text, int p, Category cat, bool correct);

    void askQuestion() const override;
    bool checkAnswer() override;
};

#endif