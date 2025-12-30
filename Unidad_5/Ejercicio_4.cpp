/*Realiza una función que, usando la función del ejercicio 2, nos indique si un
número es primo o no.*/
#include <iostream>
using namespace std; 

bool calculo(int, int) ; 

int main (){
    int n , ; 
    bool primo  = true , comprobacion  ; 

    cout << "Introduce un numero a continuacion : "<<endl; 
    cin >> n ; 

    comprobacion = calculo(n);

    


    return 0 ; 
}

bool calculo(int n1, int n2){

    if ( n1 % n2 == 0) return true ;   
    else  return false ; 

}