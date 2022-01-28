CPP=g++ -g
RM=rm -f

game : game.o grille.o key_event.o main.o mechant.o perso.o mechant.o objets.o
	$(CPP) $^ -o $@

# vérifiez les dépendances
game.o : game.cpp perso.h mechant.h
grille.o : grille.cpp 
key_event.o : key_event.cpp
main.o : main.cpp game.h snake.h playboard.h

%.o:%.cpp
	$(CPP) -o $@ -c $<

clean:
	$(RM) *.o game

.PHONY: clean