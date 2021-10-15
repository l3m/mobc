#include <iostream>
#include <vector>
#include <algorithm>
#include "dice.h"
#include "roll.h"
#include <cstdlib>
#include <ctime>

auto print = [](const Roll& roll) { std::cout << roll << std::endl; };

void print_all(const std::vector<Roll>& rolls) {
    std::for_each(rolls.begin(), rolls.end(), print);
    std::cout << std::endl;
}

int main() {
    srand(time(0));
    std::vector<Roll> rolls;
    rolls.push_back(Roll(8, Dice::d6, 0)); // 8d6+0
    rolls.push_back(Roll(1, Dice::d8, 3)); // 1d8+3

    print_all(rolls);
    return 0;
}
