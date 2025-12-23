#ifndef QUIZMANAGER_H
#define QUIZMANAGER_H

#include <vector>
#include "Question.h"

class QuizManager {
private:
    vector<Question*> questionBank;
    int totalScore;
    int maxPossibleScore;

public:
    QuizManager();
    ~QuizManager();

    void addQuestion(Question* q);
    void startQuiz(); 
    void showResults() const;
};

#endif