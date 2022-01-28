# pragma once
# include "grille.h"
# include <vector>
# include <string>

class Mechant{
    private :
        std::string nom ;
        int symbole ;
        int x ;
        int y ;
    public :
        //Mechant (char nom, int x, int y) ;
        Mechant () ;
        void se_deplace(int dx,int dy) ;
        void pas_alea(Grille& grille) ;
        void add_to_grille(Grille& grille) ;

} ;