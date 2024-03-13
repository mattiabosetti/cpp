#include <iostream>
using namespace std;

void swapIndici(int [], int []);

int main(){
    int v0[5] = {5 , 7 , 8 , 9, 10};
    int v1[5];

    swapIndici(v0, v1);

    for (int i = 0; i<5; i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}

void swapIndici(int vettore[], int v2[]){
    for( int i = 0; i<5; i++ ){
        if( i%2 == 0 ) {v2[i] = 0;}
        else {v2[i] = vettore[i];}
    }
}
