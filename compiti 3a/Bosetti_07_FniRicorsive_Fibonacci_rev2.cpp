#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int n;
    
    do{cout << "Inserisci un numero maggiore di 0: "; cin >> n;}
    while(n <= 0);

    cout << "Il " << n << " numero di Fibonacci è: " << fibonacci(n-1) << endl;

    return 0;
}