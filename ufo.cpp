#include<iostream>
#include<vector>
#include "ufo_functions.h"

int main() {
    greet();

    // The secret word the player needs to guess
    std::string codeword = "extraterrestrial";

    // The current state of the guessed word (initially all underscores)
    std::string answer = "__________";

    // Number of incorrect guesses
    int misses = 0;

    // Vector to keep track of incorrect guessed letters
    std::vector<char> incorrect;

    //Boolean to check if the current guess was correct
    bool guess = false;

    // Variable to store the user's letter input
    char letter;

    // Game loop continues until the word is guessed or max misses reached
    while (answer != codeword && misses < 7) {

        // Show the current UFO (based on number of misses)
        display_misses(misses);

        // Show incorrect guesses and current progress of the word
        display_status(incorrect, answer);

        // Ask the player to enter a letter
        std::cout << "\n\nPlease enter your guess: ";
        std::cin >> letter;

        // Reset the guess flag for this turn
        guess = false;

        // Check if the guessed letter is in the codeword
        for (int i = 0; i < codeword.length(); i++) {
            if (letter == codeword[i]) {
                // If it's a match, reveal the letter in the answer
                guess = true;
                answer[i] = letter;
            }
        }

        // If the guess was correct
        if (guess) {
          std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
        } else {
         // If the guess was wrong, update incorrect guesses and misses
            std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;
            }
        }

        // When the loop ends, show the end result of the game
        end_game(answer, codeword);

    return 0;
    }


    return 0;
}
