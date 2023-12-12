#include "defense.hpp"
#include <vector>
using namespace std;

vector<Deffense> AttributionDefense(std::string nom_perso)
{
    vector<Deffense> att;
    if (nom_perso == "Altair Ibn La-Ahad")
    {
        //créer une Deffense avec la description , le montant de degats etc...
        string description = "Pare l'attaque pour reduire les degats";
        Deffense Deffense1 = Deffense("Parade", description, 3, 0, 0);

        description = "Esquive l'attaque pour recevoir aucun degat";
        Deffense Deffense2 = Deffense("Esquive", description, 100, 0, 0);

        description = "Prend une potion de soin";
        Deffense Deffense3 = Deffense("Soin", description, 0, 30, 20);

        //l'ajouter dans le vector
        att.push_back(Deffense1);
        att.push_back(Deffense2);
        att.push_back(Deffense3);

        //return le vector
        return att;
    }


    if (nom_perso == "Ezio Auditore")
    {
        string description = "Pare l'attaque pour reduire les degats";
        Deffense Deffense1 = Deffense("Parade", description, 3, 0, 0);

        description = "Esquive l'attaque pour recevoir aucun degat";
        Deffense Deffense2 = Deffense("Esquive", description, 100, 0, 0);

        description = "Prend une potion de soin";
        Deffense Deffense3 = Deffense("Soin", description, 0, 30, 20);

        att.push_back(Deffense1);
        att.push_back(Deffense2);
        att.push_back(Deffense3);

        return att;
    }


    if (nom_perso == "Edward Kenway")
    {
        string description = "Pare l'attaque pour reduire les degats";
        Deffense Deffense1 = Deffense("Parade", description, 6, 0, 0);

        description = "Esquive l'attaque pour recevoir aucun degat";
        Deffense Deffense2 = Deffense("Esquive", description, 100, 0, 0);

        description = "Prend une potion de soin";
        Deffense Deffense3 = Deffense("Soin", description, 0, 15, 10);

        att.push_back(Deffense1);
        att.push_back(Deffense2);
        att.push_back(Deffense3);

        return att;
    }


    if (nom_perso == "Bayek de Siwa")
    {
        string description = "Pare l'attaque pour reduire les degats";
        Deffense Deffense1 = Deffense("Parade", description, 3, 0, 0);

        description = "Esquive l'attaque pour recevoir aucun degat";
        Deffense Deffense2 = Deffense("Sacrifice de Senu", description, 100, 0, 0);

        description = "Prend une potion de soin";
        Deffense Deffense3 = Deffense("Soin", description, 0, 20, 25);

        att.push_back(Deffense1);
        att.push_back(Deffense2);
        att.push_back(Deffense3);

        return att;
    }


    if (nom_perso == "Eivor Ami-des-loups")
    {
        string description = "Pare l'attaque pour reduire les degats";
        Deffense Deffense1 = Deffense("Parade", description, 6, 0, 0);

        description = "Esquive l'attaque pour recevoir aucun degat";
        Deffense Deffense2 = Deffense("Sacrifice de Synin", description, 100, 0, 0);

        description = "Prend une potion de soin";
        Deffense Deffense3 = Deffense("Soin", description, 0, 10, 40);

        att.push_back(Deffense1);
        att.push_back(Deffense2);
        att.push_back(Deffense3);

        return att;
    }


    ///////////////////////////////////////////


    if (nom_perso == "Vieri de Pazzi")
    {
        string description = "Pare l'attaque pour reduire les degats";
        Deffense Deffense1 = Deffense("Parade", description, 10, 0, 0);

        description = "Esquive l'attaque pour recevoir aucun degat";
        Deffense Deffense2 = Deffense("Esquive", description, 100, 0, 0);

        description = "Prend une potion de soin";
        Deffense Deffense3 = Deffense("Soin", description, 0, 20, 20);

        att.push_back(Deffense1);
        att.push_back(Deffense2);
        att.push_back(Deffense3);

        return att;
    }


    if (nom_perso == "Uberto Alberti")
    {
        string description = "Pare l'attaque pour reduire les degats";
        Deffense Deffense1 = Deffense("Parade", description, 10, 0, 0);

        description = "Esquive l'attaque pour recevoir aucun degat";
        Deffense Deffense2 = Deffense("Esquive", description, 100, 0, 0);

        description = "Prend une potion de soin";
        Deffense Deffense3 = Deffense("Soin", description, 0, 20, 20);

        att.push_back(Deffense1);
        att.push_back(Deffense2);
        att.push_back(Deffense3);

        return att;
    }


    if (nom_perso == "Haytham")
    {
        string description = "Pare l'attaque pour reduire les degats";
        Deffense Deffense1 = Deffense("Parade", description, 10, 0, 0);

        description = "Esquive l'attaque pour recevoir aucun degat";
        Deffense Deffense2 = Deffense("Esquive", description, 100, 0, 0);

        description = "Prend une potion de soin";
        Deffense Deffense3 = Deffense("Soin", description, 0, 20, 20);

        att.push_back(Deffense1);
        att.push_back(Deffense2);
        att.push_back(Deffense3);

        return att;
    }


    if (nom_perso == "Jacob Frye")
    {
        string description = "Pare l'attaque pour reduire les degats";
        Deffense Deffense1 = Deffense("Parade", description, 10, 0, 0);

        description = "Esquive l'attaque pour recevoir aucun degat";
        Deffense Deffense2 = Deffense("Esquive", description, 100, 0, 0);

        description = "Prend une potion de soin";
        Deffense Deffense3 = Deffense("Soin", description, 0, 20, 20);

        att.push_back(Deffense1);
        att.push_back(Deffense2);
        att.push_back(Deffense3);

        return att;
    }


    if (nom_perso == "Fulke")
    {
        string description = "Pare l'attaque pour reduire les degats";
        Deffense Deffense1 = Deffense("Bouclier", description, 10, 0, 0);

        description = "Esquive l'attaque pour recevoir aucun degat";
        Deffense Deffense2 = Deffense("Esquive", description, 100, 0, 0);

        description = "Prend une potion de soin";
        Deffense Deffense3 = Deffense("Soin", description, 0, 20, 20);

        att.push_back(Deffense1);
        att.push_back(Deffense2);
        att.push_back(Deffense3);

        return att;
    }

}