#include <iostream>
using namespace std;

void Tabella(int [][4], int);
void stampa(int [][4], int );


int main(){
    int tabella[4][4];
    Tabella(tabella, 4);
    stampa(tabella, 4);

    return 0;
}

void Tabella(int tab[][4], int righe){
    for( int i = 0; i < righe; i++ )
        for( int j = 0; j < righe; j++){
            tab[i][j] = 0;
            if( i == 0 ) tab[i][j] = 1;
            if( j == 0 ) tab[i][j] = 1;
            if( i == 3 ) tab[i][j] = 1;
            if( j == 3 ) tab[i][j] = 1;
        }
}

void stampa(int tab[][4], int righe){
    for(int i = 0; i<righe; i++){
        for(int j = 0; j<righe; j++){
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}