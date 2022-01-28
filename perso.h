# pragma once
# include <string>

class Perso{
    private :
        std::string nom ;
        char symbole
        int x ;
        int y ;
        bool key ;
    public :
        Perso(int x, int y) ;
        void attrape_cle() ; 
        void add_to_grille() ;
} ;