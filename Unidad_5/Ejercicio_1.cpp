/*Realiza una función que, dado un vector de N números enteros, devuelva la
posición del primer cero que encuentre en el vector.*/

#include <iostream>

using namespace std;

const int N_numeros = 100 ; 

int main (){

    int numeros[N_numeros] ; 
    int recogida ; 

    cout << "Cuantos numeros quieres introducir ? " <<endl ; 
    cin >> recogida ; 

     
    
    for ( int i = 0  ; recogida > i ; i++) {
        
        cout << " Introduce un numero por favor : " <<endl ; 
        cin >> numeros[i] ; 

    } 

         

    
   
    
    return 0; 
}


int Find_the_position (int numeros[], int tamanio){

    for (int k = 0 ; k < tamanio ; k++){

        if (numeros[k] == 0 ){
            cout << "La posicion en la que se encuentra el 0 es : " << k <<endl;  

            return k ; 
        }

    }
    cout << "No se ha encontrado ningun 0." << endl;
    return -1; 
  
} ; 