/*Hacer una matriz preguntando al usuario el numero de filas y columnas
  llenarla de numeros aleatorios, copiar el contenido a otra matriz
  y por ultimo mostrarla en pnatalla
*/
#include <iostream>
#include <cstdlib> // libreria para funcion rand() para numeros aleatorios

using namespace std;

int main(){
    int numeros[100][100], segundaMatriz[100][100], filas, columnas, numero;

    cout<<"Ingrese el numero de filas que desea en su matriz: "; cin>>filas;
    cout<<"Ingrese el numero de columnas que desea en su matriz: "; cin>>columnas;
    

    //Crear matriz con numeros aleatorios
    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            numero = rand() % 10; //Obtiene numeros aleatorios entre 0 y 10, no incluye el 11
            numeros[i][j] = numero;
        }
    }

    //Mostrar la matriz creada con numeros aleatorios
    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }

    cout<<endl;
    cout<<endl;
    //Llenar los datos a la segunda matriz
    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            segundaMatriz[i][j] = numeros[i][j];
        }
    }

    cout<<"Esta es la segunda matriz con los datos de la primera: "<<endl;
    //Mostrar la matriz donde se pasaron todos los numeros
    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            cout<<segundaMatriz[i][j];
        }
        cout<<"\n";
    }

    return 0;
}