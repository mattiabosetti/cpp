#include <iostream>
using std::cin;
using std::cout;

void area(double &r, double &area) {
    area = 3.14 * r * r;
}

int main() {
    double r;
    double a = 0;
    cout << "Inserisci il raggio del cerchio: ";
    cin >> r;

    area(r, a);
    cout << "L'area del cerchio è: " << a << "\n";

    return 0;
}