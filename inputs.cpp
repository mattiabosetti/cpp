#include <iostream>
using namespace std;

int main(){

    string nome;

    cout << "Come ti chiami? ";
    cin >> nome;                   // oppure si può fare: getline(cin, nome)
    cout << "Ciao " + nome;
    cout << endl;

    return 0;
}
