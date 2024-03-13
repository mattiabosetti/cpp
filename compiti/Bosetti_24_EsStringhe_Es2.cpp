#include <iostream>
#include <string>
using namespace std;

int main(){
    string frase;

    cout << "Inserisci una frase: ";
    getline(cin, frase);

    int dim = frase.length();
    cout << "La dimensione della frase e': " << dim << endl;


    return 0;
}