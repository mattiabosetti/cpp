#include <iostream>
using namespace std;

int main(){
    int n, neg = 0, pos = 0, par = 0, dis = 0, num = 0;

    cout << "Inserisci i quanti numeri vuoi in totale: ";
    do{ cin >> n; }
    while( n <= 0 );


    for( int i = 0; i<n; i++ ){
        cout << "Inserisci il numero " << i+1 << ": ";
        cin >> num;

        if( num < 0 ) { neg++; }
        else { pos++; }

        if( num%2 == 0 || num == 0 ){ par++; }
        else { dis++; }
    }

    cout << "Il " << par*100/n << "% e' pari\n";
    cout << "Il " << dis*100/n << "% e' dispari\n";
    cout << "Il " << neg*100/n << "% e' negativo\n";
    cout << "Il " << pos*100/n << "% e' positivo\n";



    return 0;
}