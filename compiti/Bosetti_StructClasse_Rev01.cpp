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

int main(){
    Studente alunnoGenerico;
    
    cout << "Inserisci il nome dell'alunno: "; cin >> alunnoGenerico.nome;
    cout << "Inserisci il cognome dell'alunno: "; cin >> alunnoGenerico.cognome;
    cout << "Inserisci il codice fiscale dell'alunno: "; cin >> alunnoGenerico.codiceFiscale;
    cout << "Inserisci l'eta dell'alunno: "; cin >> alunnoGenerico.eta;
    cout << "Inserisci il sesso dell'alunno [m/f]: "; cin >> alunnoGenerico.sesso;
    cout << "Inserisci un voto di tre materie diverse dell'alunno: " << endl;
    for(int i = 0; i<3; i++) cin >> alunnoGenerico.voti[i];

    return 0;
}

