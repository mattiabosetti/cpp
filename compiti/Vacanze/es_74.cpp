#include <iostream>
using namespace std;

#define MAX_DIM 100

void inserisciMatrice(int matrice[MAX_DIM][MAX_DIM], int dim);
int contaRigheNulle(int matrice[MAX_DIM][MAX_DIM], int dim);
int contaColonneNulle(int matrice[MAX_DIM][MAX_DIM], int dim);
void stampaMatrice(int matrice[MAX_DIM][MAX_DIM], int dim);

int main() {
    int dimensione;
    
    cout << "Inserisci la dimensione della matrice quadrata: ";
    cin >> dimensione;
    
    int matrice[MAX_DIM][MAX_DIM] = {0};
    
    inserisciMatrice(matrice, dimensione);

    cout << "La matrice inserita e':" << endl;
    stampaMatrice(matrice, dimensione);

    int righeNulle = contaRigheNulle(matrice, dimensione);
    int colonneNulle = contaColonneNulle(matrice, dimensione);

    cout << "Numero di righe composte da elementi nulli: " << righeNulle << endl;
    cout << "Numero di colonne composte da elementi nulli: " << colonneNulle << endl;
    
    return 0;
}

void inserisciMatrice(int matrice[MAX_DIM][MAX_DIM], int dim) {
    cout << "Inserisci gli elementi della matrice (interi):" << endl;
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matrice[i][j];
        }
    }
}

int contaRigheNulle(int matrice[MAX_DIM][MAX_DIM], int dim) {
    int righeNulle = 0;
    for (int i = 0; i < dim; i++) {
        bool rigaNulla = true;
        for (int j = 0; j < dim; j++) {
            if (matrice[i][j] != 0) {
                rigaNulla = false;
                break;
            }
        }
        if (rigaNulla) {
            righeNulle++;
        }
    }
    return righeNulle;
}

int contaColonneNulle(int matrice[MAX_DIM][MAX_DIM], int dim) {
    int colonneNulle = 0;
    for (int j = 0; j < dim; j++) {
        bool colonnaNulla = true;
        for (int i = 0; i < dim; i++) {
            if (matrice[i][j] != 0) {
                colonnaNulla = false;
                break;
            }
        }
        if (colonnaNulla) {
            colonneNulle++;
        }
    }
    return colonneNulle;
}

void stampaMatrice(int matrice[MAX_DIM][MAX_DIM], int dim) {
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            cout << matrice[i][j] << ", ";
        }
        cout << endl;
    }
}