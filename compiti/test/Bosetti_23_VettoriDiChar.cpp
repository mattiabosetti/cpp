#include <iostream>
#include <vector>
using namespace std;

void occorrenzeInt(char [], int, char, int []);
void caricaVettore(int [], int);
void stampaVettore(int [], int);

int main(){
    int dim = 20;
    char frase[20], carattere;
    int pos[20];
    caricaVettore(pos, dim);
    
    cout << "Inserisci una frase (20 caratteri massimo): "; fgets(frase, dim, stdin);
    cout << "Inserisci il carattere da cercare: "; cin >> carattere;
    
    occorrenzeInt(frase, dim, carattere, pos);
    cout << "Posizioni in cui e' stato trovato il carattere: "; stampaVettore(pos, dim);
    
    
    return 0;
}

void occorrenzeInt(char frase[], int d, char c, int posizioni[]){
    posizioni[0] = 21;
    int dimPos = 0;
    
    for(int i = 0; i<d || frase[i] == '\0'; i++){
        if(frase[i] == c){
            posizioni[dimPos] = i;
            dimPos++;
        }
    }
    
    posizioni[dimPos] = 21;
}

void caricaVettore(int v[], int dim){
    for(int i = 0; i<dim; i++) v[i] = 0;
}

void stampaVettore(int v[], int dim){
    for(int i = 0; i < dim; i++){ 
        if(v[i] == 21) i = dim;
        else cout << v[i] << ", ";
    }
    cout << endl;
}
