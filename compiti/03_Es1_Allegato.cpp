#include <iostream>
using std::cin;
using std::cout;

double area(double r) {
    return 3.14 * r * r;
}

int main() {
    double r;
    cout << "Inserisci il raggio del cerchio: ";
    cin >> r;

    cout << "L'area del cerchio è: " << area(r) << "\n";

    return 0;
}