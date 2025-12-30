/*Realiza una función que, usando la función del ejercicio 2, nos indique si un
número es primo o no.*/
#include <iostream>
using namespace std; 

bool calculo(int, int) ; 

int main (){
    int n , n2 , comprobacion ; 
    bool primo  = true ; 

    cout << "Introduce un numero a continuacion : "<<endl; 
    cin >> n ; 


    for(int i = 2 ; i < n ; i++) {

        comprobacion = calculo(n,i);
        if(comprobacion)
        
    }




    


    return 0 ; 
}

bool calculo(int n1, int n2){

    if ( n1 % n2 == 0) return true ;   
    else  return false ; 

}