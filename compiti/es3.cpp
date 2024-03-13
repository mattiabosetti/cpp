#include <iostream>
using namespace std;

int main(){
    int par=0, n, tot=0;
    while(n>=0)
    {
        cout << "Inserisci un numero (negativo per terminare): "; cin >> n;
        if(n%2==0 && n>=0) par++;
        tot++;

    }

    tot--;
        
    cout << "Numeri totali inseriti: " << tot << endl;
    cout << "Numeri pari inseriti: " << par << endl;

    return 0;
}