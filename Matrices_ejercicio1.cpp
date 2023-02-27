/*Realizar un programa que defina una matriz 3x3 y escriba un ciclo
  para que muestre la diagonal principal de la matriz
*/
#include <iostream>

using namespace std;

int main(){
    int numeros[3][3] = {1,2,3,
                         3,2,1,
                         4,5,6};
    int filas = 3, columnas = 3;
  

    //Mostramo la matriz completa
    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }
    cout<<endl;
    cout<<endl;
    cout<<"La diagonal principal es: "<<endl;
    //Mostramos solo la diagonal
    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            if(i == j){
                cout<<numeros[i][j];
            }
        }
        cout<<"\n";
    }
    return 0;
}