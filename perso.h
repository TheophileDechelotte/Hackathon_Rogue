#pragma once

class Perso{
    private :
        int x ;
        int y ;
        bool key ;
    public :
        Perso(int x, int y) ;
        void attrape_cle() ; 
        void add_to_grille() ;
} ;