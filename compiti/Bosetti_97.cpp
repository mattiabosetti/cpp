#include <iostream>
using namespace std;

void matrice(int, int [][4]);
void stampa(int n, int m[][4]);

int main(){
    int m[4][4];
    matrice(4, m);
    stampa(4, m);
    return 0;
}

void matrice(int n, int m[][4]){
    for( int i = 0; i < n; i++ )
        for( int j = 0; j < n; j++ )
            if(i == 0 || i == 3 || j == 0 || j == 3) m[i][j]=0;
            else m[i][j]=1;
}

void stampa(int n, int m[][4]){
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ )
            cout << m[i][j] << " ";
        cout << endl;
    }

}