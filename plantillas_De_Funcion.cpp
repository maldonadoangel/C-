/*
    Plantillas de funcion

    ejemplo: Sacar el valor absoluto de un número
*/
#include <iostream>
#include <math.h>
using namespace std;

double valorAbsoluto(double x);

int main(){

    double numero;
    double valorAbs;

    cout<<"Ingrese su numero: ";cin>>numero;

    valorAbs = valorAbsoluto(numero);

    cout<<valorAbs<<endl; 

    return 0;
}

double valorAbsoluto(double x){
    

    if(x < 0){
        x = (x * -1); 
    }

    return x;


}