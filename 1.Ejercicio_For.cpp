/*Ejercicio 1. El usuario debe ingresar un numero en la entrada estandar
    y con un bucle for mostrarnos la tabla de multiplicar
*/
#include <iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Ingrese un numero para mostrar la tabla de multiplicar del 1 al 10"<<endl;
    cin>>numero;

    for(int i = 1; i<= 10; i++){
        cout<<"La tabla de multiplicar de: "<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }
    return 0;
}