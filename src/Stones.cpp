
#include <random>

#include "Stone.h"

// using namespace std;

/**
 * @brief Construct a new Stones:: Stones object
 * 
 */
Stones::Stones()
{
    // set up the parameters of the stones
    sides = 4;
}


/**
 * @brief Randomize the value of the stone.
 *          Uses Mersenne Twister 19937 to randomly
 *          generate a random value for the stone.
 * 
 */
void Stones::roll()
{
    // set up random number generation using mersenne twister 19937
    double seed = seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 mt(seed);

    // set up random distribution for (1, sides)
    uniform_int_distribution<int> distr(1, sides);

    // get a random value and set the new value to the stone
    value = distr(mt);
}

/**
 * @brief Returns the value of one stone in the player's hand.
 * 
 * @param index The index of the stone whose value is being returned.
 * @return int  The value of the desired stone.
 */
int Stones::getValue()
{
    return value;
}


int Stones::getSides()
{
    return size;
}


