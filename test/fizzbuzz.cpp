#include <iostream>
using namespace std;

void fizzbuzz(int n) {
    if (n%5 == 0 && n%3 == 0) { cout << "FizzBuzz" << endl; return;}

    if (n%3 == 0) {cout << "Fizz" << endl; return;}

    if (n%5 == 0) {cout << "Buzz" << endl; return;}

    else {cout << n << endl; return;}
}

int main() {
    for (int i = 1; i <= 30; i++) {
        fizzbuzz(i);
    }

    return 0;
}