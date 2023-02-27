/*Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar 
  todo su contenido hacia otro arreglo de caracteres
*/
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra[100] = "";
    char palabra2[100] = "";

    cout<<"Ingresa el texto que deseas: ";
    cin.getline(palabra, 100, '\n');

    strcpy(palabra2, palabra);

    cout<<"El texto ingresado en la primera fue: "<<palabra<<endl;
    return 0;
}