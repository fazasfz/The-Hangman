#ifndef HANGMAN_FUNCTIONS_H
#define HANGMAN_FUNCTIONS_H

#include <vector>
#include <string>

void greet();
void display_misses(int misses);
void display_status(std::vector<char> incorrect, std::string answer);
void end_game(std::string answer, std::string codeword);

#endif