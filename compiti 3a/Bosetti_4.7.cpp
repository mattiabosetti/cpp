#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int i=0, numeri[100], n=0;
    double media, somma = 0;

    do{
        cout << "Inserisci il " << i+1 << "° numero: ";
        cin >> numeri[i];
        while(numeri[0] == 0){
            cout << "Il primo numero non può essere 0, riprova: ";
            cin >> numeri[0];
        }
        i++;

    } while(numeri[i] != 0);
    n = i-1;
    i = 0;

    while(i <= n) {
        somma += numeri[i];
        i++;
    }

    media = somma/n;

    cout << "La media dei numeri inseriti é: " << media;



    return 0;
}