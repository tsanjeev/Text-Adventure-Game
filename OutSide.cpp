/*********************************************************************
 ** Program Filename: Outside.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Outside Implementation File derived from Space class
 **
 
 *********************************************************************/

#include "OutSide.hpp"

OutSide::OutSide()
{
    spaceName = "OutSide";
    hasWeapon = true;
}

/*********************************************************************
 ** Function: inspectSpace()
 ** Description: describes the area to the user
 **
 
 *********************************************************************/
void OutSide::inspectSpace()
{
    std::cout << "Tracks on the floor lead in to the distance.  As you step out on to the porch, a gust of wind blows the door shut." << std::endl;
}

/*********************************************************************
 ** Function: pickUpItem()
 ** Description: does nothing
 **
 
 *********************************************************************/
Item* OutSide::pickUpItem()
{
    return NULL;
}