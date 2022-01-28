#include "game.h"


int main(){
    Game g;

    Grille gr ;
    gr.init_Grille() ;

    gr.draw_Grille() ;

    Perso perso ;
    perso.init_perso(5,7) ;

    Mechant mechant ;
    mechant.init(5,5) ;
    
    int delay = 500 ;

    g.init_game(gr,mechant,perso,delay) ;

    g.play();

    return 0;
}