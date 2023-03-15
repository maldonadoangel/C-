//Ejemplo encontrar el mayor de 2 numeros
#include <iostream>

using namespace std;

//Propotipo de función
int encontrarMayor(int x, int y);

int main(){
    int numero1, numero2;

    cout<<"Ingrese el primer numero: ";cin>>numero1;
    cout<<"Ingrese el segundo numero: ";cin>>numero2;
    
    cout<<"El numero mayor es: "<<encontrarMayor(numero1, numero2)<<endl;

    return 0;
}

//Definicion de funcion
int encontrarMayor(int x, int y){
    int numeroMayor;

    if(x>y){
        numeroMayor = x;
    }
    else{
        numeroMayor = y;
    }

    return numeroMayor;
}