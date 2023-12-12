#include "perso.hpp"

Personnage ChoisirPerso(int camp)
{
    int choix = 0;
    if (camp == 0)
    {
        while(choix !=1 || choix != 2)
        {
        std::cout << "Choisissez un cote" << std::endl << std::endl << "1 - Gentil             2 - Malveillant";
        std::cin >> choix;
        if (choix == 1){return ChoisirGentil();}
        if (choix == 2){return ChoisirMechant();}
        std::cout << "Choisis un chiffre valide !" << std::endl;
        }
    }
    if (camp == 1){return ChoisirGentil();}
    if (camp == 2){return ChoisirMechant();}
    
}

Personnage ChoisirGentil()
{

    int choix = 0;
    Personnage LePerso = Personnage(100,100,"Altair Ibn La-Ahad",true,AttributionAttaque("Altair Ibn La-Ahad"),AttributionDefense("Altair Ibn La-Ahad"));
    while(choix <= 0 && choix >= 6)
    {
        std::cout << "Choisissez un Gentil" << std::endl << std::endl ;
        std::cout << "1.	Altair Ibn La-Ahad " << std::endl;
        std::cout << "2.	Ezio Auditore " << std::endl;
        std::cout << "3.	Edward Kenway  " << std::endl;
        std::cout << "4.	Bayek de Siwa  " << std::endl;
        std::cout << "5.	Eivor Ami-des-loups  " << std::endl;
        std::cin >> choix;
    }
    switch(choix){
        case 1:
            LePerso = Personnage(100,100,"Altair Ibn La-Ahad",true,AttributionAttaque("Altair Ibn La-Ahad"),AttributionDefense("Altair Ibn La-Ahad"));
            break;
        case 2:
            LePerso = Personnage(100,100,"Ezio Auditore",true,AttributionAttaque("Ezio Auditore"),AttributionDefense("Ezio Auditore"));
            break;
        case 3:
            LePerso = Personnage(100,100,"Edward Kenway",true,AttributionAttaque("Edward Kenway"),AttributionDefense("Edward Kenway"));
            break;
        case 4:
            LePerso = Personnage(100,100,"Bayek de Siwa",true,AttributionAttaque("Bayek de Siwa"),AttributionDefense("Bayek de Siwa"));
            break;
        default:
            LePerso = Personnage(100,100,"Eivor Ami-des-loups",true,AttributionAttaque("Eivor Ami-des-loups"),AttributionDefense("Eivor Ami-des-loups"));
            break;
    }
    return LePerso;
}


Personnage ChoisirMechant()
{
    int choix = 0;
    Personnage LePerso = Personnage(100,100,"Altair Ibn La-Ahad",true,AttributionAttaque("Altair Ibn La-Ahad"),AttributionDefense("Altair Ibn La-Ahad"));
    while(choix <= 0 && choix >= 6)
    {
        std::cout << "Choisissez un Mechant" << std::endl << std::endl ;
        std::cout << "1.	Vieri de Pazzi " << std::endl;
        std::cout << "2.	Uberto Alberti  " << std::endl;
        std::cout << "3.	Haytham   " << std::endl;
        std::cout << "4.	Jacob Frye   " << std::endl;
        std::cout << "5.	Fulke  " << std::endl;
        std::cin >> choix;
    }
        switch(choix){
        case 1:
            LePerso = Personnage(100,100,"Vieri de Pazzi",false,AttributionAttaque("Vieri de Pazzi"),AttributionDefense("Vieri de Pazzi"));
            break;
        case 2:
            LePerso = Personnage(100,100,"Uberto Alberti",false,AttributionAttaque("Uberto Alberti"),AttributionDefense("Uberto Alberti"));
            break;
        case 3:
            LePerso = Personnage(100,100,"Haytham",false,AttributionAttaque("Haytham"),AttributionDefense("Haytham"));
            break;
        case 4:
            LePerso = Personnage(100,100,"Jacob Frye",false,AttributionAttaque("Jacob Frye"),AttributionDefense("Jacob Frye"));
            break;
        default:
            LePerso = Personnage(100,100,"Fulke",false,AttributionAttaque("Fulke"),AttributionDefense("Fulke"));
            break;
    }
    return LePerso;
}