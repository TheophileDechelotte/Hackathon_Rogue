#pragma once

#include "grille.h"
#include "mechant.h"

class Game
{
  Grille Grille;
  Mechant Mechant;
  int delay;
  
public:
  Game (Grille grille, Mechant Mechant, Perso Perso, int delay=200);
  void play ();
  void sleepOneLap ();
};