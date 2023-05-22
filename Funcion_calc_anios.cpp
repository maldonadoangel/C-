/*
  Ejercicio 10: Escriba una funcion nombrada calc_anios() que tenga como parametro entero
  que represente el numero total de dias desde la fecha 1/1/2000 y parametros de referencia
  nombrados año, mes y dia. La funcion es calcular el año, mes y dia actual para el numero
  dado de dias que se le transmitan. usando las referencias, la funcion debera alterar en
  forma directa los argumentos respectivos en la funcion que llama. para este problema 
  suponga que cada año tiene 365 dias y cada mes tiene 30 dias
*/
#include <iostream>

using namespace std;
//Prototipo de la funcion
void calc_anios(int, int&, int&, int&);

int main(){
    int totalDias, anio, mes, dia;
    cout<<"Digite el numero total de dias: "; cin>>totalDias;

    calc_anios(totalDias, anio, mes, dia);

    cout<<"Fecha Actual: "<<dia+1<<"/"<<mes+1<<"/"<<anio+2000<<endl;

    return 0;
}

void calc_anios(int totalDias, int& anio, int& mes, int& dia){
    anio = totalDias/365;
    totalDias = totalDias%365;
    mes = totalDias/30;
    dia = totalDias%30;

}