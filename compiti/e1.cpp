#include <iostream>
using namespace std;

bool pali(int , char []);


int main(){
    int dim=20;
    char parola[dim];

    cout << "Inserisci una parola: "; fgets(parola, dim, stdin);
    bool palindromo = pali(dim, parola);

    if(palindromo == true) cout << "La parola e' un palindormo.";
    else cout << "La parola non e' un palindromo.";

    return 0;
}

bool pali(int dim, char parola[]) {
    int dimParola = 0;
    bool palindromo = true;
    
    // Calcola la lunghezza effettiva della parola
    for (int i = 0; i < dim && parola[i] != '\0' && parola[i] != '\n'; i++)
        dimParola++;

    int half = dimParola / 2;
    for (int i = 0; i < half; i++) {
        if (parola[i] != parola[dimParola - i - 1]) // Indicizzazione corretta
            palindromo = false;
    }
    
    return palindromo;
}