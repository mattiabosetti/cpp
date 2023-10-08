#include <iostream>
using namespace std;

int main() {
    int voto;

    cout << "Inserisci il voto: ";
    cin >> voto;

    while(voto < 0 || voto > 30)
    {
        cout << "Valore non corretto, riprova: ";
        cin >> voto;
    }


    if(voto >= 16){
            if(voto >= 21){
                cout << "Hai passato l'esame e ora puoi registrarlo!";
        } else {
            cout << "Dovrai sostenere l'orale se vuoi passare.";
        }
    }
    else {
        cout << "Mi spiace... respinto!";
    }
    


    return 0;
}