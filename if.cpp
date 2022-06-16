#include <iostream>
using namespace std;

int main() {

    int eta = 19;
    bool adulto;

    if (eta >= 18) {
        cout << "Sei maggiorenne\n";
        adulto = true;
    } else {
        cout << "Sei minorenne\n";
        adulto = false;
    }

    if (adulto) {
        cout << "Sei un adulto";
    } else {
        cout << "Non sei un adulto";
    }

    cout << endl;
    return 0;
}