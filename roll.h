#ifndef CROLL_ROLL_H
#define CROLL_ROLL_H

#include <ostream>
#include "dice.h"

class Roll {
public:
    Roll(int diceCount, Dice d, int bonus);
    int getDiceCount() const;
    Dice getDice() const;
    int getBonus() const;
    int getResult() const;
private:
    int _diceCount;
    Dice _dice;
    int _bonus;
    int _result;
};

inline std::ostream& operator<<(std::ostream& os, const Roll& roll)
{
    os
    << roll.getDiceCount()
    << roll.getDice()
    << "+"
    << roll.getBonus()
    << " = "
    << roll.getResult();
    return os;
}
#endif //CROLL_ROLL_H
