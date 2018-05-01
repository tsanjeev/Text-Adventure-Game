/*********************************************************************
 ** Program Filename: Bedroom.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Bedroom Implementation File derived from Space class
 **
 
 *********************************************************************/

#include "Bedroom.hpp"
#include "Closet.hpp"

Bedroom::Bedroom()
{
    spaceName = "Bedroom";
}

/*********************************************************************
 ** Function: inspectSpace()
 ** Description: describes the area to the user
 **
 
 *********************************************************************/
void Bedroom::inspectSpace()
{
    std::cout << std::endl;
    std::cout << "Your room looks like a tornado went through it.  Your possessions are scattered everywhere." << std::endl;
    std::cout << "You notice the closet door is open." << std::endl << std::endl;
}

/*********************************************************************
 ** Function: pickUpItem()
 ** Description: does nothing
 **
 
 *********************************************************************/
Item* Bedroom::pickUpItem()
{
    return NULL;
}