#include <iostream>
#include <windows.h>
using std::cin;
using std::cout;

double area(double, double);
double perimetro(double, double);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double base, altezza;

    cout << "Inserisci l'altezza del rettangolo: ";
    cin >> altezza;
    cout << "Inserisci la base del rettangolo: ";
    cin >> base;

    cout << "Il perimetro del rettangolo misura: " << perimetro(altezza , base) << std::endl;
    cout << "L'area del rettangolo misura: " << area(altezza , base) << std::endl;



    return 0;
}

double area(double x, double y){
    return x*y;
}
double perimetro(double x, double y){
    return (x+y)*2;
}