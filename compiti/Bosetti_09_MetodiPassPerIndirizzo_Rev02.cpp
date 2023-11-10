#include <iostream>
#include <assert.h>
using namespace std;

void ordina(float* pX, float* pY){
    float c, x = *pX, y = *pY;

    if (y > x){
        c = x;
        *pX = y;
        *pY = c;
    }
}

/* void ordina2(float &x, float &y){
    float c;
    if( y < x ){
        c = x;
        x = y;                              non funziona?
        y = c;
    }
}; */

int main(){
    float a, b;

    cout << "Inserisci il primo numero: ";
    assert(cin >> a);
    cout << "Inserisci il secondo numero: ";
    assert(cin >> b);

    ordina(&a, &b);
    if( a == b ){
        cout << "I due numeri sono uguali\n";
    } else {
        cout << "Il numero maggiore è: " << a << endl;
        cout << "Il numero minore è: " << b << endl;
        }

    return 0;
}