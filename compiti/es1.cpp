#include <iostream>
using namespace std;

int cifreNumero(int n){
    int cifre = 0;
    while(n > 0){
        n = (n-(n%10))/10;
        cifre++;
    }
    return cifre;
}