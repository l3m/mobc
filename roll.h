#ifndef CROLL_ROLL_H
#define CROLL_ROLL_H

#include <ostream>
#include "dice.h"

class Roll {
public:
    Roll(int diceCount, Dice d, int bonus);
};

inline std::ostream& operator<<(std::ostream& os, const Roll& roll)
{
    os << "i'm a readable roll and result";
    return os;
}
#endif //CROLL_ROLL_H
