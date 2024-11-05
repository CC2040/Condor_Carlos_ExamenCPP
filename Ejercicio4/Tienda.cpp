#include "Tienda.h"
#include <iostream>
using namespace std;

void promocion() {
    int i=0;
    double a[3]={},m1=0,m2=0,sum=0;
    cout<<"Ingrese el precio de los 3 articulos que desea comprar: ";
    for (i = 0; i < 3; i++) {
        cin>>a[i];
    }


    for(i=0; i<3; i++) {
        if(a[i]>a[i+1]) {
            if(m1>a[i]) {
                m1=m1;
            }else {
                m1=a[i];
            }
        }
    }

    for(i=0; i<3; i++) {
        if(a[i]<m1) {
            if(m2>a[i]) {
                m2=m2;
            }else {
                m2=a[i];
            }
        }
    }

    sum=m1+m2;
    cout<<"El precio total con la promocion es de: "<<sum;
}