/*Hacer un programa que pida al usuario que digite una cadena de caracteres
  luego verificar la longitud de la cadena, y si esta supera a 10 caracteres
  mostrarla en pantalla, caso contrario no mostrarla
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena[100] = "";
    int longitud = 0;


    cout<<"Ingrese una palabra para verificar si es mayor a 10: ";
    cin.getline(cadena,100,'\n');

    longitud = strlen(cadena);
    cout<<"Longitud de cadena: "<<longitud<<endl;
    if(longitud > 10){
        cout<<"Esta cadena supera los 10 caracteres se mostrara en pantalla"<<endl;
        cout<<cadena<<endl;
    }else{
        cout<<"La cadena no supera los 10 caracteres"<<endl;
    }
    return 0;
}