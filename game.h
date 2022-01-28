#pragma once

#include "playboard.h"
#include "snake.h"

class Game
{
  Playboard playboard;
  Snake snake;
  int delay;
  
public:
  Game (int size, int h, int delay=200);
  void play ();
  void sleepOneLap ();
};