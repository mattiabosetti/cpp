#include <iostream>
using namespace std;

int n;

void restituisci() {
    cout << n << endl; 
}

int main() {
    do {cout << "Inserisci un numero intero positivo: "; cin >> n;}
    while(n<0);
    restituisci();

    return 0;
}