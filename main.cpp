#include "perso/perso.hpp"
#include "menu-jeu/menu.hpp"
#include "ascii-art/ascii.hpp"
using namespace std;




int main()
{
    Les_Personnages LesPersos = menuIntro();
    appel(LesPersos.Perso1.get_classe());
    cout << LesPersos.Perso1.get_HP();
    cout << LesPersos.Perso1.get_stamina();
    cout << (LesPersos.Perso1.get_Attaques()[0]).get_nom_competence();
    cout << LesPersos.Perso2.get_HP();
    cout << LesPersos.Perso2.get_stamina();
    

    LesPersos.Perso2.get_Attaques();
    LesPersos.Perso2.get_defense();
}
