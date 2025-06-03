#include <iostream>
using namespace std;

class element {
public:
    int valeur;

    // Constructeur par défaut
    element() {
        valeur = 0;
    }
};

int main() {
    // Allocation statique (stack)
    element e1;

    // Allocation dynamique d’un seul objet
    element* e2 = new element;

    // Allocation dynamique d’un tableau de 3 éléments
    element* tab = new element[3];

    // Affichage
    cout << "element 1 e1 = " << e1.valeur << endl;
    cout << "element 2 e2 = " << e2->valeur << endl;

    for (int i = 0; i < 3; i++) {
        cout << "tab[" << i << "] = " << tab[i].valeur << endl;
    }

    // Libération de la mémoire dynamique
    delete e2;
    delete[] tab;

    return 0;
}

