//
//  FBullsAndCows.hpp
//  BullsAndCows
//
//  Created by Md Tauseef on 10/14/18.
//  Copyright © 2018 Md Tauseef. All rights reserved.
//

#ifndef FBullsAndCows_hpp
#define FBullsAndCows_hpp

#include <string>

class FBullsAndCows {
public:
    FBullsAndCows();

    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    bool CheckGuessValidity(std::string); // TODO make return more sensible
    void Reset(); // TODO make return more sensible

private:
    int MyMaxTries;
    int MyCurrentTry;

};

#endif /* FBullsAndCows_hpp */
