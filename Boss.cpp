/*********************************************************************
 ** Program Filename: Boss.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Boss Implementation File derived from Creature class.  
 **                This is the final boss of the game
 **
 
 *********************************************************************/

#include "Boss.hpp"

Boss::Boss()
{
    name = "King Troll";
    health = 20;
    bossATK = 2;
}

/*********************************************************************
 ** Function: attack()
 ** Description: attacks the user and returns the damage to user
 **
 
 *********************************************************************/
int Boss::attack()
{
    std::cout << std::endl << name << " attacks you for " << bossATK << " points." << std::endl;
    return bossATK;
}

/*********************************************************************
 ** Function: getHit(int)
 ** Description: takes damage from the hero and adjusts the boss's health
 ** Parameters: takes an int representing the damage from the hero
 
 *********************************************************************/
void Boss::getHit(int hit)
{
    health = health - hit;
    if(hit == 0)
    {
        std::cout << std::endl << name << " was not attacked!" << std::endl << std::endl;
    }
    else
    {
        std::cout << std::endl << name << " was hit for " << hit << " points." << std::endl << std::endl;
    }
}

/*********************************************************************
 ** Function: getName()
 ** Description: return name
 **
 
 *********************************************************************/

std::string Boss::getName()
{
    return name;
}

/*********************************************************************
 ** Function: getHealth()
 ** Description: return health
 **
 
 *********************************************************************/
int Boss::getHealth()
{
    return health;
}