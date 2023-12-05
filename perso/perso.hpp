#ifndef PERSO.HPP
#define PERSO.HPP
#include<iostream>
#include <sstream>
#include <Windows.h>

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
    public :
        Personnage::Personnage(int HP,int stamina,std::string classe,bool gentil);
        Personnage::~Personnage();
        int Personnage::get_HP();
        int Personnage::get_stamina();
        std::string Personnage::get_classe();
        int Personnage::get_gentil();
        void Personnage::set_HP(int m_HP);
        void Personnage::set_stamina(int m_stamina);

};

#endif