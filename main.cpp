# include "mechant.h"

void Game::sleepOneLap() {
  clock_t end;
   end = clock() + delay * CLOCKS_PER_SEC / 1000;
  while (clock() < end)
    {
      // wait i.e. do nothing
    }
}

int main(){

  return 0 ;
}