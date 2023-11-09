#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n,i=0;

    do { 
        cout << "Inserisci un numero N intero maggiore di 0: ";
        cin >> n;
    } while( n <= 0 );

i=n;

    while( pow(i, i) >= n ) {
        i--;
    }
    cout << "Il numero è: " << i; 

    return 0;
}