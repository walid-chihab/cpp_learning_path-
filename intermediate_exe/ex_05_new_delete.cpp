#include <iostream>
using namespace std;
class element {
	public:
		
		int valeur;
		
		//constructure fct pas de type de retour
		element (){
		valeur = 0 ;
		}
};
int main (){

	//creation des objet de la class
	element e1;//allocation statique   stack
	element *e2 =new element;//allocation dynamique un seul element 
	element *tab = new element[3];//aussi dynamique mais trois element	

	//affichage de ces element
	
	cout<<"element 1 e1 = "<<e1.valeur<<endl1;
	cou<<"element 2 e2 =  "<<e2->valeur<<endl1;
	for (int i = 0 ; i<3 i++){
		cout<<"t["<<i<<"] = "<< t[i]->valeur<<endl;
	}


	//free de l'espace utiliser
	// on fait pas delete e1 car elle va libirer directement
	delete e2;
	delete[]tab;


	return 0;
}
	
