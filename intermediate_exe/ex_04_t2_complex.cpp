#include <iostream>

using namespace std;

class Complex {
	private:
		double re;
		double im;

	public:
    	// Constructeur par défaut
	Complex() : re(0.0), im(0.0) {}

    	// Constructeur paramétré
    	Complex(double r, double i) : re(r), im(i) {}
}
