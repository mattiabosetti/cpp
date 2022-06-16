#include <iostream>
using namespace std;

class Persona {
    public:
        string nome;
        int eta;
        double peso;
        Persona(string nome,int eta,double peso){
            this->eta = eta;
            this->nome = nome;
            this->peso = peso;
        }
};


int main(){

    Persona persona1("Mattia", 15, 64.4);
    Persona persona2("Paolo", 22, 75.2);
    Persona persona3("Alessandro", 34, 80.54);

    cout << persona1.nome << endl;
    cout << persona2.eta << endl;
    cout << persona3.peso << endl;


    cout << endl;
    return 0;
}