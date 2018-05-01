/*********************************************************************
 ** Program Filename: Boss.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Boss Header File derived from Creature class
 **
 
 *********************************************************************/

#ifndef Boss_hpp
#define Boss_hpp

#include "Creature.hpp"

class Boss: public Creature
{
private:
    int bossATK;
    
public:
    Boss();
    int attack();
    void getHit(int);
    std::string getName();
    int getHealth();
};
#endif /* Boss_hpp */
