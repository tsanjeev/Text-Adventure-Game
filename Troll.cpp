/*********************************************************************
 ** Program Filename: Troll.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Troll Implementation File derived from Creature class
 **
 
 *********************************************************************/

#include "Troll.hpp"


Troll::Troll()
{
    name = "Troll";
    health = 2;
    armor = 0;
    trollATK = 1;
}

/*********************************************************************
 ** Function: attack()
 ** Description: returns amount the troll is attacking for
 **
 
 *********************************************************************/
int Troll::attack()
{
    std::cout << std::endl << name << " attacks you for " << trollATK << " points." << std::endl;
    return trollATK;
}

/*********************************************************************
 ** Function: getHit(hit)
 ** Description: takes damage from hero and adjusts health
 **
 
 *********************************************************************/
void Troll::getHit(int hit)
{
    health = health - hit;
    if(hit == 0)
    {
        std::cout << name << " was not attacked!" << std::endl << std::endl;
    }
    else
    {
        std::cout << name << " was hit for " << hit << " points." << std::endl<< std::endl;
        if(health <= 0)
        {
            std::cout << "Troll has died." << std::endl << std::endl;
        }
    }
}

/*********************************************************************
 ** Function: getName()
 ** Description: return name
 **
 
 *********************************************************************/
std::string Troll::getName()
{
    return name;
}

/*********************************************************************
 ** Function: getHealth()
 ** Description: returns health 
 **
 
 *********************************************************************/
int Troll::getHealth()
{
    return health;
}