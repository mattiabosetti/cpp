#include <iostream>
using namespace std;

int main() {
    int dVet = 0;
    do {
        cout << "Inserisci la dimensione dell'array: ";
        cin >> dVet;
    } while(dVet <= 0);
    int Vet[dVet];
    int Vet2[dVet];

    for(int i = 0; i<dVet; i++){
        cout << "Inserisci il " << i+1 << " numero del vettore: "; cin >> Vet[i];
    }
    for(int i = 0; i < dVet; i++){
        Vet2[i] = Vet[dVet-i-1];
    }

    for(int i = 0; i < dVet; i++){
        cout << Vet2[i] << endl;
    }
    
    return 0;
}