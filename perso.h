# pragma once
# include "grille.h"
# include <string>

class Perso{
    private :
        int symbole ;
        int x ;
        int y ;
        bool key ;
    public :
        //Perso(int x, int y) ;
        Perso() ;
        void init_perso(int x, int y)
        void add_to_grille(Grille& grille) ;
        void marche(char dir);
        void attrape_cle() ; 
} ;