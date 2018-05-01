/*********************************************************************
 ** Program Filename: Garage.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Garage Header File derived from Space class
 **
 
 *********************************************************************/

#ifndef Garage_hpp
#define Garage_hpp

#include "Space.hpp"

class Garage: public Space
{
public:
    Garage();
    bool hasWeapon;
    void inspectSpace();
    Item* pickUpItem();
    bool getHasItem();

};

#endif /* Garage_hpp */
