#ifndef CROLL_DICE_H
#define CROLL_DICE_H
#include <cstdlib>

enum Dice {
    d4,
    d6,
    d8,
    d10,
    d12,
    d20,
};

inline std::ostream& operator<<(std::ostream& os, const Dice& dice) {
    switch (dice) {
        case d4:
            os << "d4";
            break;
        case d6:
            os << "d6";
            break;
        case d8:
            os << "d8";
            break;
        case d10:
            os << "d10";
            break;
        case d12:
            os << "d12";
            break;
        case d20:
            os << "d20";
            break;
    }
    return os;
}

inline int roll(const Dice& dice) {
    int upperBound;
    switch (dice) {
        case d4:
            upperBound = 4;
            break;
        case d6:
            upperBound = 6;
            break;
        case d8:
            upperBound = 8;
            break;
        case d10:
            upperBound = 10;
            break;
        case d12:
            upperBound = 12;
            break;
        case d20:
            upperBound = 20;
            break;
    }
    return 1 + (rand() % upperBound);
}

#endif //CROLL_DICE_H
