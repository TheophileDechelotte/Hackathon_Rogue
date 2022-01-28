#include <iostream>
#include "game.h"
#include <array>
#include "key_event.h"
#include "mechant.h"
#include "grille.h"
#include "perso.h"

Game::Game()
{}

void Game::play () {
  
    while (true) {
        _grille.init_Grille();
        _mechant.add_to_grille(_grille);
        _perso.add_to_grille(_grille);
        _grille.draw_Grille();
        sleepOneLap();

// mouvement du méchant

    char key;
// mouvement du héros
        if (keyEvent()) {
            std::cin >> key;

            if (key == 'q') { // on quite la partie
	            _grille.init_Grille();
	            std::cout << "see you soon la zone" << std::endl;
	            exit(1);
            } 

            _perso.marche(key);
        }

        _perso.add_to_grille(_grille);
        _grille.draw_Grille();
        sleepOneLap();
    }
}