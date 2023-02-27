/*
    La sentencia while:

    while(expresion logica){
        conjunto de instrucciones;
    }
*/
#include <iostream>


using namespace std;

int main(){
    int i;
    i = 1;
    int j=10;

    while (i<= 10)
    {
        cout<<"Incremento del numero: "<<i<<endl;
        i++;
    }
    
    while (j>=1){
        cout<<"Decremento del numero: "<<j<<endl;
        j--;
    }
    
    return 0;
}