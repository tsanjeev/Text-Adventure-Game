/*********************************************************************
 ** Program Filename: Item.hpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Item Header File 
 **
 
 *********************************************************************/

#ifndef Item_hpp
#define Item_hpp

#include <stdio.h>
#include <string>

class Item
{
protected:
    std::string itemName;
    int quantity;
    int stat;

public:
    Item();
    Item(std::string, int, int);
    int itemAction();
    std::string getName();
    int getQuantity();
    void useItem();
    int getStat();
    void addQuant(int);

};
#endif /* Item_hpp */
