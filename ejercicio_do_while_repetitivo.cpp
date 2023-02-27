/* Realice un programa que lea de la entrada estandar numeros hasta
    que se introduzca un cero. En ese momento el programa debe terminar
*/

#include <iostream>

using namespace std;

int main(){
    double numero;
    int contador = 0;
    
    do{
        cout<<"Ingrese un valor mayor a cero"<<endl;
        cin>>numero;
        if(numero > 0){
            contador++;
        }
    }while(numero != 0);
    cout<<"La cantidad de numeros mayores a cero fueron: "<<contador<<endl;
   cout<<"FIn del programa"<<endl;
    return 0;
}