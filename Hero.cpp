/*********************************************************************
 ** Program Filename: Hero.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Hero Implementation File 
 **
 
 *********************************************************************/

#include "Hero.hpp"

/*********************************************************************
 ** Function: Hero Constructor
 ** Description:
 **
 
 *********************************************************************/

Hero::Hero()
{
    name = "Hero";
    current = NULL;
    backPack = new List();
    hasBackPack = false;
    itemsInPack = 0;
    health = 5;
    armor = 0;
    inBattle = false;
  
}

/*********************************************************************
 ** Function: Hero() destructor
 ** Description:
 **
 
 *********************************************************************/
Hero::~Hero()
{
    delete backPack;
}

/*********************************************************************
 ** Function: inspectSpace()
 ** Description: allows hero to describe the area
 **
 
 *********************************************************************/
void Hero::inspectSpace()
{
    current->inspectSpace();
}

/*********************************************************************
 ** Function: setSpace()
 ** Description: change space to new space
 ** Parameter: accepts a new space to set as current space
 **
 
 *********************************************************************/
void Hero::setSpace(Space *curr)
{
    current = curr;
}

/*********************************************************************
 ** Function: wearBackPack()
 ** Description: bool returns true if hero is wearing a back pack
 **
 
 *********************************************************************/
void Hero::wearBackPack()
{
    hasBackPack = true;
}

/*********************************************************************
 ** Function: getSpace()
 ** Description: returns current space
 **
 
 *********************************************************************/

Space* Hero::getSpace()
{
    return current;
}

/*********************************************************************
 ** Function: addToPack(item)
 ** Description: adds an item to back pack
 ** Parameters: item
 
 *********************************************************************/
void Hero::addToPack(Item *thing)
{
   if(hasBackPack && itemsInPack <= 5)
   {
       backPack->addItem(*thing);
       itemsInPack++;
   }
}

/*********************************************************************
 ** Function: removeItem(string)
 ** Description: removes an item from backpack
 ** Parameters: a string name of item
 **
 
 *********************************************************************/
Item * Hero::removeItem(std::string name)
{
    itemsInPack--;
    return backPack->removeItem(name);
}

/*********************************************************************
 ** Function: getHealth()
 ** Description: returns health
 **
 
 *********************************************************************/
int Hero::getHealth()
{
    return health;
}

/*********************************************************************
 ** Function: showInventory()
 ** Description: prints the current inventory
 **
 
 *********************************************************************/
void Hero::showInventory()
{
    backPack->print();
}

/*********************************************************************
 ** Function: attack()
 ** Description: attacks a troll or boss
 ** parameters: takes a string to specify which weapon and enemy to specify target
 **
 
 *********************************************************************/
int Hero::attack(std::string item, std::string enemy)
{
    int hit = 0;
    
    if(health > 0)
    {
        if(isInPack("Rocks") == false && item == "Rocks")
        {
            std::cout << "You do not have any Rocks! Pick some up!" << std::endl;
        }
        else if(isInPack("Bat")== false && item == "Bat")
        {
            std::cout << "Whoops looks like you forgot this in the garage!!" << std::endl;
        }
    
        else if(backPack->find(item)->getName() == "Bat" )
        {
            hit = backPack->find(item)->getStat();
            std::cout << "You swing the Bat and hit " << enemy << " for " << hit << " points."<< std::endl;
        }
        else if(backPack->find(item)->getName() == "Rocks")
        {
            if(backPack->find(item)->getQuantity() > 0)
            {
                hit = backPack->find(item)->getStat();
                std::cout << "You throw a rock and hit " << enemy << " for " << hit << " points."<< std::endl;
            }
            else
            {
                std::cout << "You dont have any Rocks! Look for some first!" << std::endl;
            }
        }
    }
    return hit;
}

/*********************************************************************
 ** Function: getHit(int, string)
 ** Description: takes damage from enemy
 ** Paramenters: int for damage and string for name of enermy
 **
 
 *********************************************************************/
void Hero::getHit(int hit, std::string enemy)
{
    health = health - hit;
    std::cout << "You were hit by " << enemy << " and lost " << hit << " health point.  You have " << health << " remaining."  << std::endl << std::endl;
}

/*********************************************************************
 ** Function: eat()
 ** Description: eats a cookie to gain health
 **
 
 *********************************************************************/
void Hero::eat()
{
    if(isInPack("Cookies"))
    {
        if(backPack->find("Cookies")->getQuantity() > 0)
        {
            backPack->find("Cookies")->useItem();
            health = health + 5;
            std::cout << std::endl;
            std::cout << "You ate a Cookie and gained 5 health!.  Your health is now " << health << "." << std::endl << std::endl;
        }
        else
        {
            std::cout << "You are out of Cookies."  << std::endl;
            backPack->removeItem("Cookies");
        
            
        }
    }
    else
        std::cout << std::endl << "You forgot to bring any cookies from the kitchen!" << std::endl << std::endl;
}

/*********************************************************************
 ** Function: getBattleState()
 ** Description: returns whether currently in a battle or not
 **
 
 *********************************************************************/
bool Hero::getBattleState()
{
    return inBattle;
}

/*********************************************************************
 ** Function: setBattle(bool)
 ** Description: sets the battle state
 **
 
 *********************************************************************/
void Hero::setBattle(bool fight)
{
    inBattle = fight;
}

/*********************************************************************
 ** Function: getHasPack()
 ** Description: bool to see if hero has a backpack
 **
 
 *********************************************************************/
bool Hero::getHasPack()
{
    return hasBackPack;
}


/*********************************************************************
 ** Function: isInPack(string)
 ** Description: checks to see if item is in backpack
 ** Paramenters: string item name
 **
 
 *********************************************************************/
bool Hero::isInPack(std::string name)
{
    bool pack = false;
    if(backPack->find(name) != NULL)
        pack = true;
    return pack;
}

/*********************************************************************
 ** Function: addMoreRocks()
 ** Description: adds more rocks
 **
 
 *********************************************************************/
void Hero::addMoreRocks()
{
    backPack->find("Rocks")->addQuant(5);
}

/*********************************************************************
 ** Function: endGame()
 ** Description: changes heros health to 0 to end the game in menu
 **
 
 *********************************************************************/
void Hero::endGame()
{
    health = 0;
}