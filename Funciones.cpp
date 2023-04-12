#include <iostream>


using namespace std;
//prototipo de funcion
int numeroMayor(int x, int y);

int main(){
    int numero1, numero2 = 0;

    cout<<"Ingresa tu primer numero: ";
    cin>>numero1;
    cout<<"Ingresa tu segundo numero: ";
    cin>>numero2;

    int numeroMax = numeroMayor(numero1, numero2);
    cout<<"El numero mayor es: "<<numeroMax<<endl;
    

    return 0;
}


//Definicion de funcion

int numeroMayor(int x, int y){
    
    if(x > y){
        return x;
    }else{
        return y;
    }
}