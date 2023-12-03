#include <iostream>
using namespace std;

int main() {
    int numero, cifra, somma = 0;

    cout << "Inserisci un numero intero: ";
    cin >> numero;

    while(numero <= 0) {
        cout << "Il numero deve essere non negativo, riprova: ";
        cin >> numero;
    }

    while (numero != 0) {
        cifra = numero % 10;
        somma += cifra;
        numero /= 10;
    }

    cout << "La somma delle singole cifre del numero inserito e': " << somma << endl;

    return 0;
}