/*********************************************************************
 ** Program Filename: Outside.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Outside Header File derived from Space class
 **
 
 *********************************************************************/

#ifndef OutSide_hpp
#define OutSide_hpp

#include "Space.hpp"

class OutSide: public Space
{
public:
    OutSide();
    bool hasWeapon;
    void inspectSpace();
    Item* pickUpItem();
    
};

#endif /* OutSide_hpp */
