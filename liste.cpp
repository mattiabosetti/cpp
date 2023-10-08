#include <iostream>
using namespace std;


int main() {

    string macchine[] = {"Tesla", "Ferrari", "Bmw"};
    cout << macchine << endl;
    cout << "*****************" << endl;
    cout << macchine[0] << endl;
    cout << "*****************" << endl;


    for (int i = 0; i < 3; i++){
        cout << macchine[i] << endl;
    }


    cout << endl;
    return 0;
}