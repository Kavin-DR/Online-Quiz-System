#ifndef MCQQUESTION_H
#define MCQQUESTION_H

#include "Question.h"
#include <vector>

class MCQQuestion : public Question {
private:
    vector<string> options;
    int correctOptionIndex; 

public:
    MCQQuestion(string text, int p, Category cat, vector<string> opts, int correctIdx);
    
    void askQuestion() const override;
    bool checkAnswer() override;
};

#endif