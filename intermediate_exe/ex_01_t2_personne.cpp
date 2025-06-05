#include <iostream>  // pour les entrées et sorties
using namespace std;

class Personne {
    string CIN;   // numéro d'identification
    string nom;   // nom de la personne
    int age;      // âge de la personne

public:
    // constructeur par défaut - initialise les attributs avec des valeurs par défaut
    Personne() {
        CIN = "";
        nom = "";
        age = 0;
    }

    // constructeur avec paramètres - initialise avec des valeurs données
    Personne(string c, string n, int a) : CIN(c), nom(n) {
        age = a;
    }

    // constructeur de recopie - copie les valeurs d'un autre objet Personne
    Personne(Personne &p) {
        CIN = p.CIN;
        nom = p.nom;
        age = p.age;
    }

    // getters et setters pour nom et age
    string getNom() { return nom; }
    void setNom(string c) { nom = c; }

    int getAge() { return age; }
    void setAge(int a) { age = a; }

    // méthodes membres
    void afficher();    // affiche les informations de la personne
    void saisir();      // saisit les informations de la personne
    bool estMajeur();   // retourne vrai si la personne est majeure

    // destructeur - appelé lors de la destruction de l'objet
    ~Personne() {
        cout << "Objet detruit!" << endl;
    }
};

// définition de la méthode afficher hors de la classe
void Personne::afficher() {
    cout << CIN << " --- " << nom << " --- " << age << endl;
}

// définition de la méthode saisir hors de la classe
void Personne::saisir() {
    cout << "Entrez les infos d'une personne: " << endl;
    cout << "CIN ? "; cin >> CIN;
    cout << "Nom ? "; cin >> nom;
    cout << "Age ? "; cin >> age;
}

// définition de la méthode estMajeur hors de la classe
bool Personne::estMajeur() {
    return (age >= 18);
}

// fonction principale
int main() {
    Personne p, q;  // création de deux objets Personne
    p.saisir();     // saisie des informations de p
    p.afficher();   // affichage des informations de p

    q = p;          // copie de p dans q
    q.afficher();   // affichage des informations de q
/* j'ajout les autres fcts demain inchae lah*/

    return 0;
}

