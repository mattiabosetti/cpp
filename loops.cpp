#include <iostream>
#include <string>
using namespace std;

int main() {

        /* while(1==1){
            cout << "Loop infinito\n";
        } */
        int num = 1;

        string risposta;
        do {
            cout << "Stai giocando" << endl;
            cout << "Premi q per quittare: ";
            getline(cin, risposta);
            cout << "*********************************" << endl;
        } while(risposta.at(0)!='q' && risposta.at(0)!='Q');

        cout << "Hai quittato il gioco" << endl;

    return 0;
}