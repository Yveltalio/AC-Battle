#ifndef ATTAQUE_HPP
#define ATTAQUE_HPP
#include <iostream>
#include <vector>
#include "competence.hpp"


class Attaque : public Competence
{
private:
    int m_degats;

public:
    Attaque(std::string nom_competence, std::string description, int degats, int cout_stamina);
    ~Attaque();
    int get_attaque();

};
std::vector<Attaque> AttributionAttaque(std::string nom_perso);

#endif