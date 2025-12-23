#include "../include/MCQQuestion.h"
#include <limits> 

MCQQuestion::MCQQuestion(string text, int p, Category cat, vector<string> opts, int correctIdx)
    : Question(text, p, cat), options(opts), correctOptionIndex(correctIdx) {}

void MCQQuestion::askQuestion() const {
    cout << "\n[" << getCategory() << "] (Points: " << points << ")\n";
    cout << "Q: " << questionText << endl;
    for (size_t i = 0; i < options.size(); ++i) {
        cout << "  " << (i + 1) << ". " << options[i] << endl;
    }
}

bool MCQQuestion::checkAnswer() {
    int userChoice;
    cout << "Enter your choice (1-" << options.size() << "): ";
    
    try {
        if (!(cin >> userChoice)) {
            throw InvalidInputException("Input must be a number.");
        }
        if (userChoice < 1 || userChoice > (int)options.size()) {
            throw InvalidInputException("Option out of range.");
        }
    } 
    catch (const InvalidInputException& e) {
        cout << "Error: " << e.what() << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false; 
    }

    if (userChoice == correctOptionIndex) {
        cout << "Correct! +" << points << " points.\n";
        return true;
    } else {
        cout << "Wrong! Correct option was " << correctOptionIndex << ".\n";
        return false;
    }
}