#include "Spaceship.h"
#include "Personnage.h"
#include <vector>

int Spaceship::nbMembresEquipage = 0;

// Constructeur et Destructeur
Spaceship::Spaceship(std::string const nom) //ctor par parametres
{
    this->nom = nom; //nom Personnage a definir

    //DEBUG
//    std::cout << "constructeur Spaceship : " << std::endl;
}

Spaceship::~Spaceship() //dtor
{
    //DEBUG
//    std::cout << "destructeur Spaceship : " << std::endl;
}



// Accesseurs et Mutateurs
std::string Spaceship::get_nom() const
{
    return nom;
}

std::vector<Personnage*> Spaceship::get_equipage()
{
    return equipage;
}



void Spaceship::set_nom(std::string nom)
{
    this->nom = nom;
}


void Spaceship::set_ajouterEquipage(Personnage* membre)
{
    this->equipage.push_back(membre);
    this->nbMembresEquipage++;
}


void Spaceship::set_retirerEquipage(Personnage* membre)
{
    //trouver case membre
    int i = 0;
    for (const auto& temp : get_equipage())
    {
        if ((membre->get_nom().compare(temp->get_nom())) == 0)
            {
                break;
            }
        i++;
    }

    //supprime le membre i
    equipage.erase(equipage.begin()+i);
    this->nbMembresEquipage--;
}

int Spaceship::get_nbMembresEquipage()
{
    return nbMembresEquipage;
}




// Methodes


void Spaceship::afficherInfosSpaceship()
{
    std::cout << "\n--- Infos Spaceship --- " << std::endl;
    std::cout << "Nom : " << this->nom << std::endl;
    std::cout << "Il y a " << this->nbMembresEquipage << " membres d'equipage." << std::endl;
    std::cout << std::endl;
}

void Spaceship::afficherInfosEquipage()
{
    std::cout << "\n--- Infos Membres d'Equipage --- " << std::endl;
    for (const auto& membre : this->equipage)
    {
        std::cout << std::endl << membre->get_nom() << std::endl;
        std::cout << "\t-sante : " << membre->get_sante() << std::endl;
        std::cout << "\t-puissance d'attaque : " << membre->get_puissance_dattaque() << std::endl;
    }
    std::cout << std::endl;
}
