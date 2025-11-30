/*Se desea implementar un programa que indique si un número entero introducido
por teclado es primo.
Criba de Eratostenes para comprobación ? Creo que no es buena idea , ya que solamente tenemos que decir si es primo o no . 
*/

#include <iostream> // Libreria para interactuar con la terminal
using namespace std ; // avanazamos todos los std::

int main (){         // Aquí empieza nuestro programa
    int number ;     // Esta variable es la que  utilizaremos para guardar el numero que introduce el user 
    bool es_primo = true ; // Esta es la señal ( interruptor o más conocido como la red flag en programación )

    cout<<"Introduce un numero para comprobar si es primo : "<<endl; // Indicamos el mensaje en consola para el user
    cin >> number ;                                                  // Guardamos el numero que introduce el user

    for (int i = 2 ; i < number ; i++ ){// Arrancamos el bucle , inicializa en el 2 , ya que empezar a calcular /0 o /1 no nos ayuda nada . realizamos ejecución hasta que i == number . Sumamos +1 en cada vuelta 
        if (number % i == 0  ) {        // Ningun numero primo tendra un resto de 0 si lo dividimos por cualquier numero que no sea 1 o el mismo , por lo tanto aquí ya dictamina que no es primo ! 
            cout << " El  " << number << " no es primo " << endl ;  // Imprime que el n no es primo 
            es_primo = false ;  // Aquí entra por primera vez nuestro interrputor booleano , cambiandolo a false ya que si no es primo apgamos el interruptor . Y cerramos el chiringuito 
            break; // Se para el programa 
        } 
    } 
    if (number == 1 || number == 0){  // En esta parte , esquivamos el fallo de la siguiente condición , ya que al poner 0 o 1 , el programa nos decia , que si eran numeros primos ! Lo cual no es verdad . 
        es_primo = false ;           // tarjeta roja , fuera ! 
        cout << " El " << number << " no es primo "<<endl; // Imprimimos que  el 1 o el 0 en este caso , no es un n primo . 

    } 

    else if (es_primo == true) cout<< " El " <<number<< " es numero primo " << endl; // Despúes de haber saltado todos los primeros controles de n NO pirmos , si llegamos aquí , la bandera aun esta verde , por lo que bingo , tenemos un primo!
    
     


    return 0;
}

