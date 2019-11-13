// Devoir2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
// librairie
#include <iostream>
#include <thread>
#include "Inventaire.h"

//==========
//nos fichier
//===========
using namespace std;

int main()
{
    int conditionbaton = 0, conditionfleche = 0, conditionepee = 0, conditioncouronne = 0, conditionbracelet = 0;
    int ressourceDisponibleParTour[5];
    const int chaine = 30, bois = 20, fer = 20, gold = 60, cuivre = 40;// constante pour initialiser nos ressource a chaque tour 
    int demandePourLeTour[5];
    Inventaire* inventaire = new Inventaire();
    
	clock_t start, end;
	start = clock(); // start commence a compter le nombre de coups de la clocks

    while (conditionbaton < 20 || conditionfleche < 20 || conditionepee < 20 || conditioncouronne < 20 || conditionbracelet < 20)
    {
    // a chaque fois que la boucle recommence si les condition ne sont pas rempli, la matrice des ressources disponible se refet et signitialise de facon a avoir 30 chaine 20 bois 20 fer 60 or et 40 cuivre
    ressourceDisponibleParTour[0] = chaine;
    ressourceDisponibleParTour[1] = bois;
    ressourceDisponibleParTour[2] = fer;
    ressourceDisponibleParTour[3] = gold;
    ressourceDisponibleParTour[4] = cuivre;
    //==========================================================================================================================================================================================

    //==========================Generation de la matrice de demande pour le tour================================================================================================================
    srand((unsigned)time(0)); 
    for(int i=0; i<5; i++){ 
        demandePourLeTour[i] = (rand()%7);
        }
    //ICI NOUS DEVONS FAIRE UNE FONCTION D/CRITURE DE LA DEMANDE 
    
    

    conditionbaton+=10;
    conditionbracelet+=10;
    conditioncouronne+=10;
    conditionepee+=10;
    conditionfleche+=10;
    cout << "et un while de complété";
    //==========================================================================================================================================================================================
    }
    
    

    end=clock();// end commence a compter les cou[s de clocks

	double time_taken = double(end-start) / double(CLOCKS_PER_SEC);//nombre de coups de clock compter diviser par le nombre de coups pour une seconde 
	std::cout << "Execution time: "<< time_taken << " secondes";  // afficher le temps
	//division de la chaine en 4
	//multiplication de chacune
	
}
