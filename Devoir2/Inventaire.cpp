#include <Inventaire.h>
//=================================================Constructeur et destructeur=================================================================
Inventaire::Inventaire(/* args */)
{
    baton =0;
    fleche=0;
    epee=0;
    couronne=0;
    bracelet=0;
}

Inventaire::~Inventaire()
{
}
//================================================= FONCTION DAJOUT A LINVENTAIRE================================================================
int Inventaire::ajouterBaton(int nombreAjouter)
{
    baton+=1;
    return 0;
}
int Inventaire::ajouterFleche(int nombreAjouter)
{
    fleche+=1;
    return 0;
}
int Inventaire::ajouterEpee(int nombreAjouter)
{
    epee+=1;
    return 0;
}
int Inventaire::ajouterCouronne(int nombreAjouter)
{
    couronne+=1;
    return 0;
}
int Inventaire::ajouterBracelet(int nombreAjouter)
{
    bracelet+=1;
    return 0;
}
//===============================================================================================================================================

//========================================================FONCTION DE RETOUR DE NOMBRE DINVENTAIRE POUR OBJET EXTERNE===========================

int Inventaire::getNombreDeBaton()
{
    return baton;
}

int Inventaire::getNombreDeFleche()
{
    return fleche;
}

int Inventaire::getNombreDeEpee()
{
    return epee;
}

int Inventaire::getNombreDeCouronne()
{
    return couronne;
}

int Inventaire::getNombreDeBracelet()
{
    return bracelet;
}
//=============================================================================================================================================