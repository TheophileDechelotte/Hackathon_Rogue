# pragma once
#include <iostream>
#include <vector>

class Grille {
    
    std::vector <std::vector <int> > grille;
    
    public : 

    //Grille(const std::vector <std::vector <int> > grille) ;
   Grille() ;

    void draw_Grille() ;

    void vertical_Walls() ;

    void horizontal_Walls() ;

    void Corridor() ;

    void Ground() ;

    void init_Grille() ; 

    void set_Pixel(int x, int y, int c) ;

    int at(int a, int b);

} ;