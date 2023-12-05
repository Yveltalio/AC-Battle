#ifndef Defense.HPP
#define Defense.HPP
#include<iostream>
#include "../competence.hpp"

class Deffense : public Competence
{
    private :
        int m_reducDefense;
        int m_soin;
        
    public :
        Deffense::Deffense(std::string nom_competence,std::string description ,int reducDefense,int soin, int cout_stamina);
        Deffense::~Deffense();
        int Deffense::get_reducDefense();
        int Deffense::get_soin();

};

#endif