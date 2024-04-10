#include <iostream>

using namespace std;

// Funzione per fondere due vettori ordinati
void unisciVettori(const int vett1[], int dim1, const int vett2[], int dim2, int vettoreFuso[]) {
    int i = 0, j = 0, k = 0;

    // Fonde i due vettori ordinati in uno nuovo
    while (i < dim1 && j < dim2) {
        if (vett1[i] < vett2[j])
            vettoreFuso[k++] = vett1[i++];
        else
            vettoreFuso[k++] = vett2[j++];
    }

    // Aggiunge gli elementi rimanenti
    while (i < dim1)
        vettoreFuso[k++] = vett1[i++];

    while (j < dim2)
        vettoreFuso[k++] = vett2[j++];
}

// Funzione per fondere tre vettori ordinati
void unisciTreVettori(const int vett1[], int dim1, const int vett2[], int dim2, const int vett3[], int dim3, int vettoreFuso[]) {
    // Fonde il primo e il secondo vettore
    unisciVettori(vett1, dim1, vett2, dim2, vettoreFuso);

    // Fonde il vettore temporaneo con il terzo vettore
    unisciVettori(vettoreFuso, dim1 + dim2, vett3, dim3, vettoreFuso);
}

int main() {
    // Richiesta delle dimensioni dei vettori all'utente
    int dim1, dim2, dim3;
    cout << "Inserisci la dimensione del primo vettore: ";
    cin >> dim1;
    cout << "Inserisci la dimensione del secondo vettore: ";
    cin >> dim2;
    cout << "Inserisci la dimensione del terzo vettore: ";
    cin >> dim3;

    // Definizione e inizializzazione dei vettori
    int vett1[dim1], vett2[dim2], vett3[dim3];
    cout << "Inserisci gli elementi del primo vettore: ";
    for (int i = 0; i < dim1; ++i) {
        cin >> vett1[i];
    }
    cout << "Inserisci gli elementi del secondo vettore: ";
    for (int i = 0; i < dim2; ++i) {
        cin >> vett2[i];
    }
    cout << "Inserisci gli elementi del terzo vettore: ";
    for (int i = 0; i < dim3; ++i) {
        cin >> vett3[i];
    }

    int dimTotale = dim1 + dim2 + dim3;
    int vettoreFuso[dimTotale];

    // Chiamata della funzione per fondere i tre vettori
    unisciTreVettori(vett1, dim1, vett2, dim2, vett3, dim3, vettoreFuso);

    // Stampa del vettore risultante
    cout << "Vettore fuso: ";
    for (int i = 0; i < dimTotale; ++i) {
        cout << vettoreFuso[i] << " ";
    }
    cout << endl;

    return 0;
}
