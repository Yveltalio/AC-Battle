#ifndef COMPETENCE_HPP
#define COMPETENCE_HPP
#include <iostream>


class Competence
{
public:
    std::string m_nom_competence;
    std::string m_description;
    int m_cout_stamina;
    Competence();
    Competence(std::string nom_competence, std::string description, int cout_stamina);
    ~Competence();
    std::string get_nom_competence();
    std::string get_description();
    int get_cout_stamina();
};


#endif