#include <iostream>
#include "Point.h"

//on passer des objet avec aucun argumentcar onna deja initialiser dans le constructeur
Point::Point(float xval=0, float yval=0) : x(xval), y(yval) {}

//les fct s'ont la pour garder le style d'encapsulation 
void Point::deplace(float dx, float dy) {
    x += dx;
    y += dy;
}

//gettre  pour on garder les valeur
float Point::abscisse() const {
    return x;
}

//le const pour les vals s'ont pas chager
float Point::ordonnee() const {
    return y;
}

