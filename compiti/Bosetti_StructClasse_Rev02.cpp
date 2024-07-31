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

void inserisciDati(Studente);

int main(){
    Studente alunnoGenerico;
    inserisciDati(alunnoGenerico);
    return 0;
}

void inserisciDati(Studente alunno){

    cout << "Inserisci il nome dell'alunno: "; cin >> alunno.nome;
    cout << "Inserisci il cognome dell'alunno: "; cin >> alunno.cognome;
    cout << "Inserisci il codice fiscale dell'alunno: "; cin >> alunno.codiceFiscale;
    cout << "Inserisci l'eta dell'alunno: "; cin >> alunno.eta;
    cout << "Inserisci il sesso dell'alunno [m/f]: "; cin >> alunno.sesso;
    cout << "Inserisci un voto di tre materie diverse dell'alunno: " << endl;
    for(int i = 0; i<3; i++) cin >> alunno.voti[i];
}