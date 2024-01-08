#include <iostream>
using namespace std;

int pari(int n) {
    if (n%2 == 0){
        return 1;
    }
    return 0;
}

int main() {
    int n;

    do {cout << "Inserisci un numero intero positivo: "; cin >> n;}
    while(n<=0);
    int p = pari(n);

    cout << p << endl;

    return 0;
}