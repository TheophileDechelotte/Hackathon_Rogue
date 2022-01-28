# include "perso.h"
# include "grille.h"
#include <string>


Perso::Perso()
    {}


void Perso::add_to_grille(Grille& grille) {
    grille.set_Pixel(x,y,symbole) ;
}

void attrape_cle() {}


void Perso::marche(char dir){
    if(dir == 'j'){
        x++;
    }
    if(dir == 'l'){
        x = x-1;
    }
    if(dir == 'i'){
        y++;
    }
    if(dir == 'k'){
        y = y-1;
    }
}