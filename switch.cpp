#include <iostream>
using namespace std;

int main() {

    int mese;
    cout << "Inserisci un mese: ";
    cin >> mese;

    switch(mese){
        case 1:
            cout << "E' gennaio";
            break;
        case 2:
            cout << "E' febbraio";
            break;
        case 3:
            cout << "E' marzo";
            break;
        case 4:
            cout << "E' aprile";
            break;
        case 5:
            cout << "E' maggio";
            break;
        case 6:
            cout << "E' giugno";
            break;
        case 7:
            cout << "E' luglio";
            break;
        case 8:
            cout << "E' agosto";
            break;
        case 9:
            cout << "E' settembre";
            break;
        case 10:
            cout << "E' ottobre";
            break;
        case 11:
            cout << "E' novembre";
            break;
        case 12:
            cout << "E' dicembre";
            break;
        default:
            cout << "Non hai inserito un numero da 1 a 12";
    }


    cout << endl;
    return 0;
}