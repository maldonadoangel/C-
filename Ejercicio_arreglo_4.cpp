/*Ejercicio 4, sumar dos matrices*/
#include <iostream>

using namespace std;
int main(){
    int numeros[3][3] = {1,2,3,
                         3,2,1,
                         0,1,2};
     int numeros2[3][3] = {1,2,3,
                         3,2,1,
                         0,1,2};

    //Mostrar primer matriz
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<numeros[i][j]<<"  ";

        }
        cout<<"\n";
    }
    cout<<endl;
    cout<<endl;
    //Mostrar segunda matriz
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<numeros2[i][j]<<"  "; 

        }
        cout<<"\n";
    }
    cout<<endl;
    cout<<endl;
     //Mostrar La suma de las dos matrices
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<numeros[i][j] + numeros2[i][j]<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}