#include <iostream>
    using namespace std;
    
    struct essai{
    
        int n ; float x;
    
    }; 

//passage par adresse
    void miseazero (essai *e1)
    {
        e1->n = 0;
        e1->x = 0.0;
        
    }
