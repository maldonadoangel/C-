#include <iostream>
#include <math.h>

using namespace std;

    void cambio(int, int&, int&, int&, int&, int&, int&);
int main(){
    int valor,cien,cincuenta,veinte,diez,cinco,uno;

    cout<<"Digite la cantidad en dolares: "; cin>>valor;
    cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);

    cout<<"Cantidad de billetes a entregar a cambio: "<<endl;
    cout<<"Cien: "<<cien<<endl;
    cout<<"Cincuenta: "<<cincuenta<<endl;
    cout<<"Veinte: "<<veinte<<endl;
    cout<<"Diez: "<<diez<<endl;
    cout<<"Cinco: "<<cinco<<endl;
    cout<<"Uno: "<<uno<<endl;

    return 0;
}

void cambio(int valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    cien = valor/100;
    valor = valor%100;
    cincuenta = valor/50;
    valor = valor%50;
    veinte = valor/20;
    valor = valor%20;
    diez = valor/10;
    valor = valor%10;
    cinco = valor/5;
    uno = valor%5;
}