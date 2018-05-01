/*********************************************************************
 ** Program Filename: Cave.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Cave Implementation File derived from Space class
 **
 
 *********************************************************************/

#include "Cave.hpp"



Cave::Cave()
{
    spaceName = "Cave";
    hasRocks = true;
}

/*********************************************************************
 ** Function: inspectSpace()
 ** Description: describes the area to the user
 **
 
 *********************************************************************/
void Cave::inspectSpace()
{
    std::cout << "Tracks on the floor lead in to the distance.  As you step out on to the porch, a gust of wind blows the door shut." << std::endl;
}

/*********************************************************************
 ** Function: pickUpItem()
 ** Description: allows the user to pick up some rocks to throw
 **
 
 *********************************************************************/

Item* Cave::pickUpItem()
{
    Item *rocks = NULL;
    if(hasRocks == true)
    {
        
        rocks = new Item("Rocks", 5, 2);
        std::cout << std::endl;
        std::cout << "You found 5 rocks and added them to your back pack!" << std::endl << std::endl;;
        hasRocks = false;
    }
    
    return rocks;
}

bool Cave::getHasItem()
{
    return hasRocks;
}