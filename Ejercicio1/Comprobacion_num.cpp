#include "Comprobacion_num.h"
#include <iostream>
using namespace std;

void comprobacion() {
    int a;

    cout <<"Ingrese un numero para comprobar si es positivo o negativo: ";
    cin >> a;

    if(a>0) {
        cout<<"El numero "<<a<<" es positivo."<<endl;
    }else if(a<0){
        cout<<"El numero "<<a<<" es negativo."<<endl;
    }else {
        cout<<"El numero "<<a<<" es cero."<<endl;
    }
}