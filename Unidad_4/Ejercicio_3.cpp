/*Se pide implementar un programa que pida los diez elementos de un vector,
invierta el vector y lo muestre por pantalla. Con invertir el vector se refiere a que
el primer elemento pase a la última posición, el segundo a la penúltima,
etcétera.
Utilizar un vector de enteros*/

#include <iostream> // La libreria de confianza para sociabilizar con la consola 
#include <vector> //  Los vectores nos permiten trabajar como con una lista dinamica , a diferencia de un array normal , el vector gestiona su propia memoria y conoce su tamaño . Su longitud es flexible y puede variar ! 
using namespace std ;  // std::

int main () { // Empieza nuestro programa
    vector <int> elementos(10) ; // Construimos nuestro vector con la sintaxis que le pertoca : vector <data_type> nombre_vector(cantidad de cajones). 

    

    for (int i = 0 ; i < 10 ; i++) { // En este primer bucle pedimos al user que introduzca uno por uno el numero que se va guardando en cada cajon del vector . 

        cout << "Introduce el numero para la posicion " << i << " : " <<endl; 
        cin >> elementos[i] ;    
    }
    for ( int k = 9 ; k >= 0 ; k--) cout << elementos[k] << endl ; // En este bucle , después de llenar nuestros cajones , simplemente con k-- , vamos a ir imprimiendo uno a uno el interior de nuestros cajones 


    

}