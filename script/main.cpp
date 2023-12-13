#include "perso.hpp"
#include "menu.hpp"
#include "ascii.hpp"
using namespace std;

int main()
{
    Les_Personnages LesPersos = menuIntro();
    while (true)
    {
        LesPersos = J1toJ2(LesPersos);
        if (LesPersos.Perso2.get_HP() <= 0)
        {
            cout << LesPersos.Pseudo1 << "a gagné !";
            return 0;
        }
        LesPersos = J2toJ1(LesPersos);
        if (LesPersos.Perso1.get_HP() <= 0)
        {
            cout << LesPersos.Pseudo2 << "a gagné !";
            return 0;
        }
    }
}