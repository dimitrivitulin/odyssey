#include"Planet.h"

//Constructeur
Planet::Planet(std::string nom, std::string description)
{
    this->nom = nom;
    this->description = description;
}


//accesseurs et mutateurs
std::string Planet::get_nom() const
{
    return nom;
}
std::string Planet::get_description() const
{
    return description;
}
std::vector<Personnage>& Planet::get_habitants()
{
    return habitants;
}


void Planet::set_nom(std::string nom)
{
    this->nom = nom;
}

void Planet::set_description(std::string description)
{
    this->description = description;
}

void Planet::set_habitants(const Personnage &habitants)
{
    this->habitants.push_back(habitants);
}


Planet::~Planet()
{

}



