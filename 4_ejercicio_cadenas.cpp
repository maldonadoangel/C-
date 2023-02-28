/*Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas son iguales, en caso de no serlo indicar cual es el mayor*/
/*
    En este ejercicio compararemos avion y becerro, sabemos que becerro es mayor alfabeticamente ya que va despues de la A
*/
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra[200];
    char palabra2[200];

    cout<<"Ingresa la primera palabra: ";
    cin.getline(palabra, 200, '\n');
    cout<<"Ingrese la segunda palabra: ";
    cin.getline(palabra2, 200, '\n');
    cout<<strcmp(palabra, palabra2)<<endl;
    if(strcmp(palabra, palabra2) == 0){
        cout<<"Ambas cadena de caracteres son iguales"<<endl;
    }
    if(strcmp(palabra, palabra2) > 0){
        cout<<"La primera palabra es mayor: "<<palabra<<endl;
    }
    if(strcmp(palabra, palabra2) < 0){
        cout<<"La segunda palabra es mayor: "<<palabra2<<endl;
    }
    return 0;
}