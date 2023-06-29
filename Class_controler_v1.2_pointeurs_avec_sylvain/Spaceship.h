#ifndef SPACESHIP_H
#define SPACESHIP_H
#include <iostream>
#include <string>
#include <vector>
#include "Personnage.h"
#include "Mission.h"

// Déclaration anticipée de la classe "Personnage"
class Personnage;

class Spaceship
{
    public:
        // Constructeur et Destructeur
        Spaceship(std::string nom);
        virtual ~Spaceship();

        // Accesseurs et Mutateurs
        std::string get_nom() const;
        std::vector<Personnage*> get_equipage();
        static int get_nbMembresEquipage();

        void set_nom(std::string nom);
        void set_ajouterEquipage(Personnage* membre);
        void set_retirerEquipage(Personnage* membre);

//        void set_ajouterMission(const Mission& mission);

        // Methodes
        void afficherInfosSpaceship();
        void afficherInfosEquipage();


    private:
        // Attibuts
        std::string nom;
        std::vector<Personnage*> equipage;
        static int nbMembresEquipage;

//        std::vector<Mission> journal_missions;

};


#endif
