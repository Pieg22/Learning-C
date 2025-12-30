/*Realiza una función que, usando la función del ejercicio 2, nos indique si un
número es primo o no.*/
#include <iostream>
using namespace std; 

bool calculo(int, int) ; // Prototipo de la funcion 

int main (){
    int n , comprobacion ;  // Variable n para guardar el numero del user , y comprobacion para utilizarlo para correr la funcion
    bool primo  = true ;  // bool flag , para determinar con seguridad el resultado 

    cout << "Introduce un numero a continuacion : "<<endl;  // pedimos n 
    cin >> n ;  // guardamos el n  , que es el que queremos comprobar 

    if (n == 1 || n == 0){ // Si n == 1 o 0 , ya no hace falta que continuemos . 
        cout << " El " << n << " no es primo "<<endl;
     }

    for(int i = 2 ; i < n ; i++) { // empezamos en  2 ya que 0 y 1 no nos ayuda para comprobar si es primo o no 

        comprobacion = calculo(n,i); // cuando la comprobación sea true querra decir que el resto es 0 

        if (comprobacion == true ) primo = false ;// los numeros primos nunca tendrán un resto de 0 a no ser que sean 1 o el mismo .
    
    } 
    if( primo == true) cout << " El numero "<< n << " es primo" ; // en este bloque condicional , la flag ya manda con totalidad y imprimimos el resultado adecuado en pantalla . 
    else cout << " El numero "<< n << " no es primo" ;


    return 0 ; 
}

bool calculo(int n1, int n2){

    if ( n1 % n2 == 0) return true ;   
    else  return false ; 

}