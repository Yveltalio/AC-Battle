#ifndef COMPETENCE.HPP
#define COMPETENCE.HPP
#include <iostream>
#include "./attaque/attaque.hpp">
#include "./defense/defense.hpp">
class Competence
{
    public :
        std::string m_nom_competence;
        std::string m_description;
        int m_cout_stamina;
        Competence::Competence();
        Competence::Competence(std::string nom_competence , std::string description , int cout_stamina);
        ~Competence();
        std::string Competence::get_nom_competence();
        std::string Competence::get_description();
        int Competence::get_cout_stamina();
};


#endif