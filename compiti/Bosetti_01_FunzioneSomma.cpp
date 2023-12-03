#include <iostream>
#include <windows.h>
using std::cin;
using std::cout;

double addizione(double, double);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double x, y;

    cout << "Inserisci il primo addendo: ";
    cin >> x;
    cout << "Inserisci il secondo addendo: ";
    cin >> y;

    cout << "Il risultato dell'addizione è: " << addizione(x, y) << std::endl;

    return 0;
}

double addizione(double a, double b){
    return a+b;
}