/*********************************************************************
 ** Program Filename: List.hpp
 ** Author: Ted Sanjeevi
 ** Date: 4/24/16
 ** Description: List class implementation file.  This class creates a dynamic array
 **             to hold Item objects
 **
 
 *********************************************************************/

#include "List.hpp"
#include "iostream"
#include <string>
#include <iomanip>


/*********************************************************************
 ** Function: List()
 ** Description: list constructor creates a dynamic array of item objects of
 **             size 5.
 
 *********************************************************************/
List::List()
{
    listSize = 5;
    numOfItems = 0;
    shoppingList = new Item[listSize];
}

List::~List()
{
    for(int x = 0; x < numOfItems; x++)
    {
        Item temp = shoppingList[x];
        delete &temp;
    }
    delete[] shoppingList ;
}

/*********************************************************************
 ** Function: addItem(item)
 ** Description: adds an Item object to the array/list.  This function
 **             returns a string letting the user know if the item was successfully
 **             added or not.  The size of the array/list also increases when
 **             it has reach capacity
 ** Parameters: This function takes an item object to add to the array/list
 
 *********************************************************************/

std::string List::addItem(Item thing)
{
    std::string status = "";
    if(numOfItems == listSize)
    {
        std::cout << "Bag is full" << std::endl;
    }
    if(numOfItems == 0)
    {
        shoppingList[numOfItems] = thing;
        numOfItems++;
        status = "Item was successfully added!";
    }
    else if(!isInList(thing))
    {
        shoppingList[numOfItems] = thing;
        numOfItems++;
        status = "Item was successfully added!";
    }
    else
        status = "Duplicate item was not added.";
    
    return status;
}

/*********************************************************************
 ** Function: isInList(item)
 ** Description: checks to see if an item is in the list already.  This
 **             function returns true if it is and false if not
 ** Parameters: This function takes an item object
 
 *********************************************************************/
bool List::isInList(Item &thing)
{
    
    bool isInList = false;
    for(int x = 0; x < numOfItems; x++)
    {
        if(shoppingList[x].getName() == thing.getName())
        {
            isInList = true;
        }
    }
    return isInList;
}

/*********************************************************************
 ** Function: removeItem(string)
 ** Description: This function removes an item according to its name.
 **             It returns a string to let the user know if it was successful or
 **             not.
 ** Parameters: This function takes a string/itemName
 
 *********************************************************************/

Item* List::removeItem(std::string productName)
{
    Item *item = NULL;
    std::string status = "Item was not found.";
    for(int x = 0; x < numOfItems; x++)
    {
        if(shoppingList[x].getName() == productName )
        {
            item = &shoppingList[x];
            int counter = x;
            while( counter < numOfItems)
            {
                shoppingList[counter] = shoppingList[counter+1];
                counter++;
            }
            numOfItems--;
            status = "Item was successfully removed.";
        }
    }
    return item;
}

/*********************************************************************
 ** Function: find(string)
 ** Description: finds and returns an item
 **
 
 *********************************************************************/

Item* List::find(std::string name)
{
    Item *item = NULL;
    std::string status = "Item was not found.";
    for(int x = 0; x < numOfItems; x++)
    {
        if(shoppingList[x].getName() == name )
        {
            item = &shoppingList[x];
            //std::cout << shoppingList[x].getName();
        }
    }
    return item;
    
}

/*********************************************************************
 ** Function: print()
 ** Description: This function displays the shopping list including
                item name, unit, item price, and total price
 
 *********************************************************************/
void List::print()
{
    std::cout << std::endl;
    std::cout << "BackPack:" <<std::endl;
    for(int x = 0; x < numOfItems; x++)
    {
        std::cout << "Item " << x+1 << ": " << shoppingList[x].getQuantity() << " " <<shoppingList[x].getName() << std::endl;
    }
    std::cout << std::endl << std::endl;
}



/*********************************************************************
 ** Function: getNumOfItems()
 ** Description: returns the number of items in the list
 
 *********************************************************************/
int List::getNumOfItems()
{
    return numOfItems;
}