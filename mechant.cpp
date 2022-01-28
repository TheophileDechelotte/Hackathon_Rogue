# include "mechant.h"
# include "grille.h"
# include <cstdlib>

//Mechant::Mechant(char nom, int x, int y) :
//    nom ("Osef") ,
//    symbole ('K')
//    x (x), 
//    y(y)
//    {}

Mechant::Mechant()
{}

void Mechant::se_deplace(int dx, int dy){
    x += dx ;
    y += dy ;
}

int vie;
void Mechant::pas_alea(Grille& grille){
    int alea = rand() % 6 ; // 2/3 chances de se déplacer de manière aléatoire
    if (alea == 0){
        // droite
        this->se_deplace(1,0) ;
        if (grille.at(x+1,y) != 2) {
            this->se_deplace(-1,0) ;
        }
    }
    if (alea == 1){
        // bas
        this->se_deplace(0,-1) ;
        if (grille.at(x,y-1) != 2) {
            this->se_deplace(0,1) ;
        }
    }
    if (alea == 2){
        // gauche
        this->se_deplace(-1,0) ;
        if (grille.at(x-1,y) != 2) {
            this->se_deplace(1,0) ;
        }
    }
    if (alea == 3){
        // haut
        this->se_deplace(0,1) ;
        if (grille.at(x,y+1) != 2) {
            this->se_deplace(0,-1) ;
        }
    }
        //si on touche le monstre
    if(grille.at(x,y-1)==6 || grille.at(x,y+1)==6 || grille.at(x-1,y)==6 || grille.at(x+1,y)==6){
        if(vie > 1){
            vie = vie-1;
        }
        else{
            std::cout << std::endl << "GAME OVER" << std::endl;
	        exit(1);
        }
    }
}

void Mechant::add_to_grille(Grille& grille){
    grille.set_Pixel(x,y,symbole) ;
}


void Mechant::init(int a, int b){
    symbole = 7;
    x = a;
    y = b;
}
