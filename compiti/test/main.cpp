#include <iostream>
using namespace std;

int main() {
    int size = 20;
    char frase[size];
    int a = 0;

    cout << "Inserisci una frase (massimo 20 caratteri): ";
    fgets(frase, size, stdin);

    for(int i = 0; i < size; i++){
        if(frase[i] == 'a') a++;
    }
    fputs(frase, stdout);
    cout << "A e' stato trovato " << a << " volte" << endl;

    return 0;
}
