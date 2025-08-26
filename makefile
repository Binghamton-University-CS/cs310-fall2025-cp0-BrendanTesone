# This is a simplistic makefile with minimal functionality.
# More interesting makefiles to come!
#
# Specifiy the target
all: zoo

zoo: zoo.o Animal.o AnimalsInZoo.o
	g++ zoo.o Animal.o AnimalsInZoo.o -o zoo

Animal.o: Animal.cpp
	g++ -Wall -Wextra -c Animal.cpp

AnimalsInZoo.o: AnimalsInZoo.cpp
	g++ -Wall -Wextra -c AnimalsInZoo.cpp

zoo.o: zoo.cpp
	g++ -Wall -Wextra -c zoo.cpp

clean:
	rm -f *.o zoo
	rm -f *.o Animal
	rm -f *.o AnimalsInZoo
