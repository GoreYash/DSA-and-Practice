#include <iostream>
using std::cout,std::cin,std::string;

int main() {
    const int numQuestions = 5;  // keep it small for demo

    // 1D array for questions
    string questions[numQuestions] = {
        "Who is known as the father of C++?",
        "What does CPU stand for?",
        "Which of the following is not an OOP concept in C++?",
        "Which planet is known as the Red Planet?",
        "Which data type in C++ is used to store true/false values?"
    };

    // 2D array for options
    string options[numQuestions][4] = {
        {"a) Bjarne Stroustrup", "b) Dennis Ritchie", "c) James Gosling", "d) Guido van Rossum"},
        {"a) Central Process Unit", "b) Central Processing Unit", "c) Computer Personal Unit", "d) Control Processing Unit"},
        {"a) Inheritance", "b) Encapsulation", "c) Polymorphism", "d) Compilation"},
        {"a) Venus", "b) Mars", "c) Jupiter", "d) Saturn"},
        {"a) int", "b) char", "c) bool", "d) double"}
    };

    // 1D array for answers (store correct option letter)
    char answers[numQuestions] = {'a', 'b', 'd', 'b', 'c'};

    char guess;

    cout << "************************************************\n";
    cout << "Welcome to the quizz game!\nPlease enter the correct options (a,b,c,d): \n";
    cout << "************************************************\n";
    for(int i = 0; i < numQuestions; i++){
        cout << "Q" << i + 1<< ") " << questions[i] << "\n";
        cout << "Options:\n";
        for(int j = 0; j<4; j++){
            cout << options[i][j] << "\n";
        }
        cout << "Enter your guess: ";
        cin >> guess;

        guess == answers[i]?cout << "You are correct!\n":cout << "You are wrong!\n";
        cout << "************************************************\n";
        
    }
}