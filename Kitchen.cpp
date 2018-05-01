/*********************************************************************
 ** Program Filename: Kitchen.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Kitchen Implementation File derived from Space class
 **
 
 *********************************************************************/

#include "Kitchen.hpp"

Kitchen::Kitchen()
{
    spaceName = "Kitchen";
    hasCookies = true;
}

/*********************************************************************
 ** Function: inspectSpace()
 ** Description: describes the area to the user
 **
 
 *********************************************************************/
void Kitchen::inspectSpace()
{
    std::cout << "The Kitchen appears to be fine.  Would you like to pick up some snacks for your adventure? " << std::endl;
    
}

/*********************************************************************
 ** Function: pickUpItem()
 ** Description: allows the user to pick up a pack of cookies to use later to
 **             regain health
 **
 
 *********************************************************************/
Item* Kitchen::pickUpItem()
{
    Item *cookie;
    if(hasCookies == true)
    {
        cookie = new Item("Cookies", 5, 5);
        std::cout << "A pack of 5 Cookies were added to your back pack!" << std::endl;
        hasCookies = false;
    }
   
    
    return cookie;
}

bool Kitchen::getHasItem()
{
    return hasCookies;
}