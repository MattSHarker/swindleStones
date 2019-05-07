
#include <iostream>

#include "Hand.h"
#include "Stones.h"

using namespace std;

/**
 * @brief Default construct for the new Hand object
 * 
 */
Hand::Hand()
{
    // default hand size is 5
    handSize = 5;

    // setup Stones array
    stones = new Stones*[handSize];
    for (short i = 0; i < handSize; ++i)
        stones[i] = new Stones();
}

/**
 * @brief Destroy the Hand object
 * 
 */
Hand::~Hand()
{
    delete [] stones;
}

/**
 * @brief Roll all of the stones in the hand.
 *          Randomizes the value of all the stones
 *          in the hand.
 * 
 */
void Hand::rollStones()
{
    for (short i = 0; i < handSize; ++i)
        stones[i]->roll();
}

/**
 * @brief Return the value of one of the stones in the hand
 * 
 * @param index             The index of the stone.
 * @return int   The value of the stone.
 */
int Hand::getOneValue(const int index)
{
   return stones[index]->getValue();
}

/**
 * @brief Returns the amount of stones in the hand.
 * 
 * @return int   The current size of the hand.
 */
int Hand::getHandSize()
{
    return handSize;
}
 

/**
 * @brief Decrease the size of the hand by one.
 *          Happens when the player loses a round.
 * 
 */
void Hand::decrimentHandSize()
{
    // if the hand size is less than 1
    if (handSize < 1)
    {
        cout << "Error: Trying to decriment a hand with no stones\n";
        exit(10);
    }

    // if it has >=1 then decriment it 
    --handSize;
}

int Hand::getStoneSize()
{
    // if the Stones is setup, return the number of sides
    if (stones != nullptr)
    {
        hand[0]->getSides();
    }

    // if the stones array is not setup, exit
    else
    {
        cout << "Error: Trying to get number of sides from an unconstructed Stones array\n";
        exit (11);
    }
}





