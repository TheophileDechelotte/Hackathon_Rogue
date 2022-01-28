# pragma once
# include "grille.h"
# include <string>

class Perso{
    private :
        int symbole = 6 ;
        int x = -1 ;
        int y = -1 ;
        bool key = false ;
        int vie = 5 ;
    public :
        //Perso(int x, int y) ;
        Perso() ;
        void init_perso(int a, int b) ;
        void add_to_grille(Grille& grille) ;
        void marche(char dir, Grille& grille);
        void attrape_cle() ;
        int vie() ; 
} ;