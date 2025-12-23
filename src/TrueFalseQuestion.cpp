#include "../include/TrueFalseQuestion.h"

TrueFalseQuestion::TrueFalseQuestion(string text, int p, Category cat, bool correct)
    : Question(text, p, cat), correctAnswer(correct) {}

void TrueFalseQuestion::askQuestion() const {
    cout << "\n[" << getCategory() << "] (Points: " << points << ")\n";
    cout << "Q: " << questionText << "\n  (T) True / (F) False" << endl;
}

bool TrueFalseQuestion::checkAnswer() {
    char userChar;
    cout << "Enter T or F: ";
    cin >> userChar;
    userChar = toupper(userChar);

    try {
        if (userChar != 'T' && userChar != 'F') {
            throw InvalidInputException("Input must be 'T' or 'F'.");
        }
    } catch (const InvalidInputException& e) {
        cout << "Error: " << e.what() << endl;
        cin.ignore(100, '\n'); 
        return false;
    }

    bool userBool = (userChar == 'T');
    if (userBool == correctAnswer) {
        cout << "Correct! +" << points << " points.\n";
        return true;
    } else {
        cout << "Wrong! Answer was " << (correctAnswer ? "True" : "False") << ".\n";
        return false;
    }
}