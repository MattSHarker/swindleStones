
#ifndef HAND_H
#define HAND_H

#include "Stones.h"

class Hand
{
private:
    Stones** stones;      // array of Stones pointers
    int handSize;

public:
    Hand()
    ~Hand()

    // functions that deal with the Stones array
    void rollStones();
    int getOneValue(const int indexOfStone);

    // functions that deal with handSize
    int decrimentHandSize();
    int getHandSize();

    // misc functions
    int getStoneSize();     // return the number of sides per stone
};

#endif
