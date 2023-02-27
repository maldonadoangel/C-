#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int i;

    i = 11;

    do{
        cout<<i<<endl;
        i++; //Aumenta el iterador de 1 en 1
    }while(i<=10);
    system("pause");
    return 0;
}