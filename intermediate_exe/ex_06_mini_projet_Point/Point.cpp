#include <iostream>
#include "Point.h"

using namespace std;

//standare valeur par constructeur
Point :: Point (float a=0 , float b=0) : x(a),y(b) {}

//standare valeurs par l'utilisateur 
//Point :: Point (float xval, float yval) : x(xval),y(yval){}
 
//fct deplacer 
void Point :: deplace (float dx, float dy){
	x += dx;
	y += dy;
}

//fct affich
void Point::affich (){
	cout <<"les coordonees s'ont:  "<<x<< ","<<y<<endl;
}
