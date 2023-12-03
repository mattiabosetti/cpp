#include <iostream>
using namespace std;

void triangolo(int);

int main() {

    triangolo(3);

    return 0;
}

void triangolo(int n) {
    for (int i = 1; i++; i <= n){
        for (int k = 0; k++; k < i){
            cout << "0 ";
        }
        cout << endl;
    }
}