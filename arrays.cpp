/*1. Escribe un programa que defina un vector de un número y calcule la suma de 
     sus elementos
*/
#include <iostream>
#include <array>
using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5};
    int suma = 0;
    int longitudArray;
    longitudArray = sizeof(numeros)/sizeof(numeros[0]); // Calcular el largo de nuestro arreglo
    cout<<"Longitud de arreglo: "<<longitudArray<<endl;

    for(int i=0; i<longitudArray; i++){
        suma = suma + numeros[i];
    }

    cout<<"La suma de todos los numeros del arreglo es: "<<suma<<endl;
    return 0;
}