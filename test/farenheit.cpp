#include <iostream>
using namespace std;

double toFarenheit(double temp) {

  double finalTemp = (temp * 9/5) + 32;
  return finalTemp;

};

double toCelsius(double temp) {

  double finalTemp = (temp - 32) * 5/9;
  return finalTemp;

};


int main() {

  char a;

  do{

      string risposta;

      cout << "Vuoi convertire in celsius[c] o farenheit[f]? ";
      cin >> risposta;


      if(risposta == "c" || risposta == "celsius"){
        int input;
        cout << "Scrivi i gradi da convertire in celsius: ";
        cin >> input;

        double temp = toCelsius(input);
        cout << "I gradi sono: " << temp;

        a = 'a';
      }
      else if (risposta == "f" || risposta == "farenheit") {
          int input;
          cout << "Scrivi i gradi da convertire in farenheit: ";
          cin >> input;

          double temp = toFarenheit(input);
          cout << "I gradi sono: "<< temp;

          a = 'a';
      } else {
        cout << ">>>>>>Scrivi una scelta valida<<<<<<" << endl << endl;
      }


  }while(a != 'a');




  cout << endl;
  return 0;
}
