# include "perso.h"
# include "grille.h"
#include <string>


Perso::Perso()
    {}

void Perso::init_perso(int a, int b){
    x = a ;
    y = b ;
    symbole = 6 ;
    key = 0 ;
}


void Perso::add_to_grille(Grille& grille) {
    grille.set_Pixel(x,y,symbole) ;
}

void attrape_cle() {}


void Perso::marche(char dir){
    if(dir == 'k'){
        x++;
    }
    if(dir == 'i'){
        x = x-1;
    }
    if(dir == 'l'){
        y++;
    }
    if(dir == 'j'){
        y = y-1;
    }
}