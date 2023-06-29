#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <iostream>
#include <string>
#include "Spaceship.h"
#include "Planet.h"


class Personnage
{
    public:
        // Constructeur et Destructeur
        Personnage(std::string nom, int sante, int puissance_dattaque);
        virtual ~Personnage();

        // Accesseurs et Mutateurs
        std::string get_nom() const;
        int get_sante() const;
        int get_puissance_dattaque() const;
        std::string get_role() const;
        std::string get_spaceship() const;
        std::string get_planet() const;

        void set_nom(std::string nom);
        void set_sante(int nouvelle_sante);
        void set_puissance_dattaque(int puissance_dattaque);
        void set_role(std::string role);
        void set_spaceship(std::string spaceship);
        void set_planet(std::string planet);


        // Methodes
        void afficherCaracteristiquesPersonnage();
        void attaque(Personnage &Personnage_cible);


    private:
        // Attibuts
        std::string nom;
        int sante;
        int puissance_dattaque;
        std::string role;
        std::string spaceship;
        std::string planet;

};

#endif
