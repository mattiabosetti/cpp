#include <iostream>
using namespace std;

void confronto(int, float , float , float []);
void carica(int, float []);
void stampa(int, float []);

int main() {
    int dimensione;
    float maggiore, minore;

    cout << "Inserisci a dimensione del vettore: ";
    cin >> dimensione;
    
    float* vettore = new float[dimensione];

    cout << "Carica il vettore" << endl;
    carica(dimensione, vettore);
    stampa(dimensione, vettore);

    cout << "Inserisci il valore maggiore: ";
    cin >> maggiore;
    cout << "Inserisci il valore minore: ";
    cin >> minore;

    cout << "Gli indici sono: "; 
    confronto(dimensione, maggiore, minore, vettore);

    delete[] vettore;

    return 0;
}

void confronto(int dim, float mag, float min, float vet[]){
    for(int i = 0; i < dim; i++){
        if( vet[i] >= min && vet[i] <= mag )
            cout << i << ", ";
    }
        
}

void carica(int d, float v[]){
    for( int i = 0; i < d; i++ ){
        cout << "Inserisci il " << i+1 << " numero: ";
        cin >> v[i];
    }
}

void stampa(int d, float v[]){
    for( int i = 0; i < d; i++ )
        cout << v[i] << ", ";
    cout << endl;
}
