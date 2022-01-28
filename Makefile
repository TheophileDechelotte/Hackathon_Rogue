CPP=g++ -g
RM=rm -f

game : game.o grille.o key_event.o main.o mechant.o perso.o mechant.o 
	$(CPP) $^ -o $@

# vérifiez les dépendances
game.o : game.h game.cpp perso.h mechant.h grille.h 
grille.o : grille.h grille.cpp 
key_event.o : key_event.h key_event.cpp
main.o : main.cpp game.h 

%.o:%.cpp
	$(CPP) -o $@ -c $<

clean:
	$(RM) *.o game 

.PHONY: clean