#include "attaque.hpp"
#include <vector>
using namespace std;

vector<Attaque> AttributionAttaque(std::string nom_perso)
{
    //créer un vector d'attaque
    vector<Attaque> att;
    if (nom_perso == "Altair Ibn La-Ahad")
    {
        //créer une attaque avec la description , le montant de degats etc...
        string description = "Attaque l'ennemi avec une lame cachee dans la manche du personnage";
        Attaque Attaque1 = Attaque("Lame secrete", description, 30, 40);

        description = "Attaque l'ennemi avec la celebre epee d'Altair";
        Attaque Attaque2 = Attaque("Epee d'Altair", description, 15, 10);

        description = "Attaque l'ennemi avec la celebre dague d'Altair";
        Attaque Attaque3 = Attaque("Dague d'Altair", description, 10, 5);

        //l'ajouter dans le vector
        att.push_back(Attaque1);
        att.push_back(Attaque2);
        att.push_back(Attaque3);

        //return le vector
        return att;
    }


    if (nom_perso == "Ezio Auditore")
    {
        string description = "Attaque l'ennemi avec une lame cachee dans la manche du personnage";
        Attaque Attaque1 = Attaque("Lame secrete", description, 30, 40);

        description = "Attaque l'ennemi avec la celebre epee d'Ezio";
        Attaque Attaque2 = Attaque("Epee d'Ezio", description, 15, 10);

        description = "Prend ces distances pour attaquer l'ennemi avec son arbalete";
        Attaque Attaque3 = Attaque("Arbalete", description, 20, 25);

        att.push_back(Attaque1);
        att.push_back(Attaque2);
        att.push_back(Attaque3);

        return att;
    }


    if (nom_perso == "Edward Kenway")
    {
        string description = "Attaque l'ennemi avec une lame cachee dans la manche du personnage";
        Attaque Attaque1 = Attaque("Lame secrete", description, 30, 40);

        description = "Edward brandit ces 2 lames et saute sur l'ennemi pour l'attaquer";
        Attaque Attaque2 = Attaque("Double epee", description, 20, 25);

        description = "Grace a sa dexterite, Edward brandit ces pistolets pour infliger de lourds degats a la cible";
        Attaque Attaque3 = Attaque("Quatre pistolets", description, 35, 40);

        att.push_back(Attaque1);
        att.push_back(Attaque2);
        att.push_back(Attaque3);

        return att;
    }


    if (nom_perso == "Bayek de Siwa")
    {
        string description = "Attaque l'ennemi avec une lame cachee dans la manche du personnage";
        Attaque Attaque1 = Attaque("Lame secrete", description, 30, 40);

        description = "Bayek fait appel a Senu pour infliger des degats a la cible";
        Attaque Attaque2 = Attaque("Oiseau Senu", description, 10, 0);

        description = "Prend ces distances pour attaquer l'ennemi avec son arc";
        Attaque Attaque3 = Attaque("Arc", description, 25, 15);

        att.push_back(Attaque1);
        att.push_back(Attaque2);
        att.push_back(Attaque3);

        return att;
    }


    if (nom_perso == "Eivor Ami-des-loups")
    {
        string description = "Eivor fait appel a Synin pour infliger des degats a la cible";
        Attaque Attaque1 = Attaque("Corbeau Synin", description, 10, 0);

        description = "Attaque l'ennemi avec des haches nordiques";
        Attaque Attaque2 = Attaque("Lance de haches", description, 30, 45);

        description = "Prend ces distances pour preparer une fleche explosive et la decoche sur la cible";
        Attaque Attaque3 = Attaque("Fleche explosive", description, 20, 25);

        att.push_back(Attaque1);
        att.push_back(Attaque2);
        att.push_back(Attaque3);

        return att;
    }

    ///////////////////////////////////////////////////////////////////////////////


    if (nom_perso == "Vieri de Pazzi")
    {
        string description = "Vieri attaque l'ennemi rapidement avec sa dague";
        Attaque Attaque1 = Attaque("Dague", description, 15, 10);

        description = "Vieri brandit son epee et attaque l'ennemi";
        Attaque Attaque2 = Attaque("Epee", description, 20, 25);

        description = "Confiant de sa force, Vieri attaque son adversaire a main nue";
        Attaque Attaque3 = Attaque("Coup de poing", description, 10, 10);

        att.push_back(Attaque1);
        att.push_back(Attaque2);
        att.push_back(Attaque3);

        return att;
    }


    if (nom_perso == "Uberto Alberti")
    {
        string description = "Uberto utilise sa force pour maitriser son marteau et inflige de lourds degats";
        Attaque Attaque1 = Attaque("Marteau", description, 35, 45);

        description = "Manie une lance pour infliger des degats tout en gardant une distance avec son adversaire";
        Attaque Attaque2 = Attaque("Lance", description, 25, 25);

        description = "Confiant de sa force, Uberto attaque son adversaire a main nue";
        Attaque Attaque3 = Attaque("Coup de poing", description, 10, 10);

        att.push_back(Attaque1);
        att.push_back(Attaque2);
        att.push_back(Attaque3);

        return att;
    }


    if (nom_perso == "Haytham")
    {
        string description = "Attaque l'ennemi avec une lame cachee dans la manche du personnage";
        Attaque Attaque1 = Attaque("Lame secrete", description, 30, 40);

        description = "Haytham brandit sa celebre epee et attaque la cible";
        Attaque Attaque2 = Attaque("Epee d'Haytham", description, 20, 25);

        description = "Haytham prend ces distances pour tirer sur la cible";
        Attaque Attaque3 = Attaque("Pistolet a silex", description, 30, 30);

        att.push_back(Attaque1);
        att.push_back(Attaque2);
        att.push_back(Attaque3);

        return att;
    }


    if (nom_perso == "Jacob Frye")
    {
        string description = "Attaque l'ennemi avec une lame cachee dans la manche du personnage";
        Attaque Attaque1 = Attaque("Lame secrete", description, 30, 40);

        description = "Attaque l'ennemi avec une canne qui peut servir d'epee";
        Attaque Attaque2 = Attaque("Canne epee de jacob", description, 20, 25);

        description = "Prend ces distances pour attaquer la cible avec des couteaux";
        Attaque Attaque3 = Attaque("Lance de couteau", description, 25, 25);

        att.push_back(Attaque1);
        att.push_back(Attaque2);
        att.push_back(Attaque3);

        return att;
    }


    if (nom_perso == "Fulke")
    {
        string description = "Fulke brandit sa hache et fonce sur la cible";
        Attaque Attaque1 = Attaque("Hache", description, 15, 15);

        description = "Prend ces distances pour attaquer l'ennemi avec son arc";
        Attaque Attaque2 = Attaque("Arc", description, 20, 15);

        description = "Enferme l'ennemi petit a petit dans un coin afin de lui assemer des coups de bouclier";
        Attaque Attaque3 = Attaque("Bouclier", description, 10, 15);

        att.push_back(Attaque1);
        att.push_back(Attaque2);
        att.push_back(Attaque3);

        return att;
    }
}