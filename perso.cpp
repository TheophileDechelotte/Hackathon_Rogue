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
    if(dir == 'i'){
        x++;
    }
    if(dir == 'k'){
        x = x-1;
    }
    if(dir == 'j'){
        y++;
    }
    if(dir == 'l'){
        y = y-1;
    }
}