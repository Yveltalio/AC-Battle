#include "attaque.hpp"

Attaque::Attaque(std::string nom_attaque,int attaque, int cout_stamina)
{
    m_nom_attaque = nom_attaque;
    m_attaque = attaque;
    m_cout_stamina = cout_stamina;
}
Attaque::~Attaque(){}
std::string Attaque::get_nom_attaque()
{
    return m_nom_attaque;
}
int Attaque::get_attaque()
{
    return m_attaque;
}
int Attaque::get_cout_stamina()
{
    return m_cout_stamina;
}