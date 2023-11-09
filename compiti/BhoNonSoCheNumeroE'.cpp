#include <iostream>
using namespace std;

int main() {
    int n, cres, decr;
    do {
        cout << "Inserisci N, deve essere maggiore di 0: ";
        cin >> n;
    } while(n <= 0);
    int numeri[n];
    for(int i = 0; i < n; i++){
        cout << "Inserisci il " << i+1 << " numero: ";
        cin >> numeri[i];
    }



    return 0;
}