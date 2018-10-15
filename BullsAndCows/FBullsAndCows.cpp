//
//  FBullsAndCows.cpp
//  BullsAndCows
//
//  Created by Md Tauseef on 10/14/18.
//  Copyright © 2018 Md Tauseef. All rights reserved.
//

#include "FBullsAndCows.hpp"

FBullsAndCows::FBullsAndCows(){ Reset(); }

int FBullsAndCows::GetMaxTries() const { return MyMaxTries; }
int FBullsAndCows::GetCurrentTry() const { return MyCurrentTry; }

bool FBullsAndCows::IsGameWon() const {
    return false;
}

bool FBullsAndCows::CheckGuessValidity(std::string){
    return false;
}

void FBullsAndCows::Reset(){
    constexpr int MAX_TRIES = 8;
    MyCurrentTry = 0;
    MyMaxTries = MAX_TRIES;
}
