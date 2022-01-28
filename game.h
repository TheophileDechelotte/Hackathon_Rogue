#pragma once

#include "grille.h"
#include "mechant.h"
#include "perso.h"

class Game
{
    private:
    Grille _grille;
    Mechant _mechant;
    Perso _perso;
    int _delay;
  
public:
  Game ();
  void play ();
  void sleepOneLap ();
};