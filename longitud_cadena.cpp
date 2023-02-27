/*Longitud de una cadena de caracteres - funcion strlen()*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra[] = "Hola";
    int longitud;

    longitud = strlen(palabra);

    cout<<"La longitud del texto es: "<<longitud<<endl; //NOs muestra la longitud del texto incluyendo los espacios
    return 0;
}