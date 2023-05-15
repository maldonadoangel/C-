//Parametros por referencia
#include <iostream>

using namespace std;
//Prototipo de la funcion
void valNuevo(int&, int&);

int main(){
    int num1, num2;

    cout<<"Digite 2 numeros: ";
    cin>>num1>>num2;

    valNuevo(num1,num2);
     cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
     cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;

    return 0;
}

// para pasar la direccion se usa &
void valNuevo(int& num1, int& num2){
    cout<<"El valor del primer numero es: "<<num1<<endl;
    cout<<"El valor del segundo numero es: "<<num2<<endl;
    //Pasamos nuevos valores por referencia
    num1 = 90;
    num2 = 50;
}