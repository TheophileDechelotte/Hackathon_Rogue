#include <iostream>
#include <vector>

class Grille {
    
    const std::vector <std::vector <char> > playground;
    
    public : 

    Grille(const std::vector <std::vector <char> > playground) ;

    void draw_Playground() ;

    void vertical_Walls() ;

    void horizontal_Walls() ;

    void Corridor() ;

    void Doors() ;

    void set_Pixel(int x, int y, char c) ;


} ;