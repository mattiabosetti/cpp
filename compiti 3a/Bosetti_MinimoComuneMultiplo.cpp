#include <iostream>
using namespace std;


int main() {
	int n1, n2, mcm;

	cout << "Inserisci il primo numero: ";
	cin >> n1;
	cout << "Inserisci il secondo numero: ";
	cin >> n2;

	if( n1 >= n2 ){ mcm = n1; }
	else { mcm = n2; }

	while(true) {
		if( mcm % n1 == 0 && mcm % n2 == 0){break;}
		mcm++;
	}
	
	cout << "Il minimo comune multiplo tra " << n1 << " e " << n2 << " è: " << mcm << "\n";


	return 0;
}