#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
    int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    while (userGuess != numberToGuess) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number " << numberToGuess 
                 << " in " << attempts << " attempts." << endl;
        }
    }

    return 0;
}