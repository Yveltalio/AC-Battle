#ifndef Defense_HPP
#define Defense_HPP
#include<iostream>
#include <vector>
#include "competence.hpp"

class Deffense : public Competence
{
private:
    int m_reducDefense;
    int m_soin;

public:
    Deffense(std::string nom_competence, std::string description, int reducDefense, int soin, int cout_stamina,int cooldownMAX);
    ~Deffense();
    int get_reducDefense();
    int get_soin();

};
std::vector<Deffense> AttributionDefense(std::string nom_perso);

#endif