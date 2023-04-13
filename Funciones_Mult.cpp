#include <iostream>
/*Ejercicio: Escriba una funcion llamada multiplicar() que acepte dos numeros en punto
  flotante como parametros, multiplique estos dos numeros y despliegue el resultado
*/
using namespace std;

//Prototipos de funcion
void obtenerDatos();
void multiplicar(float x, float y);
//Variables globales
float numero1, numero2;

int main(){
    obtenerDatos();
    multiplicar(numero1, numero2);

    return 0;
}

void obtenerDatos(){
    cout<<"Digite 2 Numeros"<<endl;
    cout<<"Numero 1: "; cin>>numero1;
    cout<<"Numero 2: "; cin>>numero2;
}

//Al decir el ejercicio que se despliega dejamos la funcion como void, debido a que no retorna nada
//solo imprimimos en pantalla el resultado
void multiplicar(float numero1, float numero2){
    float multiplicacion = numero1 * numero2;

    cout<<"La multiplicacion de los dos numeros es: "<<multiplicacion<<endl;
}