#include "perso.hpp"

Personnage ChoisirPerso()
{
    int choix = 0;
    while(choix !=1 || choix != 2)
    {
        std::cout << "Choisir un coté" << std::endl << std::endl << "1 - Gentil             2 - Malveillant";
        std::cin >> choix;
    }
}

Personnage ChoisirGentil()
{
    int choix = 0;
    while(choix <= 0 && choix >= 6)
    {
        std::cout << "Choisis un Gentil" << std::endl << std::endl ;
        std::cout << "1.	Altaïr Ibn La-Ahad " << std::endl;
        std::cout << "2.	Ezio Auditore " << std::endl;
        std::cout << "3.	Edward Kenway  " << std::endl;
        std::cout << "4.	Bayek de Siwa  " << std::endl;
        std::cout << "5.	Eivor Ami-des-loups  " << std::endl;
        std::cin >> choix;
    }
    if (choix == 1)
    {
        
    }
}


void ChoisirMechant()
{
    int choix = 0;
    while(choix <= 0 && choix >= 6)
    {
        std::cout << "Choisis un Gentil" << std::endl << std::endl ;
        std::cout << "1.	Vieri de Pazzi " << std::endl;
        std::cout << "2.	Uberto Alberti  " << std::endl;
        std::cout << "3.	Haytham   " << std::endl;
        std::cout << "4.	Jacob Frye   " << std::endl;
        std::cout << "5.	Fulke  " << std::endl;
        std::cin >> choix;
    }
}