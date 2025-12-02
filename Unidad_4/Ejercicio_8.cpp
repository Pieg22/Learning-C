/*Realiza un programa que pida una cadena de texto al usuario, invierta la
cadena y la muestre por pantalla*/

#include <iostream> // Comunicacion con la consola 
#include <string> // getline , ws , lenght
using namespace std ; //::std

int main () {
    string cadena ;  // string es como un array de caracteres
    int longitud ;  // variable para almacenar nuestro .lenght()

    cout << "Introduce una cadena de texto (19 caracteres max) : " <<endl;  // Pedimos datos 
    getline(cin >> ws, cadena) ; // guardamos datos 

    longitud = cadena.length() ; // utilizamos la variable longitud para guardar 


    for ( int i = longitud ;  i > -1 ; i--) { cout << cadena[i] ;  } cout << endl;  // En este bucle tenemos que i = cantidad de caracteres que contenga la cadena , 
                                                                                    // i > -1 , por que si no , si ponemos 0 nos encontramos que el que sería el primer caracter , no lo imprime
                                                                                    // {Aquí dentro de imprime caracter por caracter el interior de cadena }
                                                                                    // cout << endl; Es para evitar el salto de linea en cada interaccion del bucle , es decir para evitar que
                                                                                    // se imprima en vertical la frase . 
    


    return 0 ;
}