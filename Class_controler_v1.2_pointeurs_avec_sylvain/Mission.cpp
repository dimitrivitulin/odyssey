#include "Mission.h"

Mission::Mission(std::string nom, std::string description)
{
    this->nom = nom;
    this->description = description;
}

Mission::~Mission()
{
    //dtor
}


//accesseurs et mutateurs
std::string Mission::get_nom() const
{
    return nom;
}
std::string Mission::get_description() const
{
    return description;
}

bool Mission::get_estTerminee()
{
    return estTerminee;
}



void Mission::set_nom(std::string nom)
{
    this->nom = nom;
}

void Mission::set_description(std::string description)
{
    this->description = description;
}

void Mission::set_estTerminee(bool estTerminee)
{
    this->estTerminee = estTerminee;
}


