/*Realiza un programa que pida una cadena de texto al usuario, invierta la
cadena y la muestre por pantalla*/

#include <iostream>
#include <string>
using namespace std ; 

int main () {
    string cadena ;  // string es como un array de caracteres
    int longitud ; 

    cout << "Introduce una cadena de texto (19 caracteres max) : " <<endl; 
    getline(cin >> ws, cadena) ; 

    longitud = cadena.length() ; 


    for ( int i = 20 ;  i > -1 ; i--) cout << cadena[i];

    


    return 0 ;
}