#include <iostream>
#define DIMVETTORE 10
using namespace std;

int dimVet();
void caricaVet(float [], int);
void stampaVet(float [], int);
void modificaElementi(float [], int);

int main(){
    int d = dimVet();
    float vettore[d];
    
    caricaVet(vettore, d);
    stampaVet(vettore, d);
    modificaElementi(vettore, d);
    stampaVet(vettore, d);

    return 0;
}

int dimVet(){
    int n=0;

    do
    {
        cout << "Inerisci la dimensione del vettore: ";
        cin >> n;
    } while (n<=0 || n>DIMVETTORE);

    return n;
}

void caricaVet(float v[], int dim){
    for( int i = 0; i<dim; i++ ){
        cout << "Inserisci il " << i+1 << " numero: ";
        cin >> v[i];
    }
}

void stampaVet(float v[], int dim){
    for( int i = 0; i<dim; i++) cout << v[i] << " ";
    cout << endl;
}

void modificaElementi(float v[], int dim){
    for( int i = 0; i < dim; i++)
    {
        if( i%2==0 ) v[i] *= 2;
        else v[i] *= 3;
    }
}
