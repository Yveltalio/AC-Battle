#include "perso.hpp"
#include "menu.hpp"
#include "ascii.hpp"
using namespace std;


Les_Personnages J1toJ2(Les_Personnages LesPersos)
{
        /*
        
        Attaque P1
        
        */
        bool AtkPret = false;
        bool DefPret = false;
        int choix_attaque;
        int choix_defense;
        Asciiappel(LesPersos.Perso1.get_classe());
        cout << LesPersos.Pseudo1 << "alias"<<LesPersos.Perso1.get_classe() << " a vous d'attaquer." << endl;
        cout << "PV : " << LesPersos.Perso1.get_HP() << endl;
        cout << "PA : " << LesPersos.Perso1.get_stamina() << endl;
        cout << "--------------------------------------" << endl;
        cout << "PV de" << LesPersos.Perso2.get_classe() <<" : " << LesPersos.Perso2.get_HP() << endl;
        cout << "PA de "<< LesPersos.Perso2.get_classe() << " : " << LesPersos.Perso2.get_stamina() << endl;
        while(!AtkPret)
        {
        AtkPret = true;
        cout << "--------------------------------------" << endl;
        cout << "Choisissez une attaque : " << endl;
        cout << "1. " << (LesPersos.Perso1.get_Attaques()[0]).get_nom_competence() << " , attaque prete dans " <<(LesPersos.Perso1.get_Attaques()[0]).get_cooldown() << " tours."  << endl;
        cout << "2. " << (LesPersos.Perso1.get_Attaques()[1]).get_nom_competence() << " , attaque prete dans " <<(LesPersos.Perso1.get_Attaques()[1]).get_cooldown() << " tours."  << endl;
        cout << "3. " << (LesPersos.Perso1.get_Attaques()[2]).get_nom_competence() << " , attaque prete dans " <<(LesPersos.Perso1.get_Attaques()[2]).get_cooldown() << " tours."  << endl;
        cin >> choix_attaque;
        if (LesPersos.Perso1.get_Attaques()[choix_attaque-1].get_cooldown() != 0){AtkPret = false;}
        if (LesPersos.Perso1.get_stamina() < LesPersos.Perso1.get_Attaques()[choix_attaque-1].get_cout_stamina())
        {
            cout << "--------------------------------------" << endl;
            cout << "Vous n'avez plus de PA." << endl;
            AtkPret = false;
        }
        }


        LesPersos.Perso1.set_stamina(LesPersos.Perso1.get_stamina() - LesPersos.Perso1.get_Attaques()[choix_attaque - 1].get_cout_stamina());
        /*
        
        Defense J2
        
        */

        cout << "--------------------------------------" << endl;
        Asciiappel(LesPersos.Perso2.get_classe());
        cout << LesPersos.Pseudo2 << "alias"<< LesPersos.Perso2.get_classe() << " a votre tour de vous defendre." << endl;
        cout << "PV : " << LesPersos.Perso2.get_HP() << endl;
        cout << "PA : " << LesPersos.Perso2.get_stamina() << endl;
        cout << "--------------------------------------" << endl;
        cout << "PV de" << LesPersos.Perso1.get_classe() << " : " << LesPersos.Perso1.get_HP() << endl;
        cout << "PA de " << LesPersos.Perso1.get_classe() << " : " << LesPersos.Perso1.get_stamina() << endl;
        while(!DefPret)
        {
        DefPret = true;
        cout << "--------------------------------------" << endl;
        cout << "Choisissez un moyen de vous protéger: " << endl;
        cout << "1. " << (LesPersos.Perso2.get_defense()[0]).get_nom_competence() << " , defense prete dans " <<(LesPersos.Perso2.get_defense()[0]).get_cooldown() << " tours."  << endl;
        cout << "2. " << (LesPersos.Perso2.get_defense()[1]).get_nom_competence() << " , defense prete dans " <<(LesPersos.Perso2.get_defense()[1]).get_cooldown() << " tours."  << endl;
        cout << "3. " << (LesPersos.Perso2.get_defense()[2]).get_nom_competence() << " , defense prete dans " <<(LesPersos.Perso2.get_defense()[2]).get_cooldown() << " tours."  << endl;
        cin >> choix_attaque;
        if (LesPersos.Perso2.get_Attaques()[choix_attaque-1].get_cooldown() != 0){AtkPret = false;}
        }
        cout << LesPersos.Pseudo1 <<"alias" << LesPersos.Perso1.get_classe() << "a attaquer " << LesPersos.Perso2.get_classe() << "avec "<< LesPersos.Perso1.get_Attaques()[choix_attaque-1].get_nom_competence() << "et" << LesPersos.Perso2.get_classe() << "s'est defendu avec " << LesPersos.Perso2.get_defense()[choix_defense-1].get_nom_competence() << endl;

        /*
        
        Gestion des cooldowns
        
        */
        LesPersos.Perso1.get_Attaques()[0].set_cooldown(LesPersos.Perso1.get_Attaques()[0].get_cooldown()-1);
        LesPersos.Perso1.get_Attaques()[1].set_cooldown(LesPersos.Perso1.get_Attaques()[1].get_cooldown()-1);
        LesPersos.Perso1.get_Attaques()[2].set_cooldown(LesPersos.Perso1.get_Attaques()[2].get_cooldown()-1);

        LesPersos.Perso2.get_defense()[0].set_cooldown(LesPersos.Perso2.get_defense()[0].get_cooldown()-1);
        LesPersos.Perso2.get_defense()[1].set_cooldown(LesPersos.Perso2.get_defense()[1].get_cooldown()-1);
        LesPersos.Perso2.get_defense()[2].set_cooldown(LesPersos.Perso2.get_defense()[2].get_cooldown()-1);

        if(LesPersos.Perso1.get_Attaques()[0].get_cooldown()<0){LesPersos.Perso1.get_Attaques()[0].set_cooldown(0);}
        if(LesPersos.Perso1.get_Attaques()[1].get_cooldown()<0){LesPersos.Perso1.get_Attaques()[1].set_cooldown(0);}
        if(LesPersos.Perso1.get_Attaques()[2].get_cooldown()<0){LesPersos.Perso1.get_Attaques()[2].set_cooldown(0);}
        
        if(LesPersos.Perso2.get_defense()[0].get_cooldown()<0){LesPersos.Perso2.get_defense()[0].set_cooldown(0);}
        if(LesPersos.Perso2.get_defense()[1].get_cooldown()<0){LesPersos.Perso2.get_defense()[1].set_cooldown(0);}
        if(LesPersos.Perso2.get_defense()[2].get_cooldown()<0){LesPersos.Perso2.get_defense()[2].set_cooldown(0);}


        LesPersos.Perso1.get_defense()[choix_defense-1].set_cooldown(LesPersos.Perso1.get_defense()[choix_defense-1].get_cooldownMax());
        LesPersos.Perso2.get_Attaques()[choix_attaque-1].set_cooldown(LesPersos.Perso2.get_Attaques()[choix_attaque-1].get_cooldownMax());

        /*
        
        Calcul degats / reduc degats / heal

        */


        int damage = LesPersos.Perso1.get_Attaques()[choix_attaque - 1].get_attaque() - LesPersos.Perso2.get_defense()[choix_defense - 1].get_reducDefense();
        if (damage < 0)
        {
            damage = 0;
        }
        LesPersos.Perso2.set_HP(LesPersos.Perso2.get_HP() - damage);

        LesPersos.Perso2.set_HP(LesPersos.Perso2.get_HP() + LesPersos.Perso2.get_defense()[choix_defense - 1].get_soin());
        LesPersos.Perso2.set_stamina(LesPersos.Perso2.get_stamina() + LesPersos.Perso2.get_defense()[choix_defense - 1].get_cout_stamina());
}

