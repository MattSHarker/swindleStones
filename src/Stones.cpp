
#include <iostream>
#include <random>

#include "Stone.h"

using namespace std;

/**
 * @brief Construct a new Stones:: Stones object
 * 
 */
Stones::Stones()
{
    // set up the parameters of the stones
    sides = 4;
    numStones = 4;

    // set up the array of stones (values)
    stones = new int[numStones];
}

/**
 * @brief Destroy the Stones:: Stones object
 * 
 */
Stones::~Stones()
{
    if (stones != nullptr)
        delete [] stones;
}

/**
 * @brief Roll one of the stones
 * 
 * @param index The stone to be rolled
 */
void Stones::rollOneStone(const int index)
{
    // check for invalid bounds
    if (index < 0)
    {
        cout << "Amount of stones rolled must be at least 1\n";
        exit(101);
    }

    if (index >= numStones)
    {
        cout << "Amount of stones must not be more than the current max (" << numStones << ")\n";
        exit (102);
    }
    
    // set up random number generation using mersenne twister 19937
    double seed = seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 mt(seed);

    // set up random distribution for (1, sides)
    uniform_int_distribution<int> distr(1, sides);

    // get a random value and set the new value to the stone
    stones[index] = distr(mt);
}

/**
 * @brief Roll all of the stones.
 *          Generates a random value between 1 and $sides
 *          (inclusive) for every stone the player currently
 *          has in their hand.
 * 
 */
void Stones::roll()
{
    for (int i = 0; i < numStones; ++i)
        rollOneStone(i);
}

/**
 * @brief Decriments the amount of stones the player has
 *          by one.
 * 
 * @return int The new number of stones the player has.
 *              Used to determine if they should lose the
 *              game or not.
 */
int Stones::loseStone()
{
    --numStones;
    return numStones;    
}


int getOneStone(const int index)
{
    
}



