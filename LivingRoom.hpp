/*********************************************************************
 ** Program Filename: LivingRoom.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: LivingRoom Header File derived from Space class
 **
 
 *********************************************************************/

#ifndef LivingRoom_hpp
#define LivingRoom_hpp

#include "Space.hpp"

class LivingRoom: public Space
{
public:
    LivingRoom();
    void inspectSpace();
    Item* pickUpItem();
    
};

#endif /* LivingRoom_hpp */
