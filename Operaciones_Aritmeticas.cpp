/*1. Escribe un programa que lea de la entrada estándar dos números y muestre en la salida
estandar su suma, resta, multiplicacion y division.*/
#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){
double numero1,numero2,total;
int opcion;

    cout<<"Bienvenido al programa de Operaciones Aritmeticas"<<endl;
    cout<<"1. Suma"<<endl;
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicacion"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"Elige una Opcion: ";
    cin>>opcion;

    if(opcion == 1){
        system("cls");
        cout<<"Bienvenido a la seccion de suma"<<endl;
        cout<<"Ingresa tu primer Numero"<<endl;
        cin>>numero1;
        cout<<"Ingresa tu segundo Numero"<<endl;
        cin>>numero2;
        total = numero1 + numero2;
        cout<<"El total de la suma es: " <<total<<endl;
        exit(0);
    }
    if(opcion == 2){
        system("cls");
        cout<<"Bienvenido a la seccion de resta"<<endl;
        cout<<"Ingresa tu primer Numero"<<endl;
        cin>>numero1;
        cout<<"Ingresa tu segundo Numero"<<endl;
        cin>>numero2;
        total = numero1 - numero2;
        cout<<"La resta de los dos numeros es: " <<total<<endl;
        exit(0);
    }
    if(opcion == 3){
        system("cls");
        cout<<"Bienvenido a la seccion de multiplicacion"<<endl;
        cout<<"Ingresa tu primer Numero"<<endl;
        cin>>numero1;
        cout<<"Ingresa tu segundo Numero"<<endl;
        cin>>numero2;
        total = numero1 * numero2;
        cout<<"La multiplicacion de los dos numeros es: " <<total<<endl;
        exit(0);
    }
    if(opcion == 4){
        system("cls");
        cout<<"Bienvenido a la seccion de division"<<endl;
        cout<<"Ingresa tu primer Numero"<<endl;
        cin>>numero1;
        cout<<"Ingresa tu segundo Numero"<<endl;
        cin>>numero2;
        if(numero2 == 0){
            cout<<"El numero cero como Denominador es igual a infinito."<<endl;
            cout<<"Se le sumara el valor de 1 a tu numero cero."<<endl;
            numero2++;
        }
        total = numero1 / numero2;
        cout<<"La Division de los dos numeros es: " <<total<<endl;
        exit(0);
    }
    else{
        cout<<"Opcion invalida, el programa ha finalizado"<<endl;
    }
    system("pause");
    return 0;
}