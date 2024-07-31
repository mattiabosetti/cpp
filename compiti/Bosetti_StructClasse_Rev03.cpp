#include <iostream>
#include <string>
using namespace std;

struct Studente{
    string nome;
    string cognome;
    string codiceFiscale;
    int eta;
    char sesso;
    int voti[3];
};

void inserisciDati(Studente, int);

int main(){
    Studente classe[20];

    for(int i = 0; i<20; i++){
        inserisciDati(classe[i], i);
    }

    return 0;
}

void inserisciDati(Studente alunno, int n){

    cout << "Inserisci il nome dell'alunno " << n+1 << ": "; cin >> alunno.nome;
    cout << "Inserisci il cognome dell'alunno " << n+1 << ": "; cin >> alunno.cognome;
    cout << "Inserisci il codice fiscale dell'alunno " << n+1 << ": "; cin >> alunno.codiceFiscale;
    cout << "Inserisci l'eta dell'alunno " << n+1 << ": "; cin >> alunno.eta;
    cout << "Inserisci il sesso dell'alunno [m/f] " << n+1 << ": "; cin >> alunno.sesso;
    cout << "Inserisci un voto di tre materie diverse dell'alunno " << n+1 << ": " << endl;
    for(int i = 0; i<3; i++) cin >> alunno.voti[i];
}