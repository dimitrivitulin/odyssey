#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "Personnage.h"
#include "Spaceship.h"
#include "Planet.h"
#include "Mission.h"
#include "fonctions.h"
#include "Controleur.h"

using namespace std;




// ------------ Dimitri VITULIN et Stephane SADDOUR ----------------




int main()
{
//---------------- CREATION DES ELEMENTS DU JEU ----------------
//    // Creation d'un vaisseau spatial
//    Spaceship* odyssey = new Spaceship("Odyssey");
//
//    // Creation d'une planete
//    Planet earth("Terre", "Une belle planète bleue, riche en biodiversité.");
//
//    // Creation de membres d'equipage
//    Personnage* alex = new Personnage("Alex Starborn", 100, 25);
//    Personnage* anderson = new Personnage("Capitaine Anderson", 90, 20);
//    Personnage* liara = new Personnage("Docteur Liara", 120, 15);
//    Personnage* scott = new Personnage("Ingenieur Scott", 80, 15);
//
//    // Ajout des membres d'equipage au vaisseau
//    odyssey->set_ajouterEquipage(*alex);
//    odyssey->set_ajouterEquipage(*anderson);
//    odyssey->set_ajouterEquipage(*liara);
//    odyssey->set_ajouterEquipage(*scott);
//
//    // Ajout des habitants a la planete
//    earth.set_habitants(*liara);

    // initialisation d'objets -> on recupere les donnees des .ini
    Controleur controleur;

    std::cout << controleur.get_personnages()[0]->get_nom()<<std::endl;
    std::cout << controleur.get_personnages()[0]->get_sante()<<std::endl;
    controleur.get_personnages()[0]->set_sante(45);
    std::cout << controleur.get_personnages()[0]->get_sante()<<std::endl;
    std::cout << controleur.get_spaceships()[0]->get_equipage()[0]->get_nom()<<std::endl;
    std::cout << controleur.get_spaceships()[0]->get_equipage()[0]->get_sante()<<std::endl;


//---------------- BOUCLE DE JEU ----------------

//    bool isRunning = true;
//    while(isRunning)
//    {
//        //obtenir l'entree du joueur
//        displayMainMenu();
//        char choix='0';
//        cout<<" > ";
//        cin>>choix;
//
//        //Execute le choix du joueur
//        switch(choix)
//        {
//        case '1':
//            displayMissions();
//            break;
//
//        case '2':
//            // Afficher les infos du vaisseau
//            odyssey->afficherInfosSpaceship();
//
//            // Afficher l'equipage (et leur role) du vaisseau
////            odyssey->afficherInfosEquipage();
//            displayPersonnages();
//            break;
//
//        case '3':
//            displayWarp();
//            break;
//
//        case '0':
//            cout << "See you Space Cowboy" << endl;
//            isRunning = false;
//            break;
//        default:
//            cout << "Choix de  menu non valide" << endl << endl;
//            break;
//        }
//    }


    return 0;
}


