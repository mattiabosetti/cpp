#include <iostream>
using std::cout;
using std::cin;

void Metodo1() {
    cout << "siamo nel metodo 1\n";
}
void Metodo2() {
    cout << "siamo nel metodo 2\n";
}
void Metodo3() {
    cout << "siamo nel metodo 3\n";
}

int main() {
    cout << "Siamo nel main!\n";
    Metodo1();
    Metodo2();
    Metodo3();
    cout << "Siamo tornati nel main";

    

    return 0;
}