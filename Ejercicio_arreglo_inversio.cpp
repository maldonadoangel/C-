/*3. Escriba un programa que defina un vector de numeros y muestre en la salida
     estandar el vector en orden inverso-del ultumo al primer elemento;
*/
#include <iostream>

using namespace std;

int main(){
    int numeros [] = {1,2,3,4,5,6,7,8};
    int longitudArreglo;

    longitudArreglo = sizeof(numeros)/sizeof(numeros[0]);

    for(int i = longitudArreglo - 1; i>=0; i--){
            cout<<numeros[i]<<endl;
    }
    return 0;
}