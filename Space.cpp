/*********************************************************************
 ** Program Filename: Space.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Sapce Implementation File 
 **
 
 *********************************************************************/

#include "Space.hpp"

/*********************************************************************
 ** Function: Space()
 ** Description: Space abstract class
 **
 
 *********************************************************************/
Space::Space()
{
    spaceName = "";
}

/*********************************************************************
 ** Function: setPath()
 ** Description: Connects different spaces
 
 **
 
 *********************************************************************/
void Space::setPath(Space *wayOne, Space *wayTwo, Space *wayThree, Space *wayFour)
{
    pathOne = wayOne;
    pathTwo = wayTwo;
    pathThree = wayThree;
    pathFour = wayFour;
}

/*********************************************************************
 ** Function: getSpaceName()
 ** Description: return spaceName
 **
 
 *********************************************************************/
std::string Space::getSpaceName()
{
    return spaceName;
}

/*********************************************************************
 ** Function: getPathOne()
 ** Description: returns space one
 **
 
 *********************************************************************/
Space* Space::getPathOne()
{
    return pathOne;
}

/*********************************************************************
 ** Function: getPathTwo()
 ** Description: returns space two
 **
 
 *********************************************************************/
Space* Space::getPathTwo()
{
    return pathTwo;
}

/*********************************************************************
 ** Function: getPathThree()
 ** Description: returns space three
 **
 
 *********************************************************************/
Space* Space::getPathThree()
{
    return pathThree;
}

/*********************************************************************
 ** Function: getPathFour()
 ** Description: returns space Four
 **
 
 *********************************************************************/
Space* Space::getPathFour()
{
    return pathFour;
}