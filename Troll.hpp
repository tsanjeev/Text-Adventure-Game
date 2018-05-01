/*********************************************************************
 ** Program Filename: Troll.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Troll Header File derived from Creature class
 **
 
 *********************************************************************/

#ifndef Troll_hpp
#define Troll_hpp

#include "Creature.hpp"
class Troll: public Creature
{
private:
    int trollATK;
    
public:
    Troll();
    int attack();
    void getHit(int);
    std::string getName();
    int getHealth();
};

#endif /* Troll_hpp */
