#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string frase;

    cout << "Inserisci una frase: ";
    getline(cin, frase);

    for(char &carattere : frase){
        if(islower(carattere)) carattere = toupper(carattere);
        else carattere = tolower(carattere);
    }

    cout << "La nuova frase e': " << frase << endl;

    return 0;
}