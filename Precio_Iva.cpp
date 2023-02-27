/*
Escribe un programa que lea de la entrada estándar el precio de un producto
y muestre en la salida estandar el precio del producto al aplicarle iva
*/
#include <iostream>

using namespace std;
int main(){
double cantidadSinIva, totalIva, precioTotal;
const double iva = 0.12;

    cout<<"Bienvenido al calculo de Iva"<<endl;
    cout<<"Ingrese la cantidad que desea calcular el IVA"<<endl;
    cin>>cantidadSinIva;
    totalIva = cantidadSinIva * iva;
    precioTotal = cantidadSinIva + totalIva;
    cout<<"El precio del producto sin Iva es: "<<cantidadSinIva<<" El iva del producto es: "<<totalIva<<" El total con iva incluido es: "<<precioTotal<<endl;

 return 0;
}