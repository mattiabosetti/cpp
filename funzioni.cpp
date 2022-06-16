#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


// return 0
void benventuo(string nome_utente,int eta_utente){
    cout << "Benvenuto " << nome_utente << endl;
    cout << "Hai " << eta_utente << " anni" << endl;
};

//return duble
double somma(int num_1,int num_2){
    double risultato = num_1 + num_2;
    return risultato;
};


int main(){

    string nome;
    int eta;

    cout << "Inserisci il tuo nome: " << endl;
    cin >> nome;
    cout << "Inserisci la tua età: " << endl;
    cin >> eta;

    benventuo(nome,eta);
    cout << endl << "**********************" << endl << endl;
    
    int num1;
    int num2;

    cout << "Numero #1: ";
    cin >> num1;
    cout << "Numero #2: ";
    cin >> num2;

    double risultato = somma(num1,num2);
    cout << "Il risultato è: " << risultato;

    cout << endl;
    return 0;
}