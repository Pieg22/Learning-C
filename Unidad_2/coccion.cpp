/*6. Se desea implementar un programa que calcule la hora en la que una olla de
cocción lenta terminará de cocinar una receta. Para ello, hay que introducir la
hora actual y el tiempo (en segundos) de cocción que necesita la receta. El
programa debe indicar la hora a la que estará lista*/
// Paso 1 : Crear variables , paso 2 : Pedir datos al user , paso 3  : sumar el cooking time with + actual time , paso 4 : calcular todo el conjunto de segundos a una hora X . paso 5 :imprimir esa hora 
//La idea principal es cojer todos los segundos juntos de la hora actual y el tiempo de cocción , y crear un calculo en el que el resto de los segundos de todo un dia % segundos de cocción+horaactualensegundos , traducrlo a la hora del dia en el que la receta terminará.
#include <iostream>
using namespace std;
int main () {
    int actual_time , day_seconds , cooking_time , suma_time , total_seconds  ;  // Creamos las variables necesarias 
    cout << "Introduce la hora actual y el tiempo de coccion que es necesario para la receta en el mismo orden (introducir todo en segundos): " ; // Pedimos al usuario los datos
    cin >> actual_time , cooking_time ; //guardamos en nuestras variables los datos que introduce el user
    suma_time = actual_time + cooking_time ;  // sumamos todos los segundos 
    day_seconds =  86400 ;  // Indicamos cuantos segundos tiene un dia en total 
    total_seconds = day_seconds + suma_time ;  // sumamos todos los segundos , los del dia + los de cocción 
    
    





    return 0; 
}