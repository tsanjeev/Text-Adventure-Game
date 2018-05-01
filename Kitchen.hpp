/*********************************************************************
 ** Program Filename: Kitchen.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Kitchen Header File derived from Space class
 **
 
 *********************************************************************/
//

#ifndef Kitchen_hpp
#define Kitchen_hpp

#include "Space.hpp"

class Kitchen: public Space
{
public:
    Kitchen();
    bool hasCookies;
    void inspectSpace();
    Item* pickUpItem();
    bool getHasItem();
};

#endif /* Kitchen_hpp */
