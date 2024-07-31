#include <iostream>
using namespace std;

void prodotto(int, float [], float [], float []);
void carica(int, float []);
void stampa(int, float []);

int main() {
    int dimensione;

    cout << "Inserisci a dimensione del vettore: ";
    cin >> dimensione;
    
    float* vettore1 = new float[dimensione];
    float* vettore2 = new float[dimensione];
    float* risultato = new float[dimensione];

    cout << "Carica il primo vettore" << endl;
    carica(dimensione, vettore1);
    stampa(dimensione, vettore1);

    cout << "Carica il secondo vettore: " << endl;
    carica(dimensione, vettore2);
    stampa(dimensione, vettore2);

    cout << "Il risultato e': " <<  endl;
    prodotto(dimensione, vettore1, vettore2, risultato); 
    stampa(dimensione, risultato);

    delete[] vettore1;
    delete[] vettore2;
    delete[] risultato;

    return 0;
}

void prodotto(int dim, float v1[], float v2[], float vf[]){
    for(int i = 0; i < dim; i++)
        vf[i] = v1[i]*v2[i];
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
