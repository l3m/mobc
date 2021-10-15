#include "roll.h"

Roll::Roll(int diceCount, Dice d, int bonus) {
    _diceCount = diceCount;
    _dice = d;
    _bonus = bonus;
    int result = bonus;
    for (int i = 0; i < diceCount; ++i) {
        result += ::roll(_dice);
    }
    _result = result;
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

int Roll::getResult() const {
    return _result;
}
