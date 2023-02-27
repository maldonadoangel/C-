/*Mostrar una matriz ya definida de 3x3 y luego mostrar la matriz transpuesta*/
#include <iostream>
/*
    Original       Transpuesta
    10 10 44      10 44 30
    44 19 20      10 19 43
    30 43 63      44 20 63
*/
using namespace std;

int main(){
    int numeros[3][3] = {10,10,44,
                         44, 19, 20,
                         30, 43, 63};
    int filas = 3, columnas = 3;

    //mostrar la matriz
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<numeros[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
    cout<<endl;
    //Mostrar la matriz transpuesta
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<numeros[j][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}