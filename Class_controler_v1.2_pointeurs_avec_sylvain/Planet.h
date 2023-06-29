#ifndef PLANET_H
#define PLANET_H
#include <iostream>
#include <string>
#include <vector>
#include "Personnage.h"

// Déclaration anticipée de la classe "Personnage"
class Personnage;

class Planet
{
    public:
        Planet(std::string nom, std::string description);
        std::string get_nom() const;
        std::string get_description() const;
        std::vector<Personnage>& get_habitants();

        void set_nom(std::string nom);
        void set_description(std::string description);
        void set_habitants(const Personnage &habitants);

        virtual ~Planet();

    protected:

    private:
        std::string nom;
        std::string description;
        std::vector<Personnage> habitants;

};



#endif
