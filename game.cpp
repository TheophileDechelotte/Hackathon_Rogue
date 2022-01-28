#include <iostream>
#include "game.h"
#include <array>
#include "keyboard_event.h"
#include "mechant.h"
#include "grille.h"

Game::Game(Grille grille, Mechant Mechant, int delay)
  : Grille(grille),
  Mechant(Mechant),
  delay(delay)
{}

void Game::play () {

  char key = 'j'; // à gauche au début

  int dx {-1};
  int dy {0};
  
  while (true) {
    grille.clear();
    mechant.addToPlayboard(playboard);
    grille.draw_playground();
    sleepOneLap();

    if (keyEvent()) {
      std::cin >> key;
      // la clé key a été pressée
      if (key == 'l'){ // on veut aller à droite
	dx = 0; 
  dy = 1;}
      else if (key == 'j') { // on veut aller à gauche
	dx = -1; 
  dy = 0;}
      else if (key == 'i'){ // on veut aller en haut
	dy = 0;
  dx = -1; }
      else if (key == 'k'){ // on veut aller en bas
	dy = 1; 
  dx = 0;}
      else if (key == 'q') { // on quite la partie
	playboard.clear();
	std::cout << "see you soon little snake" << std::endl;
	exit(1);
      } else {
	// pas de clé (encore) connue: vous pouvez en rajouter pour de
	// nouveaux traitements
      }
    }
    // le serpent est entré dans un des murs
    if (not snake.goodMove(playboard, dx, dy)) {
      std::cout << "game over" << std::endl;
      exit(2);
    }
  }
}