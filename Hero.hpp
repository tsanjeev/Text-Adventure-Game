/*********************************************************************
 ** Program Filename: Hero.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Hero Header File derived from Creature class
 **
 
 *********************************************************************/

#ifndef Hero_hpp
#define Hero_hpp

#include "Creature.hpp"
#include "Space.hpp"
#include "List.hpp"

class Hero: public Creature
{
    
public:
    Hero();
    ~Hero();
    Space *current;
    List *backPack;
    bool hasBackPack;
    bool inBattle;
    void inspectSpace();
    int  itemsInPack;
    void setSpace(Space *);
    void wearBackPack();
    Space* getSpace();
    void addToPack(Item *);
    void addArmor(int);
    Item* removeItem(std::string);
    int getHealth();
    void showInventory();
    
    int attack(std::string, std::string);
    Item* weapon;
    void getHit(int, std::string);
    void eat();
    bool getBattleState();
    void setBattle(bool);
    bool getHasPack();
    bool isInPack(std::string);
    void addMoreRocks();
    void endGame();
    
};


#endif /* Hero_hpp */
