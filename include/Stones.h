
#ifndef STONE_H
#define STONE_H

class Stones
{
private:
    int value;   // the value the stone was rolled to
    int sides;   // how many sides the stones will have (default 4)

public:
    Stones();   // default constructor

    // functions for $value
    void roll();                    // randomize the value of the stone
    int getValue(); // returns all of the values of the stones

    // functions for sides
    int getSides(); // returns the number of sides of the dice

};

#endif
