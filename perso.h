# pragma once
# include "grille.h"
# include <string>

class Perso{
    private :
        std::string nom ;
        char symbole ;
        int x ;
        int y ;
        bool key ;
    public :
        //Perso(int x, int y) ;
        Perso() ;
        void add_to_grille(Grille& grille) ;
        void marche(char dir);
        void attrape_cle() ; 
} ;