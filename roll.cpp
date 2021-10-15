//
// Created by l3m on 14.10.21.
//

#include "roll.h"

// 2d4+2
Roll::Roll(int diceCount, Dice d, int bonus) {
    _diceCount = diceCount;
    _dice = d;
    _bonus = bonus;
}

int Roll::getDiceCount() const {
    return _diceCount;
}

Dice Roll::getDice() const {
    return _dice;
}

int Roll::getBonus() const {
    return _bonus;
}
