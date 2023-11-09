#include <iostream>
using namespace std;

int main(){
	int i = 1, n, h=1, a=1;

	cout << "Inserisci quante righe del triangolo di Floyd devo stampare: ";
	cin >> n;
	while(n<=0){
		cout << "Il numero deve essere maggiore di 0, riprova: ";
		cin >> n;
	}

	while(i<=n){
		while(h<=i){
			cout << a << " ";
			a++;
			h++;
		}
		cout << "\n";
		i++;
		h = 1;
	}


	return 0;
}