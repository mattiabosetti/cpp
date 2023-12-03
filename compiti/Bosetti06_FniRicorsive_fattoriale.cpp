#include <iostream>
using namespace std;

long long fattoriale(int n) {
    if(n == 0) return 1;
    return fattoriale(n - 1) * n;
}

int main() {
    int n;
    do{
        cout << "Iserisci il numero maggiore di 0: "; cin >> n;
    } while(n <= 0);

    cout << "Il fattoriale di " << n << " è: " << fattoriale(n) << endl;

    return 0;
}