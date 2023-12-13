#ifndef COMPETENCE_HPP
#define COMPETENCE_HPP
#include <iostream>


class Competence
{
public:
    std::string m_nom_competence;
    std::string m_description;
    int m_cout_stamina;
    int m_cooldownMax;
    int m_cooldown = 0;
    Competence();
    Competence(std::string nom_competence, std::string description, int cout_stamina,int cooldownMAX);
    ~Competence();
    std::string get_nom_competence();
    std::string get_description();
    int get_cout_stamina();
    int get_cooldownMax();
    int get_cooldown();
    void set_cooldown(int m_cooldown);
};


#endif