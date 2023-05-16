#include <iostream>
/*Ejercicio 7 intercambiar el valor de 2 variables utilizando paso de parametros por 
  referencia
*/

using namespace std;
void intercambiar(int&, int&);


int main(){
    int numero1 = 10, numero2 = 15;

    cout<<"El valor de numero1 es: "<<numero1<<endl;
    cout<<"EL valor de numero2 es: "<<numero2<<endl;

    intercambiar(numero1, numero2);

    cout<<"el nuevo valor del num1 es:" <<numero1<<endl;
    cout<<"El nuevo valor de num2 es: "<<numero2<<endl;
    return 0;
}

void intercambiar(int& num1, int& num2){
    int aux;

    aux = num1;
    num1 = num2;
    num2 = aux;
}