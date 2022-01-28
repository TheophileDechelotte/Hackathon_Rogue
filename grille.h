# pragma once
#include <iostream>
#include <vector>

class Grille {
    
    const std::vector <std::vector <char> > grille;
    
    public : 

    //Grille(const std::vector <std::vector <char> > grille) ;
   Grille() ;

    void draw_Grille() ;

    void vertical_Walls() ;

    void horizontal_Walls() ;

    void Corridor() ;

    void Ground() ;

    void init_Grille() ;

    void set_Pixel(int x, int y, char c) ;

} ;