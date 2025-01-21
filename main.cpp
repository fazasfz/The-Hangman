#include <iostream>
#include <vector>
#include "hangman_functions.h"
using namespace std;
int main(){
    // Set up the game
  greet();

  // declare variables
  string codeword = "unquestionably";
  string answer = "______________";
  int misses = 0;
  vector<char> incorrect;
  bool guess = false;
  char letter;


  // loop until the player has guessed the codeword or the player has 7 misses
  while (answer != codeword && misses < 7)
  {
    display_misses(misses);
    display_status(incorrect, answer);

    cout << "\n\nPlease enter your guess: ";
    cin >> letter;
    // check if the letter is in the codeword
    for(int i = 0; i < codeword.length(); i++)
    {
      if (letter == codeword[i])
      {
        answer[i] = letter;
        guess = true;
      }
    }
    if (guess){
      cout << "\nCorrect!\n";
    } // incorrect guess  
    else {
      cout << "\nIncorrect! The letter is not in the codeword.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }
  end_game(answer, codeword);
  
  return 0;
}