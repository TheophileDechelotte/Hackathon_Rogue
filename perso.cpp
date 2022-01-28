# include "perso.h"
# include "grille.h"
#include <string>

//    Perso (int x, int y) :
 //   nom ("Maelle") ,
 //   symbole ('@') ,
   // x (x) ,
    //y (y) 
   // {}

Perso::Perso()
    {}


    void add_to_grille(Grille& grille) {
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