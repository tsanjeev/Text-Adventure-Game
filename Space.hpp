/*********************************************************************
 ** Program Filename: Space.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Abstract Space Class
 **
 
 *********************************************************************/

#ifndef Space_hpp
#define Space_hpp

#include<string>
#include<iostream>
#include "Item.hpp"

class Space
{
protected:
    std::string spaceName;
    Space *pathOne;
    Space *pathTwo;
    Space *pathThree;
    Space *pathFour;
    
public:
    Space();
    virtual ~Space(){};
    virtual void inspectSpace() = 0;
    virtual Item* pickUpItem() = 0;
    std::string getSpaceName();
    void setPath(Space*, Space*, Space*, Space*);

    
    void goToSpace(int);
    
    Space* getPathOne();
    Space* getPathTwo();
    Space* getPathThree();
    Space* getPathFour();
};

#endif /* Space_hpp */
