#include <iostream>
using namespace std;

class Persona {
    public:
        string nome;
        int eta;
        string peso;

    void mangiare() {
        cout << this->nome << " sta mangiango" << endl;
    }
    void bere() {
        cout << this->nome << " sta bevendo" << endl;
    }
    void dormire() {
        cout << this->nome << " sta dormendo" << endl;
    }
};


int main(){

    Persona persona1;
    persona1.nome = "Mattia";
    persona1.eta = 15;

    Persona persona2;
    persona2.nome = "Paolo";
    persona2.eta = 34;

    Persona persona3;
    persona3.nome = "Alessandro";
    persona3.eta = 22;

    persona1.bere();
    persona2.mangiare();
    persona3.dormire();


    cout << endl;
    return 0;
}