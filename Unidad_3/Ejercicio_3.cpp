/*Tabla de multiplicar ( los 10 primeros productos ) del número que introduzca el user . Utilizaremos un bucle for , ya que sabemos que la cantidad de operaciones es finita en este caso 
*/

#include <iostream> // La libreria con la cual nos permite interactuar con el programa 
#include <cmath>  // Libreria para poder realizar calculos matematicos
using namespace std ;  // Agrupamos todos los std:: , para no escribirlos constantemente

const  int multiplicacion  = 10 ;  // Creamos la constante de 10 , para poderla utilizar mas tarde en nuestra operacion . 

int main (){             // Aquí es donde empieza nuestro programa 
    float n1 ;           // Creamos nuestra variable n1 , para mas tarde guardar el valor que introduzca el user 

    cout << "Introduce un numero : "<<"\n";  // Pedimos al user el numero
    cin >> n1 ;                              // Guardamos el valor que se a introducido anteriormente 

    cout << "Los diez primeros productos de tu numero son : " << "\n";  // Creamos la impresion de la compresion aquí , para no liarla dentro del bucle for . 

    for (int i = 1 ; i <= multiplicacion ; i++) {

        cout << n1 <<  " x " << i << " = " << ( n1 * i) << "\n" ; 

    }


    return 0 ; 
}