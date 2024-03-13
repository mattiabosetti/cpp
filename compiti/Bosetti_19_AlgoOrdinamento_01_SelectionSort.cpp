#include <iostream>
using namespace std;

void scambia(int &, int &);
void selectionSort(int [], int);
void stampa(int [], int);

int main() {
    const int lunghezza = 6;
    int array[lunghezza] = {64, 34, 25, 12, 22, 11};

    cout << "Array prima dell'ordinamento: ";
    stampa(array, lunghezza);

    selectionSort(array, lunghezza);

    cout << "Array dopo l'ordinamento: ";
    stampa(array, lunghezza);

    return 0;
}


void scambia(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int array[], int lunghezza) {
    for (int i = 0; i < lunghezza - 1; ++i) {
        for (int j = 0; j < lunghezza - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                scambia(array[j], array[j + 1]);
            }
        }
    }
}

void stampa(int array[], int lunghezza) {
    for (int i = 0; i < lunghezza; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

