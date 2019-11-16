class Inventaire
{
private:
    int baton;// nombre de baton presentement construit
    int fleche;// nombre de fleche presentement construit
    int epee;// nombre de epee presentement construit
    int couronne;// nombre de couronne presentement construit
    int bracelet;// nombre de bracelet presentement construit
public:
    int ajouterBaton(int nombreAjouter);//Fonction servant a ajouter des baton dans notre variable de baton cree
    int ajouterFleche(int nombreAjouter);//Fonction servant a ajouter des dleche dans notre variable de Fleche cree
    int ajouterEpee(int nombreAjouter);//Fonction servant a ajouter des epee dans notre variable de epee cree
    int ajouterCouronne(int nombreAjouter);//Fonction servant a ajouter des couronne dans notre variable de Couronne cree
    int ajouterBracelet(int nombreAjouter);//Fonction servant a ajouter des bracelet dans notre variable de bracelet cree

    int getNombreDeBaton();//Fonction servant obtenir notre nombre de baton cree a l<exterieur de lobjet
    int getNombreDeFleche();//Fonction servant obtenir notre nombre de fleche cree a l<exterieur de lobjet
    int getNombreDeEpee();//Fonction servant obtenir notre nombre de epee cree a l<exterieur de lobjet
    int getNombreDeCouronne();//Fonction servant obtenir notre nombre de couronne cree a l<exterieur de lobjet
    int getNombreDeBracelet();//Fonction servant obtenir notre nombre de bracelet cree a l<exterieur de lobjet


    Inventaire();
    ~Inventaire();

    
};

