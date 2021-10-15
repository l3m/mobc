#ifndef CROLL_ROLL_H
#define CROLL_ROLL_H

#include <ostream>
#include "dice.h"
#include <vector>

class Roll {
public:
    Roll(int diceCount, Dice d, int bonus);
    int getDiceCount() const;
    Dice getDice() const;
    int getBonus() const;
    int getResult() const;
    const std::vector<int>& getRollResults() const;
private:
    int _diceCount;
    Dice _dice;
    int _bonus;
    int _result;
    std::vector<int> _rollResults;
};

inline std::ostream& operator<<(std::ostream& os, const Roll& roll)
{
    os
    << roll.getDiceCount()
    << roll.getDice()
    << "+"
    << roll.getBonus()
    << " = "
    << roll.getResult()
    << " [";

    auto rollResults = roll.getRollResults();
    for(auto it = rollResults.begin(); it != rollResults.end(); ++it) {
        int roll = *it;
        if (rollResults.end() - 1 == it) {
            os << roll;
        } else {
            os << roll << ", ";
        }
    }

    os << "]";

    return os;
}
#endif //CROLL_ROLL_H
