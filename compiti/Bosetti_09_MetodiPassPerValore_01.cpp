#include <iostream>
#include <fstream>
#include <assert.h>
using std::cout;
using std::cin;

double a, b;

void ordina(){
    int c;
    if ( b > a ) {
        c = a;
        a = b;
        b = c;
    }
}

int main() {

    cout << "Inserisci il primo numero: ";
    assert(cin >> a);
    cout << "Inserisci il secondo numero: ";
    assert(cin >> b);

    ordina();
    if ( a == b ){ 
        cout << "I due numeri sono uguali";}
    else {
        cout << "Numero maggiore: " << a << "\n";
        cout << "Numero minore: " << b << "\n";
    }


    return 0;
}