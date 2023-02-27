#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra[] = "Angel";
    char nombre[10];

    cout<<"Digite su nombre: ";
    cin.getline(nombre,10,'\n'); //cin.getline, solo nos deja colocar la cantidad de texto necesaria en este caso 10
    cout<<nombre<<endl;


    return 0;
}