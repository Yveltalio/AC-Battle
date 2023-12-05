#ifndef PERSO.HPP
#define PERSO.HPP
#include<iostream>


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