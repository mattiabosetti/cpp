#include <iostream>
using namespace std;

long long fattoriale(int);
int binomio(int, int);

int main() {

    int n, k;

    cout << "Inserisci il primo numero del binomio: "; cin >> n;
    cout << "Inserisci il secondo numero del binomio: "; cin >> k;

    cout << "Il binomio di " << n << " e " << k << " e': " << binomio(n,k) << endl;

    return 0;
}

long long fattoriale(int n) {
    if(n == 0) return 1;
    return fattoriale(n - 1) * n;
}

int binomio(int n, int k){
    return fattoriale(n)/(fattoriale(k)*fattoriale(n-k));
}
