#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts = 0;

    srand(time(0)); // random seed
    number = rand() % 100 + 1; // random number 1-100

    cout << "=====================================\n";
    cout << "?? Welcome to the Number Guessing Game ??\n";
    cout << "=====================================\n";
    cout << "I'm thinking of a number between 1 and 100.\n";
    cout << "Can you guess it?\n\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number)
            cout << "Too high! Try again.\n";
        else if (guess < number)
            cout << "Too low! Try again.\n";
        else
            cout << "\n?? Congratulations! You guessed the number " 
                 << number << " in " << attempts << " attempts.\n";

    } while (guess != number);

    cout << "=====================================\n";
    cout << "Thanks for playing!\n";

    return 0;
}
