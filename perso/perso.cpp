#include "perso.hpp"

Personnage::Personnage(int HP,int stamina,std::string classe,bool gentil,std::vector<Attaque> Attaques,std::vector<Deffense> Deffenses)//,std::vector<Attaque> attaques)
{
    m_HP = HP;
    m_stamina = stamina;
    m_classe = classe;
    m_gentil = gentil;
    m_Attaques = Attaques;
    m_Deffenses = Deffenses;
    //m_attaques = attaques
}
Personnage::~Personnage(){}

int Personnage::get_HP()
{
    return m_HP;
}
int Personnage::get_stamina()
{
    return m_stamina;
}
std::string Personnage::get_classe()
{
    return m_classe;
}
int Personnage::get_gentil()
{
    return m_gentil;
}
void Personnage::set_HP(int m_HP)
{
    this->m_HP = m_HP;
}
void Personnage::set_stamina(int m_stamina)
{
    this->m_stamina = m_stamina;
}