#include <iostream>
using std::cout;
using std::endl;

void swap(int &, int &);
void bubbleSort(int [], int);
void print(int [], int);

int main(){
    int dim = 5;
    int vet[] = {5, 19, 7, 15, 16};

    print(vet, dim);
    bubbleSort(vet, dim);
    print(vet, dim);

    return 0;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int vector[], int dim){
    for(int j = 0; j<dim; j++)
        for(int i = 0; i<dim-j; i++){
            if(vector[i]>vector[i+1])
                swap(vector[i], vector[i+1]);
        }
}

void print(int vector[], int dim){
    for(int i = 0; i<dim; i++)
        cout << vector[i] << " ";
    cout << endl;
}