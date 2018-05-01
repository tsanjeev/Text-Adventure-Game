/*********************************************************************
 ** Program Filename: LivingRoom.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: LivingRoom Implementation File derived from Space class
 **
 
 *********************************************************************/

#include "LivingRoom.hpp"

#include "Space.hpp"


/*********************************************************************
 ** Function: LivingRoom Constructor
 ** Description:
 **
 
 *********************************************************************/
LivingRoom::LivingRoom()
{
    spaceName = "LivingRoom";
}

/*********************************************************************
 ** Function: inspectSpace()
 ** Description: describes the area to the user
 **
 **
 
 *********************************************************************/
void LivingRoom::inspectSpace()
{
    std::cout << "The living room is also a mess. You notice your cat, Lucky, is missing and there are footprints leading out the front door!" << std::endl;
}

/*********************************************************************
 ** Function: pickUpItem()
 ** Description: does nothing
 ** Parameters:
 **
 
 *********************************************************************/
Item* LivingRoom::pickUpItem()
{
    return 0;
}