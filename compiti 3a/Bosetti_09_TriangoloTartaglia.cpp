#include <iostream>
using namespace std;

long long fattoriale(int);
int binomio(int, int);
void riga(int);
void triangolo(int);

int main() {
    int righe;

    do {cout << "Quante righe del triangolo di Tartaglia devo stampare?  "; cin >> righe;}
    while(righe<=0);

    triangolo(righe);

    return 0;
}

long long fattoriale(int n) {
    if(n == 0) return 1;
    return fattoriale(n - 1) * n;
}

int binomio(int n, int k){
    return fattoriale(n)/(fattoriale(k)*fattoriale(n-k));
}

void riga(int n){
    int k = 0;
    while(k<=n) {
        cout << binomio(n, k) << " ";
        k++; 
    }
}

void triangolo(int r) {
    int i = 0;
    while(i<=r){
        riga(i);
        cout << endl;
        i++;
    }

    
}