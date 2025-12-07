/*Realiza un programa que pida N números al usuario y una cadena de texto. Si la
cadena es más corta que el vector, se debe reemplazar el contenido del vector
por cada carácter de la cadena (hasta llegar al final de la cadena). Si es al
contrario, se deben reemplazar los caracteres de la cadena por los números del
vector
No podemos utilizar swap porque las variables son de diferentes longitudes , y para que swap funcione , tienen que ser identicos en longitud */


#include <iostream>
#include <string>
using namespace std ; 

const int TAM = 5 ;

int main (){

     string numeros[TAM] ; 
     int longitud_cadena ; 
     string cadena ;

    for (int  i = 0 ; i < TAM ; i++){
        
        cout<< "Introduce un numero entero del 1 al 20 : " <<endl;
       getline( cin >>  ws , numeros[i] ); 
    } 

    cout << "Introduce una cadena de texto : "<<endl;
    getline(cin , cadena ); 

     longitud_cadena = cadena.length() ;

    if (longitud_cadena < TAM) {
        for ( int k = longitud_cadena ; k < TAM ; k++) {
            cadena.replace(k, 5 , numeros[k]) ; 
            cout << " " << cadena <<endl; 

        } ; 
    }
    else if (longitud_cadena > TAM){
        for ( int q = 0 ; q < TAM ; q++) {
            cadena.replace(q, 1 , numeros[q]) ; 
            cout << " " << cadena <<endl; 
        } ; 

    }
        
    return 0 ; 
}