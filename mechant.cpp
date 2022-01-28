# pragma once
# include "mechant.h"
# include <cstdlib>

Mechant::Mechant(std::string nom, int x, int y) :
    nom (nom) ,
    x (x), 
    y(y)
    {}

Mechant::se_deplace(int dx, int dy){
    // on entre soit dx soit dy 
    // (se déplace dans une seule direction à la fois)
    if (dy == 0){
        x = x + dx ;
    }
    else if (dx == 0){
        y = y + dy ;
    }
}

