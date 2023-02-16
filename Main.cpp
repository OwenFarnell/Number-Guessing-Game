#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Generate a random number between 1 and 100
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    
    int guess = 0;
    int numGuesses = 0;
    
    cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?" << endl;
    
    do {
        // Prompt the user to enter a guess
        cout << "Enter your guess: ";
        cin >> guess;
        
        // Increment the number of guesses
        numGuesses++;
        
        // Check if the guess is too high or too low
        if (guess > randomNumber) {
            cout << "Too high. Guess again." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low. Guess again." << endl;
        }
    } while (guess != randomNumber);
    
    // Congratulate the user and display the number of guesses it took
    cout << "Congratulations! You guessed the number in " << numGuesses << " guesses." << endl;
    
    return 0;
}
