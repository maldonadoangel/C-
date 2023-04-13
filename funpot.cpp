/*Escriba una funcion nommbrada funpot() que eleve un numero entero que se le
  transmita a una potencia en numero entero positivo y despliegue el resultado
  El numero entero positivo debera ser el segundo valor transmitido a la funcion
*/
#include <iostream>
#include <math.h>

using namespace std;

//prototipo de la funcion
void obtenerDatos();
template <class TypeD, class TypeD2> void funpot(TypeD numero, TypeD2 potencia);

//Variables globales
int numero = 0;
int potencia = 0;
double total;
int main(){
    obtenerDatos();
    funpot(numero, potencia);

    return 0;
}

void obtenerDatos(){
    cout<<"Ingrese un numero: "; cin>>numero;
    cout<<"Ingrese la potencia de su numero: "; cin>>potencia;
}
template <class TypeD, class TypeD2> void funpot(TypeD numero, TypeD2 potencia){
    if(potencia >=0){
      double total = pow(numero, potencia); //El metodo pow es gracias a la libreria math.h, establecemos como parametro un numero base y el otro como exponente
      cout<<"El numero: "<<numero<<" y la potencia: "<<potencia<<" dan como resultado: "<<total<<endl;
    }else{
        cout<<"La potencia ingresada debe ser igual o mayor a cero."<<endl;
    }
}