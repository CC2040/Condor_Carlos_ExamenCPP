#include "Calificaciones.h"
#include <iostream>
using namespace std;

void promedio() {
    double a[8]={},sum=0,prom=0;
    int i;
    cout<<"Ingrese las calificaciones obtenidas de los 8 ejercicios realizados: ";
    for (i = 0; i < 8; i++) {
        cin>>a[i];
    }
    for (i = 0; i < 8; i++) {
        sum = a[i] + sum;
    }
    prom=sum/8;
    cout<<"El promedio de las 8 calificaciones es: "<<prom<<endl;
}