#include <iostream>
using namespace std;

int pari(int n) {
    if (n%2 == 0){
        cout << "Pari";
    }
    cout << "Dispari";
    
}

int main() {
    int n;

    do {cout << "Inserisci un numero intero positivo: "; cin >> n;}
    while(n<=0);
    pari(n);

    return 0;
}