#include <iostream>
#include <vector>
using namespace std;

void occorrenzeBool(char [], int, char, bool []);
void occorrenzeInt(char [], int, char, int []);
void caricaVettore(int [], int);
void stampaVettore(auto [], int, int);

int main(){
    int dim = 20;
    char frase[dim], carattere;
    int pos[dim];
    bool occ[dim];
    caricaVettore(pos, dim);

    
    cout << "Inserisci una frase (20 caratteri massimo): "; fgets(frase, dim, stdin);
    cout << "Inserisci il carattere da cercare: "; cin >> carattere;
    
    occorrenzeInt(frase, dim, carattere, pos);
    occorrenzeBool(frase, dim, carattere, occ);

    cout << "OccorrenzeInt: "; stampaVettore(pos, dim, 0);
    cout << "OccorrenzeBool: "; stampaVettore(occ, dim, 1);

    
    
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

void occorrenzeBool(char vet[], int dim, char c, bool occorrenze[]){
    for(int i = 0; i < dim; i++){
        occorrenze[i] = false;
        if(vet[i] == c) occorrenze[i] = true;
    }
}


void caricaVettore(int v[], int dim){
    for(int i = 0; i<dim; i++) v[i] = 0;
}

void stampaVettore(auto v[], int dim, int tipo){
    if(tipo == 0) // tipo = 0 stampa occorrenzeInt mentre tipo = 1 stampa occorrenzeBool
        for(int i = 0; i < dim; i++){ 
            if(v[i] == 21) i = dim;
            else cout << v[i] << ", ";
        }
    else
        for(int i = 0; i < dim; i++){
                if(v[i]) cout << "true, ";
                else cout << "false, ";
            }
    cout << endl;
}
