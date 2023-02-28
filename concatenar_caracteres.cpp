/*Crear una cadena que tenga la siguiente frase, "Hola que tal", luego crear otra cadena para preguntar
  al usuario su nombre, por ultimo añadir el nombre al final de la primera cadena y mostrar  el mensaje
  completo "Hola que tal (Nombre de usuario)"
*/
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char nombre[100], frase[] = " Hola que tal";

    cout<<"Ingrese su nombre: "; cin.getline(nombre, 100, '\n');
    cout<<strcat(nombre,frase)<<endl;
    return 0;
}