/*Implementa un programa que solicite una cadena de texto al usuario y un
carácter. A continuación, se le solicita al usuario la posición donde insertar el
carácter. El programa debe insertar el carácter en la posición de la cadena
indicada, haciendo uso de las funciones de la librería string. Controla los posibles
errores.
El string aquí es mágico y ya es un array a su mismo tiempo  */

#include <iostream> // Libreria clasica
//#include <string> // Introducimos nueva libreria que nos da paso a trabajar con multitud de tools para strings . Nos podemos ahorrar esta linea ya que funciona igual los get line y ws 
using namespace std ;  // std :: 

int main () { // Arrancamos 

    string cadena , caracter ;  // Creamos las variables de string para guardar nuestros valores más tarde 
    int cadena_longitud , insertar_posicion ;  // Creamos variables numericas  con las que trabajaremos la insercion de el caracter 

    cout << " Escribe una cadena de texto :  " << endl ;  // Pedimos al user la cadena 
    getline(cin >> ws , cadena )  ;                              // Guardamos la cadena anterior , pero con getline importante , ya que cin aquí no funciona bien ! Con los espacios y el enter se vuelve loco .
    
    cout << "Escribe un caracter : " <<endl ;            // Pedimos el caracter
    getline (cin >> ws ,caracter) ;                             // Guardamos el caracter
 

    cadena_longitud = cadena.length() ;                  //Creamos la variable y le damos como valor la longitud de la cadena para poder trabajar con ella 
    
    cout << "En que posicion de la cadena " << cadena_longitud << " quieres introducir el caracter ? " <<endl ; // Imprimimos  la cantidad de length para mejor visualizacion
    cin >> insertar_posicion ;  // cojemos la posicion numerica donde se quiere insertar el caracter 

    if (insertar_posicion > cadena_longitud) cout << " Error , la longitud introducida no pertenece a la cantidad de la cadena " << endl ;  // Nos adelantamos a un posible error 
    else cadena.insert(insertar_posicion -1 ,caracter) ; // Si pasa el control del error , es hora de insertat el caracter en la posicion que nos indica el user  
    // El -1 correcion para que salga en la posicion correcta , ya que si no sale una por delante de la  pedida .

    cout << cadena ;  // Imprimios el resultado final de la cadena con el caracter insertado en la posicion desdeada . 

    return 0 ; 
}