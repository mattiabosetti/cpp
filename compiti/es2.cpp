#include <iostream>
#include <math.h>
using namespace std;

void triangolo(float, float, float &, float &, float &);

int main(){
    float cateto1, cateto2, ipotenusa=0, area=0, perimetro=0;
    do
    {
        cout << "Inserisci il primo cateto del triangolo: "; cin >> cateto1;
        cout << "Inserisci il secondo cateto del triangolo: "; cin >> cateto2;
    } while(cateto1 <= 0 || cateto2 <= 0);

    triangolo(cateto1, cateto2, ipotenusa, area, perimetro);

    cout << "L'ipotenusa vale: " << ipotenusa << endl;
    cout << "L'area vale: " << area << endl;
    cout << "Il perimetro vale: " << perimetro << endl;

    return 0;
}

void triangolo(float c1, float c2, float &i, float &a, float &p){
    i = sqrt(pow(c1, 2) + pow(c2, 2));
    a = (c1*c2)/2;
    p=c1+c2+i;
}
