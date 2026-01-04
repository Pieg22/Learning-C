/*Realiza una función que, dado un vector de N números enteros, devuelva la
posición del último cero que encuentre en el vector.
Hay que implementar el programa entero, no solo la función. Usad arrays. Los números se le deben pedir al usuario.*/


#include <iostream>
using namespace std ; 

const int cantidad  = 100 ; // constante para la funcion y para el array

//prototypes below 
int buscador_de_zero(int libreria_numeros[], int contador) ; 

int main (){
//variables 
int  libreria_numeros[cantidad] , total_numeros ; 

//prints
cout << "Cuantos numeros vas a introducir ? "<<endl;
cin >> total_numeros ; 
//save numbers
for (int i = 0 ; i < total_numeros; i++) {

    cout << "Escribe un numero " << endl ; 
    cin >> libreria_numeros[i]  ; 
}
//get array and slide it betwen fuction
buscador_de_zero( libreria_numeros, total_numeros ) ;  // LLamada a la función 


    return 0; 
}

//fuction 
int buscador_de_zero(int libreria_numeros[], int contador ){
    int buscador = 0 ; 
    
    for ( int i = contador -1 ; i >= 0 ; i--){ 

        if(buscador == libreria_numeros[i] ) {

            cout << "la posicion del ultimo zero es : " << ( i + 1) << endl ; //Imprimimos solo  i para que nos diga la posicion , si imprimimos  libreria_numeros[i] nos dice 0 solamente .  
                                                          // i + 1 para que cuente como los humanos . 
        } 
    }
 return 0 ; 
}

