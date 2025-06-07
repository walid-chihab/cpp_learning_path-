#include <iostream>
using namespace std;

// Définition de la classe Date
class Date {
private:
    int jour;
    int mois;
    int annees; 
public:
    // Constructeur  initialise les valeurs
    Date() {
        jour = 11;
        mois = 22;
        annees = 3333;
    }

    // methode pour saisir la date depuis l'utilisateur
    void insere() {
        cout << "Entrez votre date de naissance (jj mm aaaa) : ";
        cin >> jour >> mois >> annees; // ✅ Chaque champ doit être séparé avec >>
    }

    // methode pour afficher la date
    void affich() {
        cout << jour << "/" << mois << "/" << annees << endl;
    }

    //   1 si d1 est plus ancienne ,  2 si d2 est plus ancienne  , 0 si les deux sont identiques
    int compare(Date d1, Date d2) {
        if (d1.annees < d2.annees)
            return 1;
        else if (d1.annees > d2.annees)
            return 2;
        else {
            // meme annes
            if (d1.mois < d2.mois)
                return 1;
            else if (d1.mois > d2.mois)
                return 2;
            else {
                // meme mois
                if (d1.jour < d2.jour)
                    return 1;
                else if (d1.jour > d2.jour)
                    return 2;
                else
                    return 0; //  Les deux dates sont identiques
            }
        }
    }
};

int main() {
    Date p1, p2;

    // Lecture des deux dates
    p1.insere();
    p2.insere();

    // Affichage des deux dates
    cout << "Date 1 : ";
    p1.affich();
    cout << "Date 2 : ";
    p2.affich();

    // Comparaison des deux dates
    Date d;//car on peut pas appeler une fct du classe direct on l'appeler dans l'objet qui on va utilise pas
    int resultat = d.compare(p1, p2);

    // Affichage du résultat
    cout << ">> Résultat de la comparaison : ";
    if (resultat == 1) {
        cout << "La date la plus ancienne est : ";
        p1.affich();
    }
    else if (resultat == 2) {
        cout << "La date la plus ancienne est : ";
        p2.affich();
    }
    else {
        cout << "Les deux dates sont identiques." << endl;
    }

    return 0;
}