Les_Personnages J2toJ1(Les_Personnages LesPersos)
{
        /*
        
        Attaque P2
        
        */
        bool AtkPret = false;
        bool DefPret = false;
        int choix_attaque;
        int choix_defense;
        Asciiappel(LesPersos.Perso2.get_classe());
        cout << LesPersos.Pseudo2 <<"alias"<<LesPersos.Perso2.get_classe() << " a vous d'attaquer." << endl;
        cout << "PV : " << LesPersos.Perso2.get_HP() << endl;
        cout << "PA : " << LesPersos.Perso2.get_stamina() << endl;
        cout << "--------------------------------------" << endl;
        cout << "PV de" << LesPersos.Perso1.get_classe() << " : " << LesPersos.Perso1.get_HP() << endl;
        cout << "PA de " << LesPersos.Perso1.get_classe() << " : " << LesPersos.Perso1.get_stamina() << endl;
        while(!AtkPret)
        {
        AtkPret = true;
        cout << "--------------------------------------" << endl;
        cout << "Choisissez une attaque : " << endl;
        cout << "1. " << (LesPersos.Perso2.get_Attaques()[0]).get_nom_competence() << " , attaque prete dans " <<(LesPersos.Perso2.get_Attaques()[0]).get_cooldown() << " tours."  << endl;
        cout << "2. " << (LesPersos.Perso2.get_Attaques()[1]).get_nom_competence() << " , attaque prete dans " <<(LesPersos.Perso2.get_Attaques()[1]).get_cooldown() << " tours."  << endl;
        cout << "3. " << (LesPersos.Perso2.get_Attaques()[2]).get_nom_competence() << " , attaque prete dans " <<(LesPersos.Perso2.get_Attaques()[2]).get_cooldown() << " tours."  << endl;
        cin >> choix_attaque;
        if (LesPersos.Perso2.get_Attaques()[choix_attaque-1].get_cooldown() != 0){AtkPret = false;}
        if (LesPersos.Perso2.get_stamina() < LesPersos.Perso2.get_Attaques()[choix_attaque-1].get_cout_stamina())
        {
            cout << "--------------------------------------" << endl;
            cout << "Vous n'avez plus de PA." << endl;
            AtkPret = false;
        }
        }

        LesPersos.Perso2.set_stamina(LesPersos.Perso2.get_stamina() - LesPersos.Perso2.get_Attaques()[choix_attaque - 1].get_cout_stamina());

        /*
        
        Defense P1
        
        */

        cout << "--------------------------------------" << endl;
        Asciiappel(LesPersos.Perso1.get_classe());
        cout << LesPersos.Pseudo2 <<"alias"<< LesPersos.Perso1.get_classe() <<" a votre tour de vous defendre." << endl;
        cout << "PV : " << LesPersos.Perso1.get_HP() << endl;
        cout << "PA : " << LesPersos.Perso1.get_stamina() << endl;
        cout << "--------------------------------------" << endl;
        cout << "PV de" << LesPersos.Perso2.get_classe() << " : " << LesPersos.Perso2.get_HP() << endl;
        cout << "PA de " << LesPersos.Perso2.get_classe() << " : " << LesPersos.Perso2.get_stamina() << endl;
        while(!DefPret)
        {
        DefPret = true;
        cout << "--------------------------------------" << endl;
        cout << "Choisissez un moyen de vous protéger: " << endl;
        cout << "1. " << (LesPersos.Perso1.get_defense()[0]).get_nom_competence() << " , defense prete dans " <<(LesPersos.Perso1.get_defense()[0]).get_cooldown() << " tours."  << endl;
        cout << "2. " << (LesPersos.Perso1.get_defense()[1]).get_nom_competence() << " , defense prete dans " <<(LesPersos.Perso1.get_defense()[1]).get_cooldown() << " tours."  << endl;
        cout << "3. " << (LesPersos.Perso1.get_defense()[2]).get_nom_competence() << " , defense prete dans " <<(LesPersos.Perso1.get_defense()[2]).get_cooldown() << " tours."  << endl;
        cin >> choix_attaque;
        if (LesPersos.Perso1.get_Attaques()[choix_attaque-1].get_cooldown() != 0){AtkPret = false;}
        }

        cout << LesPersos.Pseudo2 <<"alias" << LesPersos.Perso2.get_classe() << "a attaquer " << LesPersos.Perso1.get_classe() << "avec "<< LesPersos.Perso2.get_Attaques()[choix_attaque-1].get_nom_competence() << "et" << LesPersos.Perso1.get_classe() << "s'est defendu avec " << LesPersos.Perso1.get_defense()[choix_defense-1].get_nom_competence() << endl;

        /*
        
        Gestion des cooldowns
        
        */
        LesPersos.Perso2.get_Attaques()[0].set_cooldown(LesPersos.Perso2.get_Attaques()[0].get_cooldown()-1);
        LesPersos.Perso2.get_Attaques()[1].set_cooldown(LesPersos.Perso2.get_Attaques()[1].get_cooldown()-1);
        LesPersos.Perso2.get_Attaques()[2].set_cooldown(LesPersos.Perso2.get_Attaques()[2].get_cooldown()-1);

        LesPersos.Perso1.get_defense()[0].set_cooldown(LesPersos.Perso1.get_defense()[0].get_cooldown()-1);
        LesPersos.Perso1.get_defense()[1].set_cooldown(LesPersos.Perso1.get_defense()[1].get_cooldown()-1);
        LesPersos.Perso1.get_defense()[2].set_cooldown(LesPersos.Perso1.get_defense()[2].get_cooldown()-1);

        if(LesPersos.Perso2.get_Attaques()[0].get_cooldown()<0){LesPersos.Perso2.get_Attaques()[0].set_cooldown(0);}
        if(LesPersos.Perso2.get_Attaques()[1].get_cooldown()<0){LesPersos.Perso2.get_Attaques()[1].set_cooldown(0);}
        if(LesPersos.Perso2.get_Attaques()[2].get_cooldown()<0){LesPersos.Perso2.get_Attaques()[2].set_cooldown(0);}
        
        if(LesPersos.Perso1.get_defense()[0].get_cooldown()<0){LesPersos.Perso1.get_defense()[0].set_cooldown(0);}
        if(LesPersos.Perso1.get_defense()[1].get_cooldown()<0){LesPersos.Perso1.get_defense()[1].set_cooldown(0);}
        if(LesPersos.Perso1.get_defense()[2].get_cooldown()<0){LesPersos.Perso1.get_defense()[2].set_cooldown(0);}


        LesPersos.Perso1.get_defense()[choix_defense-1].set_cooldown(LesPersos.Perso1.get_defense()[choix_defense-1].get_cooldownMax());
        LesPersos.Perso2.get_Attaques()[choix_attaque-1].set_cooldown(LesPersos.Perso2.get_Attaques()[choix_attaque-1].get_cooldownMax());

        /*
        
        Calcul degats / reduc degats / heal
        
        */
        LesPersos.Perso1.get_defense()[choix_defense-1].set_cooldown(LesPersos.Perso1.get_defense()[choix_defense-1].get_cooldownMax());
        LesPersos.Perso2.get_Attaques()[choix_attaque-1].set_cooldown(LesPersos.Perso2.get_Attaques()[choix_attaque-1].get_cooldownMax());

        int damage = LesPersos.Perso2.get_Attaques()[choix_attaque - 1].get_attaque() - LesPersos.Perso1.get_defense()[choix_defense - 1].get_reducDefense();
        if (damage < 0)
        {
            damage = 0;
        }
        LesPersos.Perso1.set_HP(LesPersos.Perso1.get_HP() - damage);

        LesPersos.Perso1.set_HP(LesPersos.Perso1.get_HP() + LesPersos.Perso1.get_defense()[choix_defense - 1].get_soin());
        LesPersos.Perso1.set_stamina(LesPersos.Perso1.get_stamina() + LesPersos.Perso1.get_defense()[choix_defense - 1].get_cout_stamina());
}