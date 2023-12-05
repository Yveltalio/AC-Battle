#ifndef ATTAQUE.HPP
#define ATTAQUE.HPP
#include<iostream>


class Attaque
{
    private :
        std::string m_nom_attaque;
        int m_attaque;
        int m_cout_stamina;
        
    public :
        Attaque::Attaque(std::string nom_attaque,int attaque, int cout_stamina);
        Attaque::~Attaque();
        std::string Attaque::get_nom_attaque();
        int Attaque::get_attaque();
        int Attaque::get_cout_stamina();

};

#endif