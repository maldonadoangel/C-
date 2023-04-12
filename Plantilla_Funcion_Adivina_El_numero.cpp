#include <iostream>
#include <stdlib.h>
#include <ctime>//en c++

using namespace std;
//Prototipo de la funcion
template <class TipoD> void numeroMagico(TipoD numero);

int main(){
int numero = 0;
    numeroMagico(numero);
    return 0;
}

template <class TipoD> void numeroMagico(TipoD numero){
//Usar srand para iniciar la semilla random, 
srand(time(NULL)); //Es lo mas comun para tomar el tiempo y varie el numero magico
int numeroMagico = rand() % 10;
int contador = 0;
do{
 contador++;
 cout<<"Ingresa tu numero: ";
 cin>>numero;
}while(numero != numeroMagico);

cout<<"Felicidades el numero magico era: "<<numeroMagico<<endl;
cout<<"El numero de intentos es: "<<contador;
}