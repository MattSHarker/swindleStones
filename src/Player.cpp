
#include <iostream>

#include "Player.h"
#include "Hand.h"

using namespace std;

/**
 * @brief Construct a new Player:: Player object
 * 
 */
Player::Player()
{
    // set up the hand object
    hand = new Hand();

    // setup the duplicates array to the number of sides in the hand
    duplicates = new int[hand->getHandSize()];
}

/**
 * @brief Destroy the Player:: Player object
 * 
 */
Player::~Player()
{
    if (hand != nullptr)
        delete hand;

    if (duplicates != nullptr)
        delete [] 
}



/************************** FUNCTIONS FOR HAND **********************/


/**
 * @brief Roll the stones in the player's hand.
 *          Calls the rollStones function from the
 *          Hand class.
 * 
 */
void Player::roll()
{
    hand->rollStones();
}


void Player::decrimentHand()
{
    hand->decrimentHandSize();
}



/************************* FUNCTIONS FOR DUPLICATES *****************/


/**
 * @brief Calculates the amount of each side in the player's hand.
 *          Goes through the stones in the player's hand, and 
 *          incriments the respective value in $duplicates.
 * 
 */
void Player::generateDuplicates()
{
    // reset all the values of $duplicates
    for (int i = 0; i < hand->getStoneSize(); ++i)
        duplicates[i] = 0;
    
    // generate the values for $duplicates
    for (int i = 0; i < hand->getHandSize(); ++i)
    {
        // get the value of the ith stone in the hand
        int index = hand->getOneValue(i);

        // incriment that value in duplicates
        ++duplicates[index];
    }
}

/**
 * @brief Returns the number of duplicates 
 * 
 * @param index 
 * @return int 
 */
int Player::getDuplicates(const int index)
{
    if (index > hand->getStoneSize())
    {
        cout << "Error: Trying to access duplicates of a value higher than what exists\n";
        exit (20);
    }

    return duplicates[index];
}


