/*Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor
  que se le transmite y despliegue el resultado. La funcion debera ser capaz de elevar
  al cuadrado numeros flotantes
*/
#include <iostream>

using namespace std;

//Plantilla y prototipo de funcion
void obtenerDatos();
template <class TipoD> 
void al_cuadrado(TipoD numero); 

int numero = 3;
double numero2 = 3.5;
float numero3 = 6.41;
int main(){
    al_cuadrado(numero);
    al_cuadrado(numero2);
    al_cuadrado(numero3);
    return 0;
}


template<class TipoD> 
void al_cuadrado(TipoD numero){
    TipoD numeroCuadrado = numero * numero;
    cout<<"El numero cuadrado es: "<<numeroCuadrado<<endl;

}