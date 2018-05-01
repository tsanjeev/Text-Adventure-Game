/*********************************************************************
 ** Program Filename: Menu.cpp
 ** Author: Ted Sanjeevi
 ** Date: 6/5/16
 ** Description: Function that starts the game.
 **
 
 *********************************************************************/

#include "Menu.hpp"
#include "Bedroom.hpp"
#include "Closet.hpp"
#include "LivingRoom.hpp"
#include "Hero.hpp"
#include "Kitchen.hpp"
#include "Garage.hpp"
#include "OutSide.hpp"
#include "Cave.hpp"
#include "Troll.hpp"
#include "Boss.hpp"


void menu()
{
    int choice = 0;
    std::cout << "Welcome to \"Save Lucky!\" " << std::endl;
    std::cout << "Are you ready to help the hero on his adventure to find his cat, Lucky, and fight some trolls?" << std::endl;
    std::cout << "1) yes to play , 2) no to quit : ";
    std::cin >> choice;
    if(choice == 1)
        playGame();
    else
        std::cout << "You have quit." << std::endl;

}

void playGame()
{
    int choice = 0;
    Hero *player = new Hero();
    Space *bed = new Bedroom();
    player->setSpace(bed);
    
    Space *closetSpace = new Closet();
    closetSpace->setPath(bed, NULL, NULL, NULL);
    
    Space *livingRoom = new LivingRoom();
    bed->setPath(closetSpace, livingRoom, NULL, NULL);
    
    Space *kit = new Kitchen();
    kit->setPath(livingRoom, NULL, NULL, NULL);
    
    Space *gar = new Garage();
    gar->setPath(livingRoom, NULL, NULL, NULL);
    
    Space *out = new OutSide();
    livingRoom->setPath(bed, kit, gar, out);
    
    
    std::cout << "You suddenly wake up in your room from a loud noise!!" << std::endl;
    
    
    while(player->getSpace()->getSpaceName() == "Bedroom")
    {
        std::cout << std::endl;
        std::cout << "You are in the " << player->getSpace()->getSpaceName() << std::endl;
        std::cout << "Would you like to 1) inspect the room 2) go in the closet 3) go in to the living room: ";
        std::cin >> choice;
        if(choice == 1)
        {
            player->inspectSpace();
        }
        else if(choice == 2)
        {
            player->setSpace(bed->getPathOne());
            std::cout << std::endl;
            std::cout << "You are in the " << player->getSpace()->getSpaceName() << std::endl;
            std::cout << "Would you like to 1) inspect the room 2) go back to the bedroom: ";
            std::cin >> choice;
            if(choice == 1)
            {
                player->inspectSpace();
                player->getSpace()->pickUpItem();
                player->wearBackPack();
                std::cout << std::endl;
                std::cout << "You head back to the bedroom." ;
                player->setSpace(player->getSpace()->getPathOne());
            }
            else
            {
                player->setSpace(player->getSpace()->getPathOne());
            }
        }
        else if(choice == 3)
        {
            player->setSpace(player->getSpace()->getPathTwo());
            while(player->getSpace()->getSpaceName() == "LivingRoom")
            {
                std::cout << std::endl;
                std::cout << "You are in the " << player->getSpace()->getSpaceName() << std::endl;
                std::cout << "Would you like to 1) inspect the room 2) go back to the bedroom 3) go to the kitchen 4) go to the garage or 5) go outside: ";
                std::cin >> choice;
                if(choice == 1)
                {
                    std::cout << std::endl;
                    player->inspectSpace();
                }
                else if(choice == 2)
                {
                    player->setSpace(player->getSpace()->getPathOne());
                }
                else if(choice == 3)
                {
                    player->setSpace(player->getSpace()->getPathTwo());
                    while(player->getSpace()->getSpaceName() == "Kitchen")
                    {
                        std::cout << std::endl;
                        std::cout << "You are in the " << player->getSpace()->getSpaceName() << std::endl;
                        std::cout << "Would you like to 1) inspect the room, 2) go back to the living room: ";
                        std::cin >> choice;
                        if(choice == 1)
                        {
                            std::cout << std::endl;
                            player->inspectSpace();
                            std::cout << "1) yes and 2) no: ";
                            std::cin >> choice;
                            if(choice == 1)
                            {
                                std::cout << std::endl;
                                if(player->getHasPack() == true)
                                {
                                    if(player->isInPack("Cookies") == false)
                                    {
                                        Item *cookie =player->getSpace()->pickUpItem();
                                        player->addToPack(cookie);
                                    }
                                    else 
                                        std::cout << "All the Cookies are gone." << std::endl;
                                }
                                else
                                {
                                    
                                    std::cout << "You don't have a backpack to carry your snacks! Maybe you can find one in the closet!" << std::endl;
                                }
                
                            }
                        }
                        else if(choice == 2)
                        {
                            player->setSpace(player->getSpace()->getPathOne());
                        }
                        
                    }
                }
                else if(choice == 4)
                {
                    player->setSpace(player->getSpace()->getPathThree());
                    while(player->getSpace()->getSpaceName() == "Garage")
                    {
                        std::cout << std::endl;
                        std::cout << "You are in the " << player->getSpace()->getSpaceName() << std::endl;
                        std::cout << "Would you like to 1) inspect the room, 2) go back to the living room: ";
                        std::cin >> choice;
                        if(choice == 1)
                        {
                            std::cout << std::endl;
                            player->inspectSpace();
                            std::cout << "1) yes and 2) no: ";
                            std::cin >> choice;
                            if(choice == 1)
                            {
                                if(player->getHasPack() == true)
                                {
                                    if(player->isInPack("Bat") == false)
                                    {
                                        Item *bat =player->getSpace()->pickUpItem();
                                        player->addToPack(bat);
                                    }
                                    else
                                    {
                                        std::cout << "You already have a bat." << std::endl;
                                    }
                                }
                                else
                                {
                                      std::cout << "You don't have a backpack to carry your Bat! Maybe you can find one in the closet!" << std::endl;
                                }
                            }
                        }
                        else if(choice == 2)
                        {
                            player->setSpace(player->getSpace()->getPathOne());
                        }
                    }
                }
                else if(choice == 5)
                {
                    if(player->getHasPack() == false)
                    {
                        std::cout << std::endl;
                        std::cout << "As you are about to step outside, you realize you should probably bring a backpack so you grab one from the closet!" << std::endl << std::endl;
                        player->wearBackPack();
                    }
                    player->setSpace(player->getSpace()->getPathFour());
                    
                    while(player->getSpace()->getSpaceName() == "OutSide")
                    {
                        std::cout << std::endl;
                        std::cout << "You are " << player->getSpace()->getSpaceName() << std::endl;
                        std::cout << "Would you like to 1) inspect the area, 2) go back to the living room: ";
                        std::cin >> choice;
                        if(choice == 1)
                        {
                            std::cout << std::endl;
                            player->inspectSpace();
                        }
                        else if(choice == 2)
                        {
                            std::cout << std::endl;
                            std::cout << "The door is locked and you do not have a key so you decide to follow the tracks in to the distance." << std::endl;
                            
                            
                            
                            Space *cave = new Cave();
                            out->setPath(cave, NULL, NULL, NULL);
                            cave->setPath(out, NULL, NULL, NULL);
                            
                            std::cout << std::endl;
                        
                            std::cout << "The tracks lead to a cave! Would you like to? 1) go in or 2) go back home : " ;
                            std::cin >> choice;
                            if(choice == 1)
                                player->setSpace(cave);
                            
                        }
                    }
                    delete bed;
                    delete closetSpace;
                    delete kit;
                    delete gar;
                    delete livingRoom;

                }
            }
        }
        
    }

    std::cout << "You are in the " << player->getSpace()->getSpaceName() << std::endl <<std::endl;
    
    
    std::cout << "As you are looking for Lucky, you run in to a gang of Trolls and one starts to attack you!" << std::endl << std::endl;
    //int numTrolls = rand()%8 + 3;
    int deadTroll = 0;
    while(player->getHealth() > 0 )
    {
        player->setBattle(true);
        while(player->getBattleState() == true)
        {
            
            if(deadTroll < 3)
            {
                Troll *enemy = new Troll();
                std::cout << std::endl;
                std::cout << "Would you like to 1) Throw Rocks 2) Swing the Bat 3) Eat Food 4) Look for more Rocks 5) Check BackPack: ";
                std::cin >> choice;
                if(choice == 1)
                {
                    player->getHit(enemy->attack(), enemy->getName());
                    enemy->getHit(player->attack("Rocks", enemy->getName()));
                }
                else if(choice == 2)
                {
                    player->getHit(enemy->attack(), enemy->getName());
                    enemy->getHit(player->attack("Bat", enemy->getName()));
                }
                else if(choice == 3)
                {
                    player->eat();
                }
                else if(choice ==4)
                {
                    if(!player->isInPack("Rocks"))
                    {
                        player->addToPack(player->getSpace()->pickUpItem());
                    }
                    else
                    {
                        player->addMoreRocks();
                    }
                }
                else if(choice == 5)
                {
                    player->showInventory();
                }
                if(player->getHealth() <= 0 )
                {
                    player->setBattle(false);
                }
                if(enemy->getHealth() <= 0)
                {
                    deadTroll++;
                    delete enemy;
                    if(deadTroll < 3)
                    {
                        std::cout << "Another crazy Troll is attacking you!" << std::endl << std::endl;
                    }
                }
                if(deadTroll == 3)
                {
                    player->setBattle(false);
                    std::cout << deadTroll << " Trolls have been killed!  The rest are running away in fear!" << std::endl << std::endl;
                }
            }
            
        }
        if(player->getHealth() > 0)
        {
            Boss *king = new Boss();
                std::cout << "You hear a loud roar!!! And a Giant King Troll jumps out in front of you!" << std::endl << std::endl;
                std::cout << "You notice behind King Troll is all your things from your room that was stolen!" << std::endl << std::endl;
            std::cout << "You made it just in time to save your cat before he became King Troll's dinner!! "<< std::endl  << std::endl;
    
            std::cout << "King Troll begins to attack you!" << std::endl << std::endl;
      
            player->setBattle(true);
            while(player->getBattleState() == true)
            {
                std::cout << "Would you like to 1) Throw Rocks 2) Swing the Bat 3) Eat Food 4) Look for more Rocks 5) Check BackPack: ";
                std::cin >> choice;
                if(choice == 1)
                {
                    player->getHit(king->attack(), king->getName());
                    king->getHit(player->attack("Rocks", king->getName()));
                }
                else if(choice == 2)
                {
                    player->getHit(king->attack(), king->getName());
                    king->getHit(player->attack("Bat", king->getName()));
                }
                else if(choice == 3)
                {
                    player->eat();
                }
                else if(choice ==4)
                {
                    if(!player->isInPack("Rocks"))
                    {
                        
                        player->addToPack(player->getSpace()->pickUpItem());
                    }
                    else
                    {
                        player->addMoreRocks();
                    }
                }
                else if(choice == 5)
                {
                    player->showInventory();
                }
                if(player->getHealth() <= 0 )
                {
                    player->setBattle(false);
                    std::cout << std::endl << "You have died." << std::endl;
                }
                if(king->getHealth() <= 0)
                {
                    delete king;
                    std::cout << "King Troll has died!!" << std::endl;
                    player->setBattle(false);
                    std::cout << std::endl << "Looks like the remaining Trolls have all scattered!"  << std::endl << std::endl;
                    std::cout << "You gather all your stolen items and carry Lucky home!" << std::endl;
                    std::cout << "Congratulations, you won!" << std::endl << std::endl;
                }
                
            }
        
        }
        else
            std::cout << std::endl << "You have died." << std::endl;
        
        player->endGame();
    
    }
    Space *tempCave = player->getSpace();
    player->setSpace(player->getSpace()->getPathOne());
    Space *tempOut = player->getSpace();
    delete tempCave;
    delete tempOut;
   
    std::cout << "Game is over! Thanks for playing!" << std::endl;
}