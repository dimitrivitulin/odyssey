#ifndef CONTROLEUR_H
#define CONTROLEUR_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "Mission.h"
#include "Planet.h"
#include "Spaceship.h"

class Controleur
{
    public:
        Controleur();
        // Accesseurs et Mutateurs
        std::vector<Mission*> get_journal_missions();
        std::vector<Planet*> get_galaxie();
        std::vector<Spaceship*> get_spaceships();
        std::vector<Personnage*> get_personnages();


        // Methodes
        std::vector<std::string> decouper_ligne(std::string ligne);
        void lire_journal_missions();
        void lire_galaxie();
        void lire_spaceships();
        void lire_personnages();


        virtual ~Controleur();

    protected:

    private:
        std::vector<Mission*> journal_missions;
        std::vector<Planet*> galaxie;
        std::vector<Spaceship*> spaceships;
        std::vector<Personnage*> personnages;

};

#endif
