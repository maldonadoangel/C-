/*Comparar cadenas - Funcion strcmp()*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra[] = "Hola";
    char palabra2[] = "Hola";

    if(strcmp(palabra,palabra2) == 0){
        cout<<"Ambas cadenas son iguales"<<endl;
    }

    return 0;
}