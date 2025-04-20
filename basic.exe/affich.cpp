/****************************************************************************************************************************/
/* Donner un programme qui demande le nom, le prénom et l’âge de l’utilisateur ensuite les enregistrer respectivement dans  */
/* des variables de type class string et les affichées comme suit :                                                         */
/* - Donner votre nom : Nom                                                                                                 */
/* - Donner votre prénom : Prénom                                                                                           */
/* - Ton âge : 22                                									    */
/* Bonjour Nom Prénom ton âge est 22 ans										    */
/****************************************************************************************************************************/

#include <iostream> //pour input et output
#include <string>   //pour les chain de caractere

using namespace std;  // pour éviter d’écrire std:: à chaque fois

int main() {

    string nom;
    string prenom;
    int age;

    // Demander à l'utilisateur son nom, prénom et âge
    cout << "Donner votre nom: ";
    cin >> nom;

    cout << "Donner votre prénom: ";
    cin >> prenom;

    cout << "Ton âge: ";
    cin >> age;

    // Afficher les informations de manière structurée
    cout << "Bonjour " << nom << " " << prenom << ", ton âge est " << age << " ans." << endl;

    return 0;
}

