#include "../include/QuizManager.h"
#include "../include/MCQQuestion.h"
#include "../include/TrueFalseQuestion.h"

QuizManager::QuizManager() : totalScore(0), maxPossibleScore(0) {
    vector<string> opts1 = {"Java", "C++", "Python", "HTML"};
    addQuestion(new MCQQuestion("Which language supports pointers natively?", 10, PROGRAMMING, opts1, 2));

    addQuestion(new TrueFalseQuestion("The Earth is flat.", 5, SCIENCE, false));

    vector<string> opts2 = {"3.12", "3.14", "3.16", "3.18"};
    addQuestion(new MCQQuestion("Value of PI up to 2 decimals?", 10, MATH, opts2, 2));

    addQuestion(new TrueFalseQuestion("C++ was developed by Bjarne Stroustrup.", 5, GK, true));
}

QuizManager::~QuizManager() {
    for (Question* q : questionBank) {
        delete q;
    }
}

void QuizManager::addQuestion(Question* q) {
    questionBank.push_back(q);
    maxPossibleScore += q->getPoints();
}

void QuizManager::startQuiz() {
    cout << "=== Welcome to the Online Quiz System ===\n";
    cout << "Total Questions: " << questionBank.size() << "\n";
    
    for (Question* q : questionBank) {
        q->askQuestion();   
        if (q->checkAnswer()) { 
            totalScore += q->getPoints();
        }
        cout << "-----------------------------------------";
    }
    showResults();
}

void QuizManager::showResults() const {
    cout << "\n\n=== QUIZ SUMMARY ===\n";
    cout << "Your Score: " << totalScore << " / " << maxPossibleScore << endl;
    double percentage = ((double)totalScore / maxPossibleScore) * 100;
    cout << "Percentage: " << percentage << "%\n";
    
    if (percentage >= 80) cout << "Performance: Excellent! 🌟\n";
    else if (percentage >= 50) cout << "Performance: Good. 👍\n";
    else cout << "Performance: Needs Improvement. 📚\n";
}