#include "Controleur.h"

// Constructeur et Destructeur
Controleur::Controleur() //ctor par parametres
{
    lire_journal_missions(); //On recupere les missions du fichier "missions.ini" -> nom, description, estTerminee
    lire_galaxie(); //On recupere les planetes du fichier "galaxie.ini" -> nom, description
    lire_spaceships(); //On recupere les vaisseaux du fichier "spaceships.ini" -> nom
    lire_personnages(); //On recupere les personnages du fichier "personnages.ini" -> nom, sante, ...

    //DEBUG
//    std::cout << "constructeur Personnage : " << std::endl;
}

Controleur::~Controleur() //dtor
{
    //DEBUG
//    std::cout << "destructeur Personnage : " << std::endl;
}





std::vector<Mission*> Controleur::get_journal_missions()
{
    return journal_missions;
}

std::vector<Planet*> Controleur::get_galaxie()
{
    return galaxie;
}

std::vector<Spaceship*> Controleur::get_spaceships()
{
    return spaceships;
}

std::vector<Personnage*> Controleur::get_personnages()
{
    return personnages;
}




// Methodes - Lecture des .ini


std::vector<std::string> Controleur::decouper_ligne(std::string ligne)
{
    //declaration variables
    std::string sub_ligne;
    std::vector<std::string> ligne_decoupee;


    // Traiter chaque ligne pour récupérer les données
    std::size_t startPos = 0; // stocke la position de départ de chaque sub_line
    std::size_t separatorPos = ligne.find(":");

    while (separatorPos != std::string::npos) //rechercher tous les séparateurs
    {
        sub_ligne = ligne.substr(startPos, separatorPos - startPos); //recupere l'extrait de ligne jusqu'au separateur
        ligne_decoupee.push_back(sub_ligne);
        startPos = separatorPos + 1; //Decale la position de depart pour recuperer le sub_line suivant
        separatorPos = ligne.find(":", startPos);
    }
    // Récupérer la dernière valeur après le dernier séparateur
    sub_ligne = ligne.substr(startPos);
    ligne_decoupee.push_back(sub_ligne);

    return ligne_decoupee;

}




void Controleur::lire_journal_missions()
{
    // Initialisation variables

    std::string ligne;
    std::vector<std::string> ligne_decoupee;
    bool temp_bool;
    Mission *mission = new Mission("","");

     //Ouvrir le fichier
    std::ifstream file("missions.ini");

    //Verifie si le fichier est ouvert avec succes
    if (file.is_open())
    {
        // Le fichier est ouvert, on recupere les donnees
        while(getline(file, ligne))
        {
            ligne_decoupee = decouper_ligne(ligne);
            mission->set_nom(ligne_decoupee[0]);
            mission->set_description(ligne_decoupee[1]);
            temp_bool = (std::stoi(ligne_decoupee[2]) != 0) ? true : false;
            mission->set_estTerminee(temp_bool);
            this->journal_missions.push_back(mission);

        }
        file.close();
    }

}



void Controleur::lire_galaxie()
{
    std::string ligne;
    std::vector<std::string> ligne_decoupee;
    Planet *planet= new Planet("","");

    //Ouvrir le fichier
    std::ifstream file("galaxie.ini");

    //Verifie si le fichier est ouvert avec succes
    if (file.is_open())
    {
        // Le fichier est ouvert, on recupere les donnees
        while(getline(file, ligne))
        {
            ligne_decoupee = decouper_ligne(ligne);
            planet->set_nom(ligne_decoupee[0]);
            planet->set_description(ligne_decoupee[1]);
            this->galaxie.push_back(planet);
        }
        file.close();
    }

}



void Controleur::lire_spaceships()
{
    std::string ligne;
    std::vector<std::string> ligne_decoupee;
    Spaceship *spaceship=new Spaceship("");

    //Ouvrir le fichier
    std::ifstream file("spaceships.ini");

    //Verifie si le fichier est ouvert avec succes
    if (file.is_open())
    {
        // Le fichier est ouvert, on recupere les donnees
        while(getline(file, ligne))
        {
            ligne_decoupee = decouper_ligne(ligne);
            spaceship->set_nom(ligne_decoupee[0]);
            this->spaceships.push_back(spaceship);
        }
        file.close();
    }

}



void Controleur::lire_personnages()
{
    // Initialisation variables

    std::string ligne;
    std::vector<std::string> ligne_decoupee;
    Personnage *personnage= new Personnage("",0,0);

     //Ouvrir le fichier
    std::ifstream file("personnages.ini");

    //Verifie si le fichier est ouvert avec succes
    if (file.is_open())
    {
        // Le fichier est ouvert, on recupere les donnees
        while(getline(file, ligne))
        {
            ligne_decoupee = decouper_ligne(ligne);
            personnage->set_nom(ligne_decoupee[0]);
            personnage->set_sante(std::stoi(ligne_decoupee[1]));
            personnage->set_puissance_dattaque(std::stoi(ligne_decoupee[2]));
            personnage->set_role(ligne_decoupee[3]);
            personnage->set_spaceship(ligne_decoupee[4]);
            personnage->set_planet(ligne_decoupee[5]);
            this->personnages.push_back(personnage);
            for (auto i:spaceships)
            {
                if(i->get_nom()==ligne_decoupee[4])
                {
                    i->set_ajouterEquipage(personnage);
                    break;
                }

            }
        }
        file.close();
    }

}
