#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point p1;
    cout << "p1: (" << p1.abscisse() << ", " << p1.ordonnee() << ")" << endl;

    Point p2(3.5, 4.5);
    cout << "p2: (" << p2.abscisse() << ", " << p2.ordonnee() << ")" << endl;

    p2.deplace(1.0, -2.0);
    cout << "p2 deplace: (" << p2.abscisse() << ", " << p2.ordonnee() << ")" << endl;

    return 0;
}

