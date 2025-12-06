/*Realiza un programa que pida N números al usuario y una cadena de texto. Si la
cadena es más corta que el vector, se debe reemplazar el contenido del vector
por cada carácter de la cadena (hasta llegar al final de la cadena). Si es al
contrario, se deben reemplazar los caracteres de la cadena por los números del
vector*/


#include <iostream>
#include <string>
using namespace std ; 

const int TAM = 5 ;

int main (){

     int numeros[TAM] , longitud_cadena ; 
     string cadena , intercambio  ; 

    for (int  i = 0 ; i < TAM ; i++){
        
        cout<< "Introduce un numero entero del 1 al 20 : " <<endl;
        cin >> numeros[i] ;    
    }

    cout << "Introduce una cadena de texto : "<<endl;
    getline(cin , cadena ); 

     longitud_cadena = cadena.length() ;

    if (longitud_cadena > TAM) {
        for ( int k = 0 ; k < longitud_cadena ; k++) {
           


            


        }
    }


     



    return 0 ; 
}