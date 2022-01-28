#include <iostream>
#include <vector>
#include "grille.h"


const int LINES = 10;
const int COLUMNS = 30;
const char BACKGROUND ' ';
const char GROUND = '.';
const char CORRIDOR = '#';
const char DOOR = '+';


Grille::Grille(const std::vector <std::vector <char> > grille) :
grille(grille)
{}

void Grille::draw_Grille() {
    """
    Fonction permettant d'afficher la grille que l'on a construit
    """
    for (int i=0 ; i<grille.size() ; i++) {
        for (int j=0 ; j<grille[1].size() ; j++) {
            std::cout << grille[i][j];
        }
        std::cout << std::endl;
    }
}

void Grille::vertical_Walls() {
    """
    Fonction permettant d'ajouter à la grille les murs verticaux
    """
    
    for (int i=1 ; i<grille.size() ; i++) {
        grille[i][0] = '|';
        grille[i][int(grille[1].size()/3)] = '|';
        grille[i][int(2*grille[1].size()/3)] = '|';
        grille[i][grille[1].size()-1] = '|';
    }
}

void Grille::horizontal_Walls() {
    """
    Fonction permettant d'ajouter à la grille les murs horizontaux
    """
    
    for (int j=0 ; j<int(grille[1].size()/3) ; j++) {
        grille[0][j] = '_';
        grille[grille.size()-1][j] = '_';
    }
    
    for (int j=int(2*grille[1].size()/3) ; j<grille[1].size() ; j++) {
        grille[0][j] = '_';
        grille[grille.size()-1][j] = '_';
    }
}

void Grille::Corridor() {
    """
    Fonction permettant d'ajouter à la grille le couloir
    """

    for (int j=int(grille[1].size()/3) ; j<int(2*grille[1].size()/3) ; j++) {
        grille[int(grille.size()/2)][j] ;
    }
}


void Grille::Ground() {
    """
    Fonction permettant d'ajouter à la grille le sol
    """

    for (int i=1 ; i<grille.size()-1 ; i++){
        for (int j=1 ; j<int(grille[1].size()/3)-1 : j++) {
            grille[i][j] = GROUND ;
        }
        for (int j=int(2*grille[1].size()/3)+1 ; j<grille[1].size()-1 : j++) {
            grille[i][j] = GROUND ;
        }
    }
}











