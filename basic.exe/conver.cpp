/***************************************************************************************************/
/*     Donner un programme de conversion de longueur cm (c)                  					   */
/*      en unité de pouce (p) ou l’inverse selon le choix de l’utilisateur.            	           */
/*   Sachant qu’un pouce (inch) est égale à 2.54 cm   ( 1 inch = 2.54 cm).  					   */   
/*    Donner deux propositions une utilisant une instruction if et l’autre utilisan                */  
/*      t l’instruction switch.                    								                   */   
/***************************************************************************************************/
#include <iostream>

using namespace std;

int main() {
    int nbr;
    float convert;

    do {
        cout << " -1      (inch)   ->  (cm)" << endl;
        cout << " -2      (cm)     ->  (inch)" << endl;
        cout << "Choisir votre unité (1 ou 2): ";
        cin >> nbr;

        if (nbr != 1 && nbr != 2) {
            cout << "  Entrez un choix valable s'il vous plaît!" << endl;
        }

    } while (nbr != 1 && nbr != 2);

    cout << "Entrez la valeur à convertir: ";
    cin >> convert;

    if (nbr == 1) {
        convert = convert * 2.54;
        cout << " - Résultat: " << convert << " cm" << endl;
    } else if (nbr == 2) {
        convert = convert / 2.54;
        cout << "- Résultat: " << convert << " inch" << endl;
    }

    return 0;
}

