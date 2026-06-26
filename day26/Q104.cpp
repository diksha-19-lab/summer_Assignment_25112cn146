#include <iostream>
using namespace std;

int main() {
    int score = 0, answer;

    cout << "===== QUIZ APPLICATION =====\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. C++\n2. HTML\n3. CSS\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 1)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    // Question 4
    cout << "\n4. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    // Question 5
    cout << "\n5. Which symbol is used for single-line comments in C++?\n";
    cout << "1. /* */\n2. //\n3. ##\n4. <!-- -->\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    cout << "\n===== RESULT =====\n";
    cout << "Your Score: " << score << " out of 5\n";

    if (score == 5)
        cout << "Excellent!\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}