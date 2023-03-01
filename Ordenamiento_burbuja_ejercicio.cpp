/*Dado el siguiente arreglo, debe de ordenarlo*/

#include <iostream>

using namespace std;

int main(){

    int numeros[] = {1,4,2,3,6,5,7,9,8,10,13,11,12};
    int i,j,aux, longitud;

    longitud = sizeof(numeros)/sizeof(numeros[0]);
    /*Metodo de burbuja*/

    for(i = 0; i<longitud; i++){ //Este for es para recorrer el arreglo desordenado
        for(j = 0; j<longitud; j++){ //Este for es para poder evaluar la posicion actual y la siguiente
            if(numeros[j] > numeros[j+1]){ //Evaluamos con un if si el numero actual es mayor al siguiente
                aux = numeros[j]; //en caso de ser asi, asignamos el valor actual hacia nuestra variable auxiliar
                numeros[j] = numeros[j+1]; // el valor actual tendra el valor del numero siguiente ya que es mayor y el siguiente es menor asi ordenamos en el orden necesario
                numeros[j+1] = aux; // el valor siguiente tendra el valor mayor que es antes era el actual.
            }
        }
    }

    /*Mostramos el arreglo ordenado de forma ascendente*/
    for(i=0; i<longitud; i++){
        cout<<numeros[i]<<" ";
    }
    return 0;
}