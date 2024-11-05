#include "Dia_semana.h"
#include <iostream>
using namespace std;

void Dia_semana() {
    int a;

    cout << "Ingrese un numero para ver que dia es: ";
    cin>>a;

    switch (a) {
        case 1:
            cout<<"Hoy es lunes"<<endl;
            break;
        case 2:
            cout<<"Hoy es martes"<<endl;
            break;
        case 3:
            cout<<"Hoy es miercoles"<<endl;
            break;
        case 4:
            cout<<"Hoy es jueves"<<endl;
            break;
        case 5:
            cout<<"Hoy es viernes"<<endl;
            break;
        case 6:
            cout<<"Hoy es sabado"<<endl;
            break;
        case 7:
            cout<<"Hoy es domingo"<<endl;
            break;
        default:
            cout<<"Numero ingresado no valido"<<endl;
            break;
    }
}
