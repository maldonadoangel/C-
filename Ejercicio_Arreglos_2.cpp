/*2. Realizar un arreglo en el cual vamos a calcular la multiplicación de todos los elementos*/
#include <iostream>

using namespace std;

int main(){
    int arregloNumeros[] = {1,2,3,4,5,6,7,8,9};
    int total = 1, longitudArreglo;

    longitudArreglo = sizeof(arregloNumeros)/sizeof(arregloNumeros[0]);

    for(int i = 0; i < longitudArreglo; i++){
        total = total * arregloNumeros[i];
    }

    cout<<"La multiplicacion de los numeros es: "<<total<<endl; /*La respuesta correcta es: 362,880*/
    return 0;
}
