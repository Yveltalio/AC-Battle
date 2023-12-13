//reduction d'attaque
//annule d'attaque
//sacrifice d'oiseau
//soin
#include "defense.hpp"

Deffense::Deffense(std::string nom_competence,std::string description ,int reducDefense,int soin, int cout_stamina,int cooldownMAX)
{
    m_nom_competence = nom_competence;
    m_description = description;
    m_reducDefense = reducDefense;
    m_soin = soin;
    m_cout_stamina = cout_stamina;
    m_cooldownMax = cooldownMAX;
}

Deffense::~Deffense(){}
int Deffense::get_reducDefense()
{
    return m_reducDefense;
}
int Deffense::get_soin()
{
    return m_soin;
}