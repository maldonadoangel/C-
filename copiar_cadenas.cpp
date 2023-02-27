/*Copiar el contenido de una cadena a otra - Funcion strcpy()*/
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char nombre[] = "Angel";
    char nombre2[20];

    strcpy(nombre2, nombre);

    cout<<"Se copio el contenido del primer arreglo de char: "<<nombre2<<endl;
    return 0;
}