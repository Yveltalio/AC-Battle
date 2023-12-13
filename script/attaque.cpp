#include "attaque.hpp"

Attaque::Attaque(std::string nom_competence, std::string description, int degats, int cout_stamina,int cooldownMAX)
{
    m_nom_competence = nom_competence;
    m_description = description;
    m_degats = degats;
    m_cout_stamina = cout_stamina;
    m_cooldownMax = cooldownMAX;
}
Attaque::~Attaque() {}
int Attaque::get_attaque()
{
    return m_degats;
}