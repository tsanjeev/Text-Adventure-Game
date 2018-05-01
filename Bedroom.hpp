/*********************************************************************
 ** Program Filename: Bedroom.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Bedroom Header File derived from Space class
 **
 
 *********************************************************************/

#ifndef Bedroom_hpp
#define Bedroom_hpp

#include "Space.hpp"


class Bedroom: public Space
{
public:
    Bedroom();
    void inspectSpace();
    Item* pickUpItem();
    
    
};

#endif /* Bedroom_hpp */
