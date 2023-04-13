#include<iostream>
#include <math.h>
#include <cmath>
using namespace std;

//Prototipo de funcion
void obtenerDatos();
template <class TypeD> void sinNumeroEntero(TypeD numero);

double numero;
double auxiliar = 0;
int main(){
    obtenerDatos();
    sinNumeroEntero(numero);
    return 0;
}

void obtenerDatos(){
    cout<<"Ingresa tu numero con decimales: "; cin>>numero;
}

template <class TypeD> void sinNumeroEntero(TypeD numero){
    auxiliar = auxiliar + numero;
    auxiliar = (int)auxiliar;
    cout<<"El numero sin el entero es: "<<numero - auxiliar;

}