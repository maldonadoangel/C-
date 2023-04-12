/*Plantillas de funcion
    Nos sirve para crear un tipo de dato general: entero, flotante o double
*/

/*
    Sacar el valor absoluto de un numero
*/
#include <iostream>

using namespace std;
//Prototipo de funcion, englobaremos el tipo de valor de nuestro valor absoluto
template <class TIPOD>
void mostrarAbsoluto(TIPOD numero);

int main(){
    int numero = -60;
    double numero2 = 54.8;
    float numero3 = -410.01;

    mostrarAbsoluto(numero);
    mostrarAbsoluto(numero2);
    mostrarAbsoluto(numero3);

    return 0;
}

template <class TIPOD>
void mostrarAbsoluto(TIPOD numero){
    if(numero < 0){
        numero = numero * -1;
    }
    cout<<"El valor absoluto del numero es: "<<numero<<endl;
}