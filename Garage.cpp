/*********************************************************************
 ** Program Filename: Garage.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Garage Implementation File derived from Space class
 **
 
 *********************************************************************/

#include "Garage.hpp"


Garage::Garage()
{
    spaceName = "Garage";
    hasWeapon = true;
}

/*********************************************************************
 ** Function: inspectSpace()
 ** Description: describes the area to the user
 **
 
 *********************************************************************/
void Garage::inspectSpace()
{
    std::cout << "The Garage appears to be fine.  Would you like to pick up a weapon for your adventure? " << std::endl;
    
}

/*********************************************************************
 ** Function: pickUpItem()
 ** Description: allows the user to pick up a bat to use for combat later
 **
 
 *********************************************************************/
Item* Garage::pickUpItem()
{
    Item *weapon = NULL;

    if(hasWeapon == true)
    {
        weapon = new Item("Bat", 1, 5);
        std::cout << "A wooden bat was added to your back pack!" << std::endl;
        hasWeapon = false;
    }

    return weapon;
}

bool Garage::getHasItem()
{
    return hasWeapon;
}