# include "perso.h"
# include "grille.h"

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