#include <iostream>
#include <math.h>
using namespace std;

class Rettangolo{
    public:
        double altezza;
        double base;
        Rettangolo(double x, double y){
            altezza = x;
            base = y;
        }

    double area(){
        return base*altezza;
    }
    double perimetro() {
        return (base+altezza)*2;
    }
    double diagonale() {
        return sqrt(base*base + altezza*altezza);
    }

};

int main() {

    double base, altezza;

    do {
        cout << "Inserisci la base del rettangolo: ";
        cin >> base;
    } while(base <= 0);
    do {
        cout << "Inserisci l'altezza del rettangolo: ";
        cin >> altezza;
    } while(altezza <= 0);

    Rettangolo rettangolo(base, altezza);

    cout << rettangolo.area();
    cout << rettangolo.perimetro();
    cout << rettangolo.diagonale();




    return 0;
}