#ifndef UTILS_H
#define UTILS_H

#include <exception>
#include <string>

using namespace std;

enum Category {
    SCIENCE,
    MATH,
    GK,
    PROGRAMMING
};

inline string getCategoryString(Category c) {
    switch(c) {
        case SCIENCE: return "Science";
        case MATH: return "Math";
        case GK: return "General Knowledge";
        case PROGRAMMING: return "Programming";
        default: return "Unknown";
    }
}

class InvalidInputException : public exception {
    string message;
public:
    InvalidInputException(string msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

#endif