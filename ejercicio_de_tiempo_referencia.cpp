#include <iostream>
#include <math.h>

using namespace std;
void tiempo(int, int&, int&, int&);

int main(){
    int totalSeg, horas, min, seg;
    cout<<"Ingrese el total de segundos: "; cin>>totalSeg;
    tiempo(totalSeg, horas, min, seg);
    cout<<"El valor del tiempo estimado es: "<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;

    return 0;
}

void tiempo(int totalSeg, int& horas, int& min, int& seg){
    horas = totalSeg/3600;
    totalSeg = totalSeg%3600;
    min = totalSeg/60;
    totalSeg = totalSeg%60;
    seg = totalSeg/1;
    totalSeg = totalSeg%1;
    
}