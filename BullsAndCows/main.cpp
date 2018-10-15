//
//  main.cpp
//  BullsAndCows
//
//  Created by Md Tauseef on 10/14/18.
//  Copyright © 2018 Md Tauseef. All rights reserved.
//

#include <iostream>
#include <string>
#include "FBullsAndCows.hpp"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool DoPlayAgain();

FBullsAndCows BCGame;

int main() {
    bool bPlayAgain = false;
    do {
        PrintIntro();
        PlayGame();
        bPlayAgain = DoPlayAgain();
        std::cout << std::endl;
    } while(bPlayAgain);

    return 0;
}

void PrintIntro() {
    constexpr int WORD_LENGTH = 5;
    std::cout << "Welcome to Bulls and Cows, a fun word game!" << std::endl;
    std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << std::endl;
}

void PlayGame() {
    int TURNS = BCGame.GetMaxTries();
    for(int i = 0; i < TURNS; i++) {
        std::string Guess = GetGuess();
        std::cout << "You entered: " << Guess << std::endl << std::endl;
    }
}

std::string GetGuess() {
    std::cout << "You have " << BCGame.GetMaxTries() - BCGame.GetCurrentTry() << " try(s) left." << std::endl;
    std::cout << "Enter your guess: ";

    std::string Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

bool DoPlayAgain() {
    std::cout << "Would you like to play again? [y/n]: ";
    std::string Response = "";
    getline(std::cin, Response);
    return (Response[0] == 'y' || Response[0] == 'Y');
}
