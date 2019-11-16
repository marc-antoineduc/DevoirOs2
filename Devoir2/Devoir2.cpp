// Devoir2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
// librairie
#include <iostream>
#include <thread>
#include "Inventaire.cpp"
#include "FileManager.cpp"

//==========
//nos fichiers
//===========
using namespace std;

int main()
{
    int ressourceDisponibleParTour[5];
    const int chaine = 30, bois = 20, fer = 20, gold = 60, cuivre = 40;// constante pour initialiser nos ressource a chaque tour 
    int demandePourLeTour[5];
    int ressourcesNecessairesParTour[5];
    bool sceaudapprobationduforgeron;
    string message;
    FileManager* test =new FileManager();
    Inventaire* inventaire = new Inventaire();
    
	clock_t start, end;
	start = clock(); // start commence a compter le nombre de coups de la cock
    cout << "DÉBUT"; //test
    while (inventaire->getNombreDeBaton() < 20 || inventaire->getNombreDeFleche() < 20 || inventaire->getNombreDeEpee() < 20 || inventaire->getNombreDeCouronne() < 20 || inventaire->getNombreDeBracelet() < 20)
    {
    sceaudapprobationduforgeron =1;
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
        demandePourLeTour[i] = (rand()%7);//TEST il faut remettre 7 à la place de 11
        }

    message = "\n\nLa demande générée est : \n";
    message += to_string(demandePourLeTour[0])+" bâton(s) de Mario. \n";
    message += to_string(demandePourLeTour[1])+" flèche(s) de Mario. \n";
    message += to_string(demandePourLeTour[2])+" épée(s) de Mario. \n";
    message += to_string(demandePourLeTour[3])+" couronne(s) de Mario. \n";
    message += to_string(demandePourLeTour[4])+" Bracelet(s) de Mario. \n";
    cout << message;
    //ICI NOUS DEVONS FAIRE UNE FONCTION D/CRITURE DE LA DEMANDE 
    ressourcesNecessairesParTour[0] =2*demandePourLeTour[0] + 2*demandePourLeTour[4];
    ressourcesNecessairesParTour[1] =1*demandePourLeTour[0] + 1*demandePourLeTour[1];
    ressourcesNecessairesParTour[2] =1*demandePourLeTour[1] + 3*demandePourLeTour[2];
    ressourcesNecessairesParTour[3] =2*demandePourLeTour[2] + 4*demandePourLeTour[3];
    ressourcesNecessairesParTour[4] =4*demandePourLeTour[3] + 1*demandePourLeTour[4];
    
    for (int i = 0; i < 5; i++)
    {
        if (ressourcesNecessairesParTour[i] > ressourceDisponibleParTour[i] )
        {
            sceaudapprobationduforgeron = false;
        }
        
    }
    
    
    if(sceaudapprobationduforgeron)
        {

            for (int i = 0; i < 5; i++)
            {
                /* code */
            }
            
            inventaire->ajouterBaton(demandePourLeTour[0]); // test
            inventaire->ajouterBracelet(demandePourLeTour[4]); // test
            inventaire->ajouterCouronne(demandePourLeTour[3]); // test
            inventaire->ajouterEpee(demandePourLeTour[2]); // test
            inventaire->ajouterFleche(demandePourLeTour[1]); // test
            cout << "et un while de complété";  // test
        }
        else
        {
            message = "\n La demande " + to_string(demandePourLeTour[0])+", "+ to_string(demandePourLeTour[1])+", "+ to_string(demandePourLeTour[2])+", "+ to_string(demandePourLeTour[3])+", "+ to_string(demandePourLeTour[4]) + " a été rejetée car excède les ressources. \n";
            cout << message;
        }
        


    //==========================================================================================================================================================================================
    }
    
    

    end=clock();// end commence a compter les cou[s de clocks

	double time_taken = double(end-start) / double(CLOCKS_PER_SEC);//nombre de coups de clock compter diviser par le nombre de coups pour une seconde 
	std::cout << "Execution time: "<< time_taken << " secondes";  // afficher le temps
	//division de la chaine en 4
	//multiplication de chacune
	
}

