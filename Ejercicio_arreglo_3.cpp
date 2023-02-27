/* 4. Realizar un arreglo de numeros y verificar si uno de los numeros equivale a la suma de los demas*/
#include <iostream>

using namespace std;

int main(){
    //1,2,3,4,10
    int numeros[] = {1,2,3,4,10}; //1,2,3,4 equivalen en suma al numero 10
    int longitudArreglo,suma = 0, mayor = 0;
    longitudArreglo = sizeof(numeros)/sizeof(numeros[0]);
    int sumaSinMayor;
    for(int i = 0; i<longitudArreglo; i++){

        suma = suma + numeros[i]; // se sumaran los valores del arreglo uno por uno

        if(numeros[i] > mayor){
            mayor = numeros[i]; //verificamos cual es el mayor con el if y asignamos el valor a la variable mayor
        }
    }

    sumaSinMayor = suma - mayor;
    if(mayor == sumaSinMayor){
        cout<<"Si existe un numero que equivale a la suma de los otros y es: "<<mayor<<endl; 
    }else{
        cout<<"No existe un numero que equivale a la suma de otros y la suma de todos en el arreglo es: "<<suma<<endl;
    }

    return 0;
}