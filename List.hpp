/*********************************************************************
 ** Program Filename: List.hpp
 ** Author: Ted Sanjeevi
 ** Date: 4/24/16
 ** Description: List class header file.  This class creates a dynamic array
 **             to hold Item objects
 **
 
 *********************************************************************/

#ifndef List_hpp
#define List_hpp

#include "Item.hpp"

class List
{
private:
    
    int listSize;
    int numOfItems;
    Item *shoppingList;

public:

    List();
    ~List();
    std::string addItem(Item thing);
    Item* removeItem(std::string);
    bool isInList(Item &thing);
    void print();
    int getNumOfItems();
    Item* find(std::string);
    
};



#endif /* List_hpp */
