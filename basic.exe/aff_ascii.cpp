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
