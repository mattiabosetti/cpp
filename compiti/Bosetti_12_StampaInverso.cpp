#include <iostream>
using namespace std;

int main() {
    int dVet = 0;
    do {
        cout << "Inserisci la dimensione dell'array: ";
        cin >> dVet;
    } while(dVet <= 0);
    int Vet[dVet];

    for(int i = 0; i<dVet; i++){
        cout << "Inserisci il " << i+1 << " numero del vettore: "; cin >> Vet[i];
    }
    for(int i = dVet-1; i >= 0; i--){
        cout << Vet[i] << endl;
    }
    
    return 0;
}