# pragma once
# include "mechant.h"
# include "grille.h"
# include <cstdlib>

Mechant::Mechant(char nom, int x, int y) :
    nom (nom) ,
    x (x), 
    y(y)
    {}

void Mechant::se_deplace(int dx, int dy){
    // on entre soit dx soit dy 
    // (se déplace dans une seule direction à la fois)
    if (dy == 0){
        x = x + dx ;
    }
    else if (dx == 0){
        y = y + dy ;
    }
}

void Mechant::pas_alea(Grille& grille){
    int alea = rand() % 4 ;
    if (alea == 0 && grille[x+1][y] = 2){
        // droite
        this->se_deplace(1,0) ;
    }
    if (alea == 1 && grille[x][y-1] = 2){
        // bas
        this->se_deplace(0,-1) ;
    }
    if (alea == 2 && grille[x-1][y] = 2){
        // gauche
        this->se_deplace(-1,0) ;
    }
    if (alea == 3 && grille[x][y+1] = 2){
        // haut
        this->se_deplace(0,1) ;
    }
    else{
        this->pas_alea(grille) ;
    }
}

void Mechant::add_to_grille(Grille& grille){
    grille.set_Pixel(x,y,nom) ;
}
