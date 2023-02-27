
#include <iostream>

using namespace std;


int main(){
    int numeros[100][100], filas, columnas;

/*Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas 
y columnas, posteriormente mostrar la matriz en pantalla*/

    cout<<"Digite el numero de filas:"; cin>>filas;
    cout<<"Digite el numero de columnas:"; cin>>columnas;

    //Almacenamos elementos en la matriz
    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; //[0][0] inicia en esta posicion
            cin>>numeros[i][j];
        }
    }

    //Mostrar matriz en pantalla
    for(int i=0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }
    
    return 0;
}