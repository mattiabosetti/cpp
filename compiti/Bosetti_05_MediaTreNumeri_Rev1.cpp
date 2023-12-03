#include <iostream>
#include <windows.h>
using namespace std;

void media(double a, double b, double c, double &media) {
    media = (a+b+c)/3;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double a, b, c, m = 0;

    cout << "Inserisci il primo numero: "; cin >> a;
    cout << "Inserisci il secondo numero: "; cin >> b;
    cout << "Inserisci il terzo numero: "; cin >> c;

    media(a,b,c,m);

    cout << "La media dei tre numeri è: " << m << endl;

    return 0;
}