
#ifndef __STONE_H
#define __STONE__H

#include <vector>

class Stones
{
private:
    unsigned short int value;   // the value the stone was rolled to
    unsigned short int sides;   // how many sides the stones will have (default 4)

public:
    Stones();   // default constructor

    void roll();                    // randomize the value of the stone
    short unsigned int  getValue(); // returns all of the values of the stones
    void printStone();              // prints the results of all the stones
};

#endif
