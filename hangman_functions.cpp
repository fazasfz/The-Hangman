#include <iostream>
#include <vector>
#include "hangman_functions.h"

//define functions
void greet(){
    std::cout << "=============\n";
    std::cout << "Hangman: The Game\n";
    std::cout << "=============\n";
    std::cout << "Instructions: \n";
    std::cout << "save your friend from being hanged by guessing the letters in the codeword.\n";
    std::cout << "=============\n";
    }
    //display misses
void display_misses(int misses){
 if (misses == 0) {  
    std::cout << " +---+\n";
    std::cout << " |   |\n";
    std::cout << "     |\n";
    std::cout << "     |\n";
    std::cout << "     |\n";
    std::cout << "     |\n";
    std::cout << "=========\n";
    }
    else if (misses == 1) {
    std::cout << " +---+\n";
    std::cout << " |   |\n";
    std::cout << " O   |\n";
    std::cout << "     |\n";
    std::cout << "     |\n";
    std::cout << "     |\n";
    std::cout << "=========\n";
    }
    else if (misses == 2) {
    std::cout << " +---+\n";
    std::cout << " |   |\n";
    std::cout << " O   |\n";
    std::cout << " |   |\n";
    std::cout << "     |\n";
    std::cout << "     |\n";
    std::cout << "=========\n";
    }
    else if (misses == 3) {
    std::cout << " +---+\n";
    std::cout << " |   |\n";
    std::cout << " O   |\n";
    std::cout << "/|   |\n";
    std::cout << "     |\n";
    std::cout << "     |\n";
    std::cout << "=========\n";
    }
    else if (misses == 4) {
    std::cout << " +---+\n";
    std::cout << " |   |\n";
    std::cout << " O   |\n";
    std::cout << "/|\\  |\n";
    std::cout << "     |\n";
    std::cout << "     |\n";
    std::cout << "=========\n";
    }
    else if (misses == 5) {
    std::cout << " +---+\n";
    std::cout << " |   |\n";
    std::cout << " O   |\n";
    std::cout << "/|\\  |\n";
    std::cout << "/    |\n";
    std::cout << "     |\n";
    std::cout << "=========\n";
    }
    else if (misses == 6) {
    std::cout << " +---+\n";
    std::cout << " |   |\n";
    std::cout << " O   |\n";
    std::cout << "/|\\  |\n";
    std::cout << "/ \\  |\n";
    std::cout << "     |\n";
    std::cout << "=========\n";
    }
}
//display status
void display_status(std::vector<char> incorrect, std::string answer){
    std::cout << "\nCodeword: ";
    for (int i = 0; i < answer.length(); i++){
        std::cout << answer[i] << " ";
    }
    /* answer.length() is a method call on the std::string object answer. This method returns the number of characters in the string answer. */
    std::cout << "\n\nIncorrect Guesses: ";
    for (int i = 0; i < incorrect.size(); i++){
        std::cout << incorrect[i] << " ";
    }
    std::cout << "\n";
}
void end_game(std::string answer, std::string codeword){
    if (answer == codeword) {
        std::cout << "Hooray! You saved the person and won the game!\n";
    } else {
        std::cout << "Oh no! The person has been hanged.\n";
    }
    std::cout << "The codeword was: " << codeword << "\n";
}
