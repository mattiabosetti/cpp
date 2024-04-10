#include <iostream>
using namespace std;

void leggiVet(int dim, int v[]);
void sommaVet(int dim, int vi[], int vf[]);
void stampa(int dim, int v[]);


int main(){
    int N;
    cout << "Inserisci la dimensione del vettore: ";
    cin >> N;
    int vet1[N];
    int vet2[N];

    leggiVet(N, vet1);
    sommaVet(N, vet1, vet2);

    cout << "Il vettore finale: "; stampa(N, vet2);

    return 0;
}

void leggiVet(int dim, int v[]){
    for(int i = 0; i<dim; i++){
        cout << "Inserisci il "<< i+1 << " elemento: ";
        cin >> v[i];
    }
}

void sommaVet(int dim, int vi[], int vf[]){

    for(int i = 0; i<dim;i++) vf[i] = vi[i];

    int somma = 0;
    for(int i = 0; i<dim; i++){
        for(int j = i; j<dim; j++) vf[i] += vi[j];
    }
}

void stampa(int dim, int v[]){
    for(int i = 0; i < dim; i++) cout << v[i] << ", ";
    cout << endl;
}