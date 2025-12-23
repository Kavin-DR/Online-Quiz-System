<div align="center">

  <img src="https://img.icons8.com/external-flaticons-lineal-color-flat-icons/96/external-quiz-online-education-flaticons-lineal-color-flat-icons.png" alt="Quiz Logo" width="80" />

  # 🧠 Online Quiz System
  
  **A dynamic C++ console application featuring Polymorphism, Enumerations, and Exception Handling.**

  <!-- Badges -->
  <p>
    <img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
    <img src="https://img.shields.io/badge/Paradigm-OOP-ff69b4?style=for-the-badge" />
    <img src="https://img.shields.io/badge/Type-Console_App-4CAF50?style=for-the-badge" />
    <img src="https://img.shields.io/badge/License-MIT-blue?style=for-the-badge" />
  </p>

  <h4>
    <a href="#-features">View Features</a>
    <span> · </span>
    <a href="#-installation--usage">How to Run</a>
    <span> · </span>
    <a href="#-oop-concepts-applied">OOP Concepts</a>
  </h4>
</div>

<br />

## 📖 Introduction
The **Online Quiz System** is an interactive C++ application designed to conduct assessments across various topics like Science, Math, and Programming. 

Unlike simple linear programs, this system utilizes **Polymorphism** to handle different question types (MCQ vs. True/False) seamlessly and implements robust **Exception Handling** to prevent crashes from invalid user input.

---

## 🚀 Features

| Feature | Description |
| :--- | :--- |
| **📝 Multiple Question Types** | Supports both Multiple Choice Questions (MCQ) and True/False questions. |
| **🛡️ Robust Input Validation** | Uses **Exception Handling** (`try-catch`) to manage invalid inputs without crashing. |
| **🏷️ Category Management** | Organizes questions using C++ **Enumerations** (Science, Math, GK, etc.). |
| **📊 Dynamic Scoring** | Calculates percentage and provides performance feedback (e.g., "Excellent", "Needs Improvement"). |
| **🧩 Extensible Design** | New question types can be added easily by inheriting from the base `Question` class. |

---

## 🧩 OOP Concepts Applied

| Concept | Implementation in Project |
| :--- | :--- |
| **Polymorphism** | The `QuizManager` treats all questions generically. The specific `askQuestion()` logic runs based on the object type at runtime. |
| **Abstract Classes** | `Question` is a pure abstract base class. You cannot create a generic question; it *must* be an MCQ or True/False. |
| **Exception Handling** | Custom `InvalidInputException` ensures the game continues even if a user types text when a number is expected. |
| **Encapsulation** | Score tracking and answer validation logic are hidden within private class members. |
| **Enumerations** | `enum Category` ensures type safety when assigning topics to questions. |

---

## 💻 Output Screenshot

<div align="center">
  <!-- REPLACE 'assets/output.png' WITH YOUR ACTUAL IMAGE PATH -->
  <a href="assets/output.png" target="_blank">
    <img src="assets/output.png" width="800" alt="Online Quiz System Running" style="border-radius: 10px; box-shadow: 0px 4px 10px rgba(0,0,0,0.2);" />
  </a>
  <br>
  <sub>👆 Click the image to view full resolution</sub>
</div>

---

## 🛠️ Installation & Usage

### 📋 Prerequisites
*   A C++ Compiler (GCC, MinGW, or Clang).
*   Git (optional).

### ⚙️ Steps to Compile & Run

1.  **Clone the Repository**
    ```bash
    git clone https://github.com/hadileey/Online-Quiz-System.git
    cd Online-Quiz-System
    ```

2.  **Compile the Code**
    ```bash
    g++ -Iinclude src/*.cpp -o quiz_app
    ```

3.  **Run the Application**
    *   **Windows:**
        ```bash
        .\quiz_app.exe
        ```
    *   **Linux / Mac:**
        ```bash
        ./quiz_app
        ```

---

## 📂 Project Structure

```bash
OnlineQuizSystem/
├── 📂 include/           # Header files (.h)
│   ├── MCQQuestion.h
│   ├── Question.h        # Abstract Base Class
│   ├── QuizManager.h
│   ├── TrueFalseQuestion.h
│   └── Utils.h           # Enums & Exceptions
├── 📂 src/               # Source files (.cpp)
│   ├── MCQQuestion.cpp
│   ├── Question.cpp
│   ├── QuizManager.cpp
│   ├── TrueFalseQuestion.cpp
│   └── main.cpp
├── 📂 assets/            # Screenshots
│   └── output.png
└── README.md
