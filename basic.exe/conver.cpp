/***************************************************************************************************/
/*                                     								   */
/*                                   				       			           */
/*                                   								   */   
/*                           							                   */  
/*                     								                   */   
/*                      							           	   */
/*                  	                                                                       	   */ 
/*                       							                   */        
/*                                   								   */
/*                               					      			   */
/*                           						                           */
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
            cout << "⚠️  Entrez un choix valable s'il vous plaît!" << endl;
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

