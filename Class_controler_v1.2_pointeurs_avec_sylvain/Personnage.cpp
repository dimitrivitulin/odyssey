#include "Personnage.h"


// Constructeur et Destructeur
Personnage::Personnage(std::string const nom, int const sante, int const puissance_dattaque) //ctor par parametres
{
    this->nom = nom; //nom Personnage a definir
    this->sante = sante; //sante a definir
    this->puissance_dattaque = puissance_dattaque; //puissance a definir

    //DEBUG
//    std::cout << "constructeur Personnage : " << std::endl;
}

Personnage::~Personnage() //dtor
{
    //DEBUG
//    std::cout << "destructeur Personnage : " << std::endl;
}



// Accesseurs et Mutateurs
std::string Personnage::get_nom() const
{
    return nom;
}

int Personnage::get_sante() const
{
    return sante;
}

int Personnage::get_puissance_dattaque() const
{
    return puissance_dattaque;
}

std::string  Personnage::get_role() const
{
  return role;
}

std::string  Personnage::get_spaceship() const
{
  return spaceship;
}


std::string  Personnage::get_planet() const
{
  return planet;
}



void Personnage::set_nom(std::string nom)
{
    this->nom = nom;
}


void Personnage::set_sante(int nouvelle_sante)
{
    this->sante = nouvelle_sante;
}

void Personnage::set_puissance_dattaque(int puissance_dattaque)
{
    this->puissance_dattaque = puissance_dattaque;
}

void Personnage::set_role(std::string role)
{
    this->role = role;
}

void Personnage::set_spaceship(std::string spaceship)
{
    this->spaceship = spaceship;
}

void Personnage::set_planet(std::string planet)
{
    this->planet = planet;
}



// Methodes
void Personnage::afficherCaracteristiquesPersonnage()
{
    std::cout << "\n--- Caracteristiques du Personnage --- " << std::endl;
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Sante : " << sante << std::endl;
    std::cout << "Puissance d'attaque : " << puissance_dattaque << std::endl;
    std::cout << std::endl;
}


void Personnage::attaque(Personnage & Personnage_cible)
{
    int nouvelle_sante = Personnage_cible.get_sante() - this->puissance_dattaque;
    Personnage_cible.set_sante(nouvelle_sante);
}
