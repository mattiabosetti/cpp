#include <iostream>
using namespace std;


int main(){
    int numero, i = 0, somma = 0;
    cout << "Inserisci un numero: ";
    cin >> numero;

    while(numero <= 0) {
        cout << "Il numero deve essere non negativo, riprova: ";
        cin >> numero;
    }

    for(i = 1; i < numero; i++){
        if(numero % i == 0){
            somma += i;
        }
    }

    if(somma == numero){
        cout << "Il numero inserito e' un numero perfetto!";
    }
    else{
        cout << "Il numero inserito non e' un numero perfetto.";
    }

    return 0;
}