#include <iostream>

using namespace std;

void compattaArray(int arr[], int &dimensione);
void stampaArray(const int arr[], int dimensione);

int main() {
    int dimensione;
    cout << "Inserisci la dimensione dell'array: ";
    cin >> dimensione;

    int arr[dimensione];
    cout << "Inserisci gli elementi dell'array separati da spazio: ";
    for (int i = 0; i < dimensione; i++) {
        cin >> arr[i];
    }

    cout << "Array originale: ";
    stampaArray(arr, dimensione);
    cout << endl;

    compattaArray(arr, dimensione);

    cout << "Array finale: ";
    stampaArray(arr, dimensione);
    cout << endl;

    return 0;
}

void compattaArray(int arr[], int &dimensione) {
    int contatoreCancellati = 0;
    int indiceScrittura = 0;
    for (int i = 0; i < dimensione; i++) {
        arr[indiceScrittura++] = arr[i];
        while (i + 1 < dimensione && arr[i] == arr[i + 1]) {
            i++;
            contatoreCancellati++;
        }
    }
    dimensione = indiceScrittura;
    cout << "Numero di elementi cancellati: " << contatoreCancellati << endl;
    cout << "Lunghezza del vettore finale: " << dimensione << endl;
}

void stampaArray(const int arr[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        cout << arr[i] << " ";
    }
}
