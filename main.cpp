#include "Ejercicio1/Comprobacion_num.h"
#include "Ejercicio2/Dia_semana.h"
#include "Ejercicio3/Calificaciones.h"
#include "Ejercicio4/Tienda.h"

int main() {

    comprobacion();
    /*Para el primer ejercicio lo unico que se uso fue los condicionales if,else if y else con el fin de controlar el rango de valores
     que se requeria, por ejemplo el primer condicional comprobara si el numero ingresado es positivo, de no ser asi, el segundo
     comprobara si es negativo y por ultimo si no se cumplieron las 2 primeras condiciones el resultado seria 0*/

    Dia_semana();
    /*Aqui lo unico que se pide al usuario es ingresar un numero para poder verificar que dia es, se usa swich porque es mas sencillo
     estructurarlo asi, o tambien podria usarse un if que daria el mismo resultado, volviendo al tema el swich lo unico que hace es
     un comando dependiendo el tipo de caso que el usuario elija en este caso seria el tipo de dia que desea conocer*/

    promedio();
    /*Para la parte de promedio se uso un arreglo tipo entero para las calificaciones y los datos se los obtenia mediante un bucle
     for ya que a medida que el bucle avanzaba este iba guardando los datos uno por uno en el arreglo, para la parte de la suma
     fue similar ya que lo unico que se hizo fue usar el for que vaya pasando los datos uno por uno y los sume a una variable que
     se ira sumando a medida que vaya los datos y el promedio es implemente la division de la suma, cabe recalcar que no me acuerdo
     como imprimr con menos decimales*/

    promocion();
    /*Para la promocion llevo cierta complejidad el tema de obtener los valos que sean mayor pero lo primero que se hizo fue hacer
     un bucle for que recoja los datos para despues empezar a comprobar, el primer bucle lo que hace es devolverme el valor mas alto
     de los 3 datos obtenidos para despues ser guardado en la variable m1 y el segundo bucle lo unico que compara es los valores mas
     pequeños de m1 y los escoge entre los que sean mayores*/

    /*PS: El segundo bucle puede que de fallos pero aun no encuentro cual puede ser ademas que si se desea cambiar el tipo de dato
     a ingresar solo se debe cambiar el int por un double o float, dependiendo lo que le guste*/

    return 0;
}
