/*Realiza una función que, dado un vector de N números enteros, devuelva la
posición del último cero que encuentre en el vector.
Hay que implementar el programa entero, no solo la función. Usad arrays. Los números se le deben pedir al usuario.*/


#include <iostream>
using namespace std ; 

const int cantidad  = 100 ; // constante para la funcion y para el array

//prototypes below 

int main (){
//variables 
int  libreria_numeros[cantidad] ; 

//prints
cout << "Introduce  los numeros a continuacion con un espacio entre cada uno de ellos  : "<<endl;
//save numbers
cin >> ws , libreria_numeros ; 
//get array and slide it betwen fuction


    return 0; 
}

//fuction 
int buscador_de_zero(int libreria_numeros[cantidad], int contador ){
    int buscador = 0 ; 
    
    for ( int i = contador -1 ; i >= 0 ; i--){ 

        if(buscador == libreria_numeros[i] ) {

            cout << "la posicion del ultimo zero es : " << libreria_numeros[i] << endl ; 

            return 0 ; 
        
        } 

        

        

    }



}

