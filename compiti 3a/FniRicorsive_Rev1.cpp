#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> sequenza;

vector<int> fibonacci(int N) {
    vector<int> sequence;

    if (N >= 1) {
        sequence.push_back(0);
    }
    if (N >= 2) {
        sequence.push_back(1);
    }

    for (int i = 2; i < N; ++i) {
        sequence.push_back(sequence[i - 1] + sequence[i - 2]);
    }

    return sequence;
}

int main() {

    return 0;
}