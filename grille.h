#include <iostream>
#include <vector>

class Grille {
    
    const std::vector <std::vector <char> > playground;
    
    public : 

    Grille(const std::vector <std::vector <char> > playground) ;

    void draw_Playground(const std::vector <std::vector <char> > & playground) ;

    void vertical_Walls(const std::vector <std::vector <char> > & playground) ;

    void horizontal_Walls(const std::vector <std::vector <char> > & playground) ;

    void Corridor(const std::vector <std::vector <char> > & playground) ;

    void Doors(const std::vector <std::vector <char> > & playground) ;


} ;