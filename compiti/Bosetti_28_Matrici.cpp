#include <iostream>
using namespace std;

void creaA(int [][10], int);
void creaB(int [][10], int);
void creaC(int [][10], int);
void creaD(int [][10], int);
void stampa(int [][10], int );


int main(){
    char scelta;
    int tabella[10][10];

    do
    {
        cout << "Inserisci quale tipo di tabella stampare [A,B,C,D] (in minuscolo): "; 
        cin >> scelta;
    }

    while(scelta != 'a' && scelta != 'b' && scelta != 'c' && scelta != 'd');

    switch (scelta)
    {
    case 'a':
    creaA(tabella, 10);
        break;

    case 'b':
    creaB(tabella, 10);
        break;

    case 'c':
    creaC(tabella, 10);
        break;

    case 'd':
    creaD(tabella, 10);
        break;
    
    default:
        break;
    }
    
    stampa(tabella, 10);

    return 0;
}


void creaA(int tab[][10], int righe){
    for(int i = 0; i<righe; i++){  // inizializza la tabella
        for(int j = 0; j<righe; j++){
            tab[i][j] = i+1;
        }
    }
}


void creaB(int tab[][10], int righe){
    for(int i = 0; i<righe; i++){  // inizializza la tabella
        for(int j = 0; j<righe; j++){
            tab[i][j] = i;
        }
    }
}


void creaC(int tab[][10], int righe){
    for(int i = 0; i<righe; i++){  // inizializza la tabella
        for(int j = 0; j<righe; j++){
            tab[i][j] = j+1;
        }
    }
}


void creaD(int tab[][10], int righe){
    for(int i = 0; i<righe; i++){  // inizializza la tabella
        for(int j = 0; j<righe; j++){
            tab[i][j] = j;
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