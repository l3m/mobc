#include "roll.h"
#include <vector>
#include <algorithm>

void roll (std::vector<int>& rollResults, int diceCount, Dice d) {
    for (int i = 0; i < diceCount; ++i) {
        rollResults.push_back(::roll(d));
    }
}

Roll::Roll(int diceCount, Dice d, int bonus) {
    _diceCount = diceCount;
    _dice = d;
    _bonus = bonus;
    int result = bonus;

    roll(_rollResults, _diceCount, _dice);

    std::for_each(_rollResults.begin(), _rollResults.end(),
                  [&](int rollResult) { result += rollResult; });



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

const std::vector<int>& Roll::getRollResults() const {
    return _rollResults;
}