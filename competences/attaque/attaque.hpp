#ifndef ATTAQUE.HPP
#define ATTAQUE.HPP
#include<iostream>
#include "../competence.hpp"


class Attaque : public Competence
{
    private :
        int m_degats;

    public :
        Attaque::Attaque(std::string nom_competence,std::string description,int degats, int cout_stamina);
        Attaque::~Attaque();
        int Attaque::get_attaque();

};

#endif