#include<iostream>
#include<vector>
#include "ufo_functions.h"

int main() {
    greet();

    // The secret word the player needs to guess
    std::string codeword = "codecademy";

    // The current state of the guessed word (initially all underscores)
    std::string answer = "__________";

    // Number of incorrect guesses
    int misses = 0;

    // Vector to keep track of incorrect guessed letters
    std::vector<char> incorrect_guesses;

    //Boolean to check if the current guess was correct
    bool guess = false;

    // Variable to store the user's letter input
    char letter;

    // Game loop continues until the word is guessed or max misses reached
    while (misses < 6 && guess == false) {

    }

    return 0;
}
