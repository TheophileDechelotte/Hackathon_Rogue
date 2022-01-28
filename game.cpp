#include <iostream>
#include "game.h"
#include <array>
#include "keyboard_event.h"
#include "mechant.h"
#include "grille.h"

Game::Game(int delay) : delay(200) {}

void Game::play () {

    char key = 'j'; // à gauche au début

    int dx {-1};
    int dy {0};
  
    while (true) {
        grille.init();
        mechant.add_to_grille();
        perso.add_to_grille();
        grille.draw_playground();
        sleepOneLap();

// mouvement du méchant


// mouvement du héros
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
	        playboard.init();
	        std::cout << "see you soon la zone" << std::endl;
	        exit(1);
            } 
        }
    }
}