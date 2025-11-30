/*Implementa un programa que solicite una cadena de texto al usuario y un
carácter. A continuación, se le solicita al usuario la posición donde insertar el
carácter. El programa debe insertar el carácter en la posición de la cadena
indicada, haciendo uso de las funciones de la librería string. Controla los posibles
errores.
El string aquí es mágico y ya es un array a su mismo tiempo  */

#include <iostream>
#include <string>
using namespace std ; 

int main () {

    string cadena , caracter ; 
    int cadena_longitud , insertar_posicion ; 

    cout << " Escribe una cadena de texto :  " << endl ; 
    getline(cin, cadena )  ; 
    
    cout << "Escribe un caracter : " <<endl ; 
    getline (cin,caracter) ;


    cadena_longitud = cadena.length() ; 
    
    cout << "En que posicion de la cadena " << cadena_longitud << " quieres introducir el caracter ? " <<endl ;
    cin >> insertar_posicion ; 

    if (insertar_posicion > cadena_longitud) cout << " Error , la longitud introducida no pertenece a la cantidad de la cadena " << endl ; 
    else cadena.insert(insertar_posicion,caracter) ;

    cout << cadena ; 

    return 0 ; 
}