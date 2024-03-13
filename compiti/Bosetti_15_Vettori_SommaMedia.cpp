#include <iostream>
#define DIMENSIONE 100
using namespace std;

float somma(float [], int);
float media(float [], int);
void caricaVettore(float [], int);

int main(){
    int dim;

    do
    {
        cout << "Inserisci la dimensione del vettore: ";
        cin >> dim;
    } while (dim <= 0 || dim > DIMENSIONE);
    float vettore[dim];

    caricaVettore(vettore, dim);
    float mid = media(vettore, dim);
    float sum = somma(vettore, dim);
    
    cout << "La somma di tutti gli elementi del vettore e': " << sum << endl;
    cout << "La media di tutti gli elementi del vettore e': " << mid << endl;

    return 0;
}

void caricaVettore(float v[], int n){
    for ( int i = 0; i<n; i++ )
    {
        cout << "Inserisci il " << i+1 << " numero: ";
        cin >> v[i];
    }
}

float somma(float v[], int n){
    float sum = 0;
    for( int i = 0; i < n; i++ ) sum += v[i]; 
    return sum;
}

float media(float v[], int n){
    float mid = somma(v, n)/n;
    return mid;
}