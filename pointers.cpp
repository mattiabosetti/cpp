#include <iostream>
using namespace std;


int main() {

    /* & indica dove è stata salvata la variabile nella RAM (address)
       * crea un pointer
    */

    string nome = "Mattia";
    int eta = 45;

    cout << &nome << endl;
    cout << &eta << endl;

    string* pNome = &nome;
    cout << pNome << endl;



    cout << endl;
    return 0;
}