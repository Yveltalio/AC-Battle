#include "competence.hpp"  




Competence::Competence(std::string nom_competence, std::string description, int cout_stamina,int cooldownMAX)
{
    m_nom_competence = nom_competence;
    m_description = description;
    m_cout_stamina = cout_stamina;
    m_cooldownMax = cooldownMAX;
}
Competence::Competence() {}
Competence::~Competence() {}
std::string Competence::get_nom_competence()
{
    return m_nom_competence;
}
std::string Competence::get_description()
{
    return m_description;
}
int Competence::get_cout_stamina()
{
    return m_cout_stamina;
}

int Competence::get_cooldownMax()
{
    return m_cooldownMax;
}
int Competence::get_cooldown()
{
    return m_cooldown;
}
void Competence::set_cooldown(int m_cooldown)
{
    this->m_cooldown = m_cooldown;
}
