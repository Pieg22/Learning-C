/*Implementa un programa que calcule el factorial de un número entero positivo
de forma iterativa. 
Creo que la mejor forma de realizar esto es con un bucle , para poder ir reduciendo en 1 la interacion a cada vuelta , hasta llegar al 1 , de esta manera de cumplira el factorial . 
*/  

#include <iostream> // Nuesta libreria de confianza para comunicarnos con la terminal 

using namespace std ;  // Adelantamos todos los std::

int main (){         // Aquí empieza la ejecución principal del programa 

    int num , factorial_resultado = 1;  // Creamos la variable "num" para almacenar el numero que nos de el user  y, "factorial_resultado = 1" este sera nuestro contador para poder realizar 
                                        // el calculo factorial .
    cout << "Escribe un numero entero positivo para calcular su factorial : "<<"\n"; // Pedimos al user el numero con su salto de línea correspondiente . 
    cin >> num ; //Guardamos el  valor anterior en esta variable 

    cout << " El calculo factorial de "<< num ; // Imprimimos el txt con el numero que a elegido el user  IMPORTANTE , sin salto de línea ! 

     for ( int i= num ; i >= 1 ; i-- ){  // Aquí la key del ejercicio. Creamos la variable "i" que su valor sera "num" , mientras i(num) >= 1 este bucle seguira corriendo . En cada corrida 
                                         // el bucle ira restando 1 a "i" es decir a "num" para que cuando llege a la multiplicacion x 1 , el bucle frene .
         factorial_resultado = factorial_resultado * i ; // Creamos nuestra variable acomuladora , en la parte izquierda tomara el valor de cada actualizacion que le de la parte derecha. 
                                                         // "i" se va actualizando en -1 a cada vuelta , por lo que cada vez que el bucle interactua con el contenido , se encuentra con 
                                                         // el  resultado anterior x i-1  . 
    }

    cout << " es " << factorial_resultado << "\n"; // Aquí imprimimos nuestro resultado final del calculo factorial , que se imprimira seguido de el print que hemos creado antes del bucle .


    

    return 0 ; 
}

