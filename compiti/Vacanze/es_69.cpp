#include <iostream>
#define RIGHE 100
#define COLONNE 100
using namespace std;

int confronto(int, int, float [RIGHE][COLONNE]);
void carica(int, int, float [RIGHE][COLONNE]);

int main(){
    int righe, colonne;
    float matrice[RIGHE][COLONNE];

    cout << "Inserisci le righe: "; cin >> righe;
    cout << "Inserisci le colonne: "; cin >> colonne;

    cout << "Carica il vettore" << endl;
    carica(righe, colonne, matrice);

    cout << "La " << confronto(righe, colonne, matrice) << "a riga e' quella con la somma maggiore";

    return 0;
}

int confronto(int r, int c, float m[RIGHE][COLONNE]){
    float somma = 0, sommamax = 0;
    int riga;
    for( int i = 0; i < r; i++ ){
        somma = 0;

        for( int j = 0; j < c; j++){
            somma += m[i][j];
        }

        if(somma > sommamax){
            sommamax = somma;
            riga = i+1;
        }
    }

    return riga;
}

void carica(int r, int c, float m[RIGHE][COLONNE]){
    for( int i = 0; i < r; i++ )
        for( int j = 0; j < c; j++ ){
            cout << "Inserisci il numero in posizione " << i << "," << j << ": ";
            cin >> m[i][j];
        }
}