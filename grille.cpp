#include <iostream>
#include <vector>
#include "grille.h"



const int LINES = 10;
const int COLUMNS = 10;
const char GROUND = '.';
const char CORRIDOR = '#';
const char DOOR = '+';

Grille::Grille(const std::vector <std::vector <char> > playground) :
playground(playground)
{}

void Grille::draw_Playground(const std::vector <std::vector <char> > & playground) {
    for (int i=0 ; i<playground.size() ; i++) {
        for (int j=0 ; j<playground[1].size() ; j++) {
            std::cout << playground[i][j];
        }
        std::cout << std::endl;
    }
}





