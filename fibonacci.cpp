#include <iostream>

using namespace std;

int main(){
    int numero = 0;
    int x = 0;
    int y = 1;
    int z = 1;
    cout<<"Ingrese su numero para la sucecion de fibonacci"<<endl;
    cin>>numero;

    // 1 1 2 3 5 8 13 21
    for(int i = 1; i < numero; i++){
        z = x + y; // z = 1
        cout<<z<<" ";
        x = y;
        y = z;
    }


    return 0;
}