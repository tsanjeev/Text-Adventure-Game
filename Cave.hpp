/*********************************************************************
 ** Program Filename: Cave.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Cave Header File derived from Space class
 **
 
 *********************************************************************/

#ifndef Cave_hpp
#define Cave_hpp

#include "Space.hpp"

class Cave: public Space
{
public:
    Cave();
    bool hasRocks;
    void inspectSpace();
    Item* pickUpItem();
    bool getHasItem();
};

#endif /* Cave_hpp */
