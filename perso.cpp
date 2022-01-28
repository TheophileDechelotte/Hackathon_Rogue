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


void Perso::marche(char dir, Grille& grille){
    if(dir == 'k'){
        if (grille.at(x+1,y)==2 || grille.at(x+1,y)==5 || grille.at(x+1,y)==8){
            x++;
        }
    }
    if(dir == 'i'){
        if (grille.at(x-1,y)==2 || grille.at(x-1,y)==5 || grille.at(x-1,y)==8){
            x = x-1;
        }
    }
    if(dir == 'l'){
        if (grille.at(x,y+1)==2 || grille.at(x,y+1)==5 || grille.at(x,y+1)==8){
            y++;
        }
    }
    if(dir == 'j'){
        if (grille.at(x,y-1)==2 || grille.at(x,y-1)==5 || grille.at(x,y-1)==8){
            y = y-1;
        }
    }
    
}


int Perso::vie(){
    return vie;
}