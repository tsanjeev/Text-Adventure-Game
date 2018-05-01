/*********************************************************************
 ** Program Filename: Closet.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Closet Implementation File derived from Space class
 **
 
 *********************************************************************/

#include "Closet.hpp"

/*********************************************************************
 ** Function: Closet constructor
 ** Description:
 **
 
 *********************************************************************/
Closet::Closet()
{
    spaceName = "Closet";
    hasPack = false;
}

/*********************************************************************
 ** Function: inspectSpace()
 ** Description: describes the area to the user
 **
 
 *********************************************************************/
void Closet::inspectSpace()
{
    std::cout << std::endl << std::endl;
    std::cout << "You notice items in your closet are missing!!!" << std::endl;
}

/*********************************************************************
 ** Function: pickUpItem()
 ** Description: Allows the user to get a backpack
 **
 
 *********************************************************************/
Item* Closet::pickUpItem()
{
    Item *something = NULL;
    if(hasPack == false)
    {
        std::cout << "You decide you need to go find the thief!";
        std::cout << std:: endl;
        std::cout << "You decide to pick up a backpack because it will be useful on your adventure!"
        << std::endl;
        hasPack = true;
    }

    return something;
}