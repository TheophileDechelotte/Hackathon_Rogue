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
    """
    Fonction permettant d'afficher la grille que l'on a construit
    """
    for (int i=0 ; i<playground.size() ; i++) {
        for (int j=0 ; j<playground[1].size() ; j++) {
            std::cout << playground[i][j];
        }
        std::cout << std::endl;
    }
}

void Grille::vertical_Walls(const std::vector <std::vector <char> > & playground) {
    """
    Fonction permettant d'ajouter à la grille les murs verticaux
    """
    
    for (int j=0 ; j<int(playground[1].size()/3) ; j++) {
        playground[0][j] = '_';
        playground[playground.size()-1][j] = '_';
    }
    
    for (int j=int(2*playground[1].size()/3) ; j<playground[1].size() ; j++) {
        playground[0][j] = '_';
        playground[playground.size()-1][j] = '_';
    }
}

void Grille::horizontal_Walls(const std::vector <std::vector <char> > & playground) {
    """
    Fonction permettant d'ajouter à la grille les murs horizontaux
    """
    
    for (int i=1 ; i<playground.size() ; i++) {
        playground[i][0] = '|';
        playground[i][playground[1].size()/3] = '|';
        playground[i][2*playground[1].size()/3] = '|';
        playground[i][playground[1].size()-1] = '|';
    }
}





