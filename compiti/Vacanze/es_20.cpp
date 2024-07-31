#include <iostream>
using namespace std;

bool confronto(int, float [], float []);
void carica(int, float []);
void stampa(int, float []);

int main() {
    int dimensione;

    cout << "Inserisci a dimensione del vettore: ";
    cin >> dimensione;
    
    float* vettore1 = new float[dimensione];
    float* vettore2 = new float[dimensione];

    cout << "Carica il primo vettore" << endl;
    carica(dimensione, vettore1);
    stampa(dimensione, vettore1);

    cout << "Carica il secondo vettore: " << endl;
    carica(dimensione, vettore2);
    stampa(dimensione, vettore2);

    bool uguali = confronto(dimensione, vettore1, vettore2);
    if(uguali) cout << "I due vettori sono uguali";
    else cout << "I due vettori non sono uguali";

    delete[] vettore1;
    delete[] vettore2;

    return 0;
}

bool confronto(int dim, float v1[], float v2[]){
    for(int i = 0; i < dim; i++)
        if ( v1[i] == v2[i] ){}
        else return false;
    return true;
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
