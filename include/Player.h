
#ifndef PLAYER_H
#define PLAYER_H

#include "Hand.h"

class Player {
public:
    Hand* hand; // Hand object

    int*  duplicates;   // holds the number of duplicates for each possible stone value 
                            // e.g. if there are two 2s, one 3, and two 4s rolled (out 
                            // of four sides) then the array will be [0, 2, 1, 2]

private:
    Player();
    ~Player();

    // functions that deal with $hand
    void roll();
    void decrimentHand();

    // functions that deal with $duplicates
    void generateDuplicates();
    int  getDuplicates(const int index);

};

#endif
