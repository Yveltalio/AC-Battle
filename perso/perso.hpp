#ifndef PERSO.HPP
#define PERSO.HPP
#include<iostream>
#include <sstream>
#include <Windows.h>
#include<vector>
#include "../competences/competence.hpp"

using namespace std;

// mettre cette classe dans le même .hpp que votre classe parent
class MBuf : public std::stringbuf {
public:
	int sync() {
		fputs(str().c_str(), stdout);
		str("");
		return 0;
	}
};


class Personnage 
{
    private :
        int m_HP;
        int m_stamina;
        std::string m_classe;
        bool m_gentil;
        std::vector<Attaque> m_Attaques;
        std::vector<Deffense> m_Deffenses;
        
        
    public :
        Personnage(){};
        Personnage(int HP,int stamina,std::string classe,bool gentil,std::vector<Attaque> Attaques,std::vector<Deffense> Defenses);
        ~Personnage();
        int get_HP();
        int get_stamina();
        std::string get_classe();
        bool get_gentil();
        void set_HP(int m_HP);
        void set_stamina(int m_stamina);
        vector<Attaque> get_Attaques();
        vector<Deffense> get_defense();

};



struct Les_Personnages {
    Personnage Perso1;
    Personnage Perso2;
    Les_Personnages(){};
};

Personnage ChoisirPerso(int camp);

#endif

