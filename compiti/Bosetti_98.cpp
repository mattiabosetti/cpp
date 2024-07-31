#include <iostream>
using namespace std;

void carica(int, char [][50]);
void stampa(int , char [][50]);
void controllo(int , char [][50], char [][50]);

int main(){
    int dim;

    cout << "Inserisci il numero di righe: "; cin >> dim;

    char m[dim][50];
    char mn[dim][50];
    carica(dim, m);
    stampa(dim, m);
    controllo(dim, m, mn);
    stampa(dim, mn);

    return 0;
}

void carica(int n, char m[][50]){
    for( int i = 0; i < n; i++ )
        for( int j = 0; j < n; j++ )
            cin >> m[i][j];
}

void stampa(int n, char m[][50]){
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ )
            cout << m[i][j] << " ";
        cout << endl;
    }

}

void controllo(int n, char m[][50], char mn[][50]){
    for( int i = 0; i < n; i++ )
        for( int j = 0; j < n; j++ )
            mn[i][j] = m[i][j];

    for( int i = 0; i < n; i++ )
        for( int j = 0; j < n; j++ ){
            char corrente = mn[i][j];
                for( int k = i; k < n; k++ ){
                    int l = (k == i) ? j + 1 : 0;
                    for( ; l < n; l++ )
                        if( mn[k][l] == corrente ) mn[k][l] = '?';
                }

        }

}