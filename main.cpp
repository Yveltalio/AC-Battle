#include "perso/perso.hpp"
#include "menu-jeu/menu.hpp"
#include "ascii-art/ascii.hpp"
using namespace std;




int main()
{
    Les_Personnages LesPersos = menuIntro();
    while(true)
    {
    cout << appel(LesPersos.Perso1.get_classe()) << " vous pouvez commencer a jouer." << endl;
    cout << "PV : " << LesPersos.Perso1.get_HP() << endl;
    cout << "PA : " << LesPersos.Perso1.get_stamina() << endl;
    cout << "--------------------------------------" << endl;
    cout << "PV de l'adversaire : " << LesPersos.Perso2.get_HP() << endl;
    cout << "PA de l'adversaire : " << LesPersos.Perso2.get_stamina() << endl;
    cout << "--------------------------------------" << endl;
    cout << "Choisissez une attaque : " << endl;
    cout << "1. " << (LesPersos.Perso1.get_Attaques()[0]).get_nom_competence() << endl;    
    cout << "2. " << (LesPersos.Perso1.get_Attaques()[1]).get_nom_competence() << endl;
    cout << "3. " << (LesPersos.Perso1.get_Attaques()[3]).get_nom_competence() << endl; 
    int choix_attaque;
    cin >> choix_attaque;

    LesPersos.Perso1.set_stamina(LesPersos.Perso1.get_stamina()-LesPersos.Perso1.get_Attaques()[choix_attaque-1].get_cout_stamina());
    

    cout << "--------------------------------------" << endl;
    cout << appel(LesPersos.Perso2.get_classe()) << " a votre tour de vous defendre." << endl;
    cout << "PV : " << LesPersos.Perso2.get_HP() << endl;
    cout << "PA : " << LesPersos.Perso2.get_stamina() << endl;
    cout << "--------------------------------------" << endl;
    cout << "PV de l'adversaire : " << LesPersos.Perso1.get_HP() << endl;
    cout << "PA de l'adversaire : " << LesPersos.Perso1.get_stamina() << endl;
    cout << "--------------------------------------" << endl;
    cout << "Defendez-vous : " << endl;
    cout << "1. " << (LesPersos.Perso2.get_defense()[0]).get_nom_competence() << endl;
    cout << "2. " << (LesPersos.Perso2.get_defense()[1]).get_nom_competence() << endl;
    cout << "3. " << (LesPersos.Perso2.get_defense()[2]).get_nom_competence() << endl;
    int choix_defense;
    cin >> choix_defense;
    int damage = LesPersos.Perso1.get_Attaques()[choix_attaque-1].get_attaque() - LesPersos.Perso2.get_defense()[choix_defense-1].get_reducDefense();
    if (damage < 0)
    {
        damage = 0;
    }
    LesPersos.Perso2.set_HP(LesPersos.Perso2.get_HP()-damage);
    if (LesPersos.Perso2.get_HP() <= 0)
    {
        return 0;
    }
    LesPersos.Perso2.set_HP(LesPersos.Perso2.get_HP()+LesPersos.Perso2.get_defense()[choix_defense-1].get_soin());

    cout << "--------------------------------------" << endl;
    cout << "Choisissez une attaque : " << endl;
    cout << "1. " << (LesPersos.Perso2.get_Attaques()[0]).get_nom_competence() << endl;    
    cout << "2. " << (LesPersos.Perso2.get_Attaques()[1]).get_nom_competence() << endl;
    cout << "3. " << (LesPersos.Perso2.get_Attaques()[3]).get_nom_competence() << endl; 
    cin >> choix_attaque;

    LesPersos.Perso2.set_stamina(LesPersos.Perso2.get_stamina()-LesPersos.Perso2.get_Attaques()[choix_attaque-1].get_cout_stamina());
    

    cout << "--------------------------------------" << endl;
    cout << appel(LesPersos.Perso1.get_classe()) << " a votre tour de vous defendre." << endl;
    cout << "PV : " << LesPersos.Perso1.get_HP() << endl;
    cout << "PA : " << LesPersos.Perso1.get_stamina() << endl;
    cout << "--------------------------------------" << endl;
    cout << "PV de l'adversaire : " << LesPersos.Perso2.get_HP() << endl;
    cout << "PA de l'adversaire : " << LesPersos.Perso2.get_stamina() << endl;
    cout << "--------------------------------------" << endl;
    cout << "Defendez-vous : " << endl;
    cout << "1. " << (LesPersos.Perso1.get_defense()[0]).get_nom_competence() << endl;
    cout << "2. " << (LesPersos.Perso1.get_defense()[1]).get_nom_competence() << endl;
    cout << "3. " << (LesPersos.Perso1.get_defense()[2]).get_nom_competence() << endl;
    cin >> choix_defense;
    int damage = LesPersos.Perso2.get_Attaques()[choix_attaque-1].get_attaque() - LesPersos.Perso1.get_defense()[choix_defense-1].get_reducDefense();
    if (damage < 0)
    {
        damage = 0;
    }
    LesPersos.Perso1.set_HP(LesPersos.Perso1.get_HP()-damage);
    if (LesPersos.Perso1.get_HP() <= 0)
    {
        return 0;
    }
    LesPersos.Perso1.set_HP(LesPersos.Perso1.get_HP()+LesPersos.Perso1.get_defense()[choix_defense-1].get_soin());
    
    }
}
