#include <iostream>
using namespace std;

class SetInt {
private:
    int* elements;      // Tableau dynamique pour stocker les éléments
    int maxSize;        // Taille maximale du tableau (capacité)
    int currentSize;    // Nombre actuel d'éléments dans l'ensemble

public:
    // Constructeur avec une taille maximale par défaut
    SetInt(int max = 100) {
        maxSize = max;
        currentSize = 0;
        elements = new int[maxSize];  // Allocation dynamique
    }

    // Destructeur pour libérer la mémoire allouée
    ~SetInt() {
        delete[] elements;
    }

    // Vérifie si un élément x appartient à l'ensemble
    bool appartient(int x) {
        for (int i = 0; i < currentSize; i++) {
            if (elements[i] == x)
                return true;
        }
        return false;
    }

    // Ajoute un élément x uniquement s'il n'existe pas déjà, et si la capacité n’est pas dépassée
    void ajouter(int x) {
        if (!appartient(x) && currentSize < maxSize) {
            elements[currentSize++] = x;  // Ajoute l’élément à la fin et incrémente currentSize
        }
    }

    // Retourne le nombre d'éléments uniques dans l'ensemble
    int cardinal() {
        return currentSize;
    }
};

int main() {
    SetInt monEnsemble(100);  // Création d'un ensemble avec une capacité maximale de 100

    cout << "Veuillez entrer 20 entiers :\n";
    for (int i = 0; i < 20; i++) {
        int val;
        cin >> val;
        monEnsemble.ajouter(val);  // Ajoute uniquement si val n'est pas déjà présent
    }

    cout << "Nombre d'entiers différents saisis : " << monEnsemble.cardinal() << endl;

    return 0;
}

