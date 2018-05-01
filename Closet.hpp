/*********************************************************************
 ** Program Filename: Closet.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Closet Header File derived from Space class
 **
 
 *********************************************************************/

#ifndef Closet_hpp
#define Closet_hpp

#include "Space.hpp"

class Closet: public Space
{
public:
    Closet();
    bool hasPack;
    void inspectSpace();
    Item* pickUpItem();
};

#endif /* Closet_hpp */
