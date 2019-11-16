#include "Inventaire.h"
//=================================================Constructeur et destructeur=================================================================
Inventaire::Inventaire()
{
   this->baton =0;
    this->fleche=0;
    this->epee=0;
    this->couronne=0;
    this->bracelet=0;
}

Inventaire::~Inventaire()
{
}
//================================================= FONCTION DAJOUT A LINVENTAIRE================================================================
int Inventaire::ajouterBaton(int nombreAjouter)
{
    baton+=nombreAjouter;
    return 0;
}
int Inventaire::ajouterFleche(int nombreAjouter)
{
    fleche+=nombreAjouter;
    return 0;
}
int Inventaire::ajouterEpee(int nombreAjouter)
{
    epee+=nombreAjouter;
    return 0;
}
int Inventaire::ajouterCouronne(int nombreAjouter)
{
    couronne+=nombreAjouter;
    return 0;
}
int Inventaire::ajouterBracelet(int nombreAjouter)
{
    bracelet+=nombreAjouter;
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