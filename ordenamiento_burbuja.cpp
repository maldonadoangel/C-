/*Metodo burbuja*/

#include <iostream>


using namespace std;

int main(){
    int numeros[] = {4,1,2,3,5};
    int i,j,aux;
    int longitud;

    longitud = sizeof(numeros)/sizeof(numeros[0]);

    //Algoritmo del metodo burbuja
    for(i=0; i<longitud; i++){
        for(j=0; j<longitud; j++){
            if(numeros[j] > numeros[j+1]){
                aux = numeros[j]; //
                numeros[j] = numeros[j+1]; //
                numeros[j+1] = aux; //
            }
        }
    }

    cout<<"Orden Ascendente: ";
    for(i=0; i<5; i++){
        cout<<numeros[i]<<" ";
    }

    cout<<"Orden Descendente:";
    for(i=longitud - 1; i>=0; i--){
        cout<<numeros[i]<<" ";
    }
    return 0;
}