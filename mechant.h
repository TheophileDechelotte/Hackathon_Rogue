# include <vector>
# include <string>

class Mechant{
    private :
        std::string nom ;
        int x ;
        int y ;
    public :
        Mechant (std::string nom, int x, int y) ;
        void se_deplace(int dx,int dy) ;
        void pas_alea() ;

} ;