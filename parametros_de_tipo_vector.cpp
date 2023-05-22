/*
  Paso de parametros de tipo vector

  parametros de la funcion:
    void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo)


    llamada a la funcion
        nombreDeFuncion(nombreArreglo, tamañoArreglo)

*/

//Cuadrados de los elementos del vector
#include <iostream>

void cuadrado(int vec[], int);
void mostrarVector(int vec[], int);

using namespace std;


int main(){

    const int TAMANIO = 5;
    int vec[TAMANIO] = {1,2,3,4,5};

    cuadrado(vec, TAMANIO);
    mostrarVector(vec, TAMANIO);




    return 0;
}

void cuadrado(int vec[],int TAMANIO){
    for(int i = 0; i<TAMANIO; i++){
        vec[i] = vec[i] * vec[i];
    }
}

void mostrarVector(int vec[], int TAMANIO){
    for(int i = 0; i<TAMANIO; i++){
        cout<<"Posicion: "<<i<<" = "<<vec[i]<<endl;
    }
}