#include <iostream>
#include <cstring>
using namespace std;

int contaVocali(const char* str);

int main() {
    char str[100];

    cout << "Inserisci una stringa: ";
    cin.getline(str, 100);

    int numeroVocali = contaVocali(str);

    cout << "Il numero di vocali nella stringa e': " << numeroVocali << endl;

    return 0;
}

int contaVocali(const char* str) {
    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    return count;
}
