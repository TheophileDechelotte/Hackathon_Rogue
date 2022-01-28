# include "mechant.h"
# include "perso.h"
#include "game.h"
#include "grille.h"


void init_Grille() {
    """
    Fonction permettant de reinitialiser/initialiser la grille en ne construisant que le background, le ground, les murs, et le couloir
    """
    std::vector <std::vector <char> > grille (LINES, std::vector <char> (COLUMNS,BACKGROUND));
    grille.Ground();
    grille.vertical_Walls();
    grille.horizontal_Walls();
    grille.Corridor();
}


int main(){
    Game g;
    g.play();
    return 0;
}