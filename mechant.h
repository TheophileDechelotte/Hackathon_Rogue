# include <vector>
# include <string>

class Mechant{
    private :
        char nom ;
        int x ;
        int y ;
    public :
        Mechant (char nom, int x, int y) ;
        void se_deplace(int dx,int dy) ;
        void pas_alea() ;
        void add_to_grille(Grille& grille) ;

} ;