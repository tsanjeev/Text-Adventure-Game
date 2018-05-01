# 	basic makefile.
#
#	#'s are line-comments
#
#	g++ is the compiler.
#	-o sets the executable name
#
#	Edit the following as so:
# 	program		-	the name of your executable.
# 	file1.cpp	-	whatever your source files are. add more as needed.
# 	file1.hpp	-	whatever your headers are (if any), add more as needed.
#
#	type "make" or "make default" in terminal to use the makefile.

program: main.cpp Menu.cpp Menu.hpp Boss.cpp Boss.hpp Troll.hpp Troll.cpp List.hpp List.cpp Cave.hpp Cave.cpp Garage.hpp Garage.cpp OutSide.hpp OutSide.cpp Kitchen.cpp Kitchen.hpp Space.cpp Space.hpp Creature.hpp Creature.cpp Hero.hpp Hero.cpp Bedroom.hpp Bedroom.cpp Closet.hpp Closet.cpp Item.cpp Item.hpp LivingRoom.cpp LivingRoom.hpp
	g++ -o gameMain main.cpp Menu.cpp Boss.cpp Troll.cpp List.cpp Cave.cpp Garage.cpp OutSide.cpp Kitchen.cpp Space.cpp Creature.cpp Hero.cpp Bedroom.cpp Closet.cpp Item.cpp LivingRoom.cpp	

clean: 
	rm -f *.o 
