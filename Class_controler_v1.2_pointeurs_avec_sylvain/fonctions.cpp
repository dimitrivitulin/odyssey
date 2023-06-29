#include "fonctions.h"

void displayMainMenu()
{
    std::cout << "\n----------------" << std::endl;
    std::cout << "Menu Principal :" << std::endl;
    std::cout << "\t1- Voir les missions" << std::endl;
    std::cout << "\t2- Parler aux personnages (temp: infos spaceship et equipage)" << std::endl;
    std::cout << "\t3- Voyager vers une autre planete" << std::endl;
    std::cout << "\t0- Quitter le jeu" << std::endl;
    std::cout << "----------------\n" << std::endl;
}

void displayWarp()
{
    // initialisation d'objets -> on recupere les donnees des .ini
    Controleur controleur;

    // Afficher les planetes
    std::cout << "\nPlanetes :" << std::endl;
    std::cout << "  1. " << controleur.get_galaxie().at(0)->get_nom() << std::endl;
    std::cout << "  2. " << controleur.get_galaxie().at(1)->get_nom() << std::endl;

    // Afficher les planetes Description
    std::cout << "\nDescription Planetes :" << std::endl;
    std::cout << "  1. " << controleur.get_galaxie().at(0)->get_description() << std::endl;
    std::cout << "  2. " << controleur.get_galaxie().at(1)->get_description() << std::endl;

    // Voyage entre planetes
    std::cout << std::endl;
    std::cout << "L'Odyssey quitte le spatioport de la planete "<< controleur.get_galaxie().at(0)->get_nom() << std::endl;
    std::cout << "L'Odyssey voyage a la vitesse Distorsion 9" << std::endl;
    std::cout << "L'Odyssey est arrivé a "<< controleur.get_galaxie().at(1)->get_nom() << std::endl;
    std::cout << std::endl;
}


void displayMissions()
{
    // initialisation d'objets -> on recupere les donnees des .ini
    Controleur controleur;


    // Afficher les missions disponibles
    std::cout << "\nMissions disponibles :" << std::endl;
    std::cout << "  1. " << controleur.get_journal_missions().at(0)->get_nom() << std::endl;
    std::cout << "  2. " << controleur.get_journal_missions().at(1)->get_nom() << std::endl;

    // Afficher les missions Description
    std::cout << "\nDescription Missions :" << std::endl;
    std::cout << "  1. " << controleur.get_journal_missions().at(0)->get_description() << std::endl;
    std::cout << "  2. " << controleur.get_journal_missions().at(1)->get_description() << std::endl;

    // Simuler l'achèvement d'une mission
//    controleur.get_journal_missions().at(0).set_estTerminee(true);

    // Afficher les missions achevées
    std::cout << "\nMissions achevées :" << std::endl;
    if (controleur.get_journal_missions().at(0)->get_estTerminee()) {
        std::cout << "  - " << controleur.get_journal_missions().at(0)->get_nom() << std::endl;
    }
    if (controleur.get_journal_missions().at(1)->get_estTerminee()) {
        std::cout << "  - " << controleur.get_journal_missions().at(1)->get_nom() << std::endl;
    }

}


void displayPersonnages()
{
    // initialisation d'objets -> on recupere les donnees des .ini
    Controleur controleur;


    // Afficher les personnages
    std::cout << "\nPersonnages :" << std::endl;


    int nbPerso = 4;
    for(int i=0;i<nbPerso;i++)
    {
        std::cout << "  " << i+1 << ". " << controleur.get_personnages().at(i)->get_nom() << std::endl;
        std::cout << "\t- Sante : " << controleur.get_personnages().at(i)->get_sante() << std::endl;
        std::cout << "\t- Puissance d'attaque : " << controleur.get_personnages().at(i)->get_puissance_dattaque() << std::endl;
        std::cout << "\t- Role : " << controleur.get_personnages().at(i)->get_role() << std::endl;
        std::cout << "\t- Spaceship : " << controleur.get_personnages().at(i)->get_spaceship() << std::endl;
        std::cout << "\t- Planete : " << controleur.get_personnages().at(i)->get_planet() << std::endl;

        std::cout << std::endl;
    }


    std::cout << controleur.get_personnages().at(0)->get_nom() << " a ete blesse en mission."<<std::endl;
    controleur.get_personnages().at(0)->set_sante(45);
    std::cout << "Sante restante : " << controleur.get_personnages().at(0)->get_sante() <<std::endl;

//    std::cout << controleur.get_spaceships()[0]->get_equipage[0].get_sante();

}

