#include <iostream>
#include <string>
using namespace std;

void carica(int [], int);
void stampa(int [], int);
void shiftsemplice_dx(int [], int);
void shiftsemplice_sx(int [], int);
void shift_circ_dx(int [], int);
void shift_circ_sx(int [], int);
int sceltaUtente(string []);

int main(){
    int dimensione, scelta;
    string scelte[4] = {"1) Shift semplice a destra", "2) Shift semplice a sinistra", "3) Shift circolare a destra", "4) Shift circolare a sinistra"};

    do { cout << "inserisci la dimensione del vettore: "; cin >> dimensione; }
    while(dimensione <= 0);
    int vettore[dimensione];

    stampa(vettore, dimensione);
    carica(vettore, dimensione);
    scelta = sceltaUtente(scelte);

    switch (scelta)
    {
    case 1:
        shiftsemplice_dx(vettore, dimensione);
        break;
    case 2:
        shiftsemplice_sx(vettore, dimensione);
        break;
    case 3:
        shift_circ_dx(vettore, dimensione);
        break;
    case 4:
        shift_circ_sx(vettore, dimensione);
        break; 
    default:
        break;
    }

    stampa(vettore, dimensione);

    return 0;
}

void carica(int V[], int dim){
    for(int i = 0; i < dim; i++)
    {
        cout << "Inserisci il " << i+1 << " elemento del vettore: ";
        cin >> V[i];
    }
}

void stampa(int V[], int dim){
    for( int i = 0; i < dim; i++) cout << V[i] << " ";
    cout << endl;
}

void shiftsemplice_dx(int V[], int dim){
    for(int i = dim-1; i>1; i--) V[i] = V[i-1];
}

void shiftsemplice_sx(int V[], int dim){
    for(int i = 0; i<dim-1; i++) V[i] = V[i+1];
}
void shift_circ_dx(int V[], int dim){
    int el = V[dim-1];
    for(int i = dim-1; i>1; i--) V[i] = V[i-1];
    V[1] = V[0];
    V[0] = el;
}

void shift_circ_sx(int V[], int dim){
    int el = V[0];
    for(int i = 0; i<dim-1; i++) V[i] = V[i+1];
    V[dim-1] = el;
}

int sceltaUtente(string v[]){
    int scelta;
    for(int i = 0; i<4; i++) cout << v[i] << endl;
    do
    {
        cout << "Inserisci la tua scelta: "; cin >> scelta;
    } while (scelta<=0 || scelta>4);
    return scelta;
}