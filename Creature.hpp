/*********************************************************************
 ** Program Filename: Creature.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Creature Header File abstract class
 **
 
 *********************************************************************/

#ifndef Creature_hpp
#define Creature_hpp

#include<string>
#include<iostream>
class Creature
{
protected:
    std::string name;
    int health;
    int armor;
    
public:
    Creature();
    //virtual int attack() = 0;
    //virtual void getHit(int) = 0;
};

#endif /* Creature_hpp */
