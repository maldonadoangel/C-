/*Metodo de inserccion*/
#include <iostream>

using namespace std;

int main(){
    int numeros[] = {4,6,1,3,2,5};
    int posicion, auxiliar, i, longitud;

    longitud = sizeof(numeros)/sizeof(numeros[0]);


    for(i = 0; i<longitud; i++){
        posicion = i;
        auxiliar = numeros[i];

        while((posicion > 0) && (numeros[posicion - 1] > auxiliar)){
            numeros[posicion] = numeros[posicion-1];
            posicion--;

        }
        numeros[posicion] = auxiliar;
    }


    /*Ordenado de forma ascendete*/

    for(i = 0; i<longitud; i++){
        cout<<numeros[i]<<" ";
    }

    return 0;
}