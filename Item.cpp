/*********************************************************************
 ** Program Filename: Item.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Item Implementation File - Used to create food/weapon items
 **
 
 *********************************************************************/

#include "Item.hpp"

Item::Item(){}
Item::Item(std::string name, int quant, int num)
{
    itemName = name;
    quantity = quant;
    stat = num;
}

/*********************************************************************
 ** Function: getName()
 ** Description: return itemName
 
 *********************************************************************/

std::string Item::getName()
{
    return itemName;
}

/*********************************************************************
 ** Function: getQuantity()
 ** Description: return the quantity of item
 **
 
 *********************************************************************/
int Item::getQuantity()
{
    return quantity;
}

/*********************************************************************
 ** Function: useItem()
 ** Description: uses and item and decrements quantity
 **
 
 *********************************************************************/
void Item::useItem()
{
    quantity--;
}

/*********************************************************************
 ** Function: getStat()
 ** Description: return item stat
 
 *********************************************************************/
int Item::getStat()
{
    return stat;
}

/*********************************************************************
 ** Function: addQaunty(int)
 ** Description: adds more quantity to an item
 **paramenter: takes an int
 
 *********************************************************************/
void Item::addQuant(int q)
{
    quantity = quantity + q;
}