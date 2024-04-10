#include <iostream>
using namespace std;

void Tabella(int [][10], int);
void stampa(int [][10], int );


int main(){
    int tabella[10][10];
    Tabella(tabella, 10);
    stampa(tabella, 10);

    return 0;
}

void Tabella(int tab[][10], int righe){
    for(int i = 0; i<righe; i++){  // inizializza la tabella
        for(int j = 0; j<righe; j++){
            tab[i][j] = 0;
        }
    }

    for(int i = 0; i<righe; i++) // inizializza la prima riga della tabella
        tab[0][i] = i+1;

    for(int i = 1; i<righe; i++){
        for(int j = 0; j<righe; j++){
                tab[i][j] += tab[i-1][j] + tab[0][j];
        }
    }

}

void stampa(int tab[][10], int righe){
    for(int i = 0; i<righe; i++){
        for(int j = 0; j<righe; j++){
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}