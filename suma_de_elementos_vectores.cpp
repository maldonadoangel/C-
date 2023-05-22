#include <iostream>

using namespace std;

int sumaVector(int vector[], int);

int main(){
    const int TAMANIO = 5;
    int total = 0;
    int vector[TAMANIO] = {1,2,3,4,5};

    cout<<"La suma de los elementos del vector: "<<sumaVector(vector, TAMANIO)<<endl;
  

    return 0;
}

int sumaVector(int vector[], int TAMANIO){
   int total = 0;
    for(int i = 0; i<TAMANIO; i++){
        total = total + vector[i];
    }
    
    return total;
}

