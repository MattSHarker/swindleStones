
#ifndef __STONE_H
#define __STONE__H

class Stones
{
private:
    int* stones;    // the values obtained from rolling the stones
    int sides;      // how many sides the stones will have (default 4)
    int numStones;  // how many stones the player has

public:
    Stones();
    ~Stones();

    void rollOneStone(const int indexOfStone);  // randomize the value of one stone 
    void roll();                                // randomize the values of all the stones

    int loseStone();   // decriments the amount of stones the player has

    int  getOneStone(const int indexOfStone);   // returns the value of one specified stone
    int* getAllValues();                        // returns all of the values of the stones

    void printAllStones();  // prints the results of all the stones
};


#endif
