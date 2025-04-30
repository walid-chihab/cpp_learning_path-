     /****************************************************************************************************************************/
    /*	La classe string vous permet d’accéder aux caractères en utilisant soit l’opérateur [] soit la m ́méthode at().	        */
   /*	Pour connaître la longueur de la chaine, vous pouvez utiliser soit length() soit size().			       */
  /*	En utilisant la classe string, donner un programme qui affiche les codes ASCII des caractères composant une chaîne de */
 /*	caractères.											                     */
/****************************************************************************************************************************/


#include <iostream>
#include <string>
using namespace std;

     void ascii (string name){
        for (int i=0 ; i<name.length() ; i++)
        {
            cout << (int)(name[i]) << endl; 
        }
    }

int main() {
    string name ;
    cout << "entrer votre nom : ";
    cin >> name;
    ascii(name);
    return 0;
}
