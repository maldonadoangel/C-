#include <iostream>
#include <string.h>

using namespace std;

int main(){
string nombre;


    cout<<"Hola Mundo"<<endl;
    cout<<"Ingresa tu nombre"<<endl;
    getline(cin, nombre);
    cout<<"Tu nombre es: " + nombre<<endl;
    return 0;
}