/*Realiza una función ( un programa completo ) que diga si un número es divisible por otro ( es decir que el resultado sea un n entero 
y que el resto sea 0 ).*/ 

#include <iostream>
using namespace std ; 

bool calculo(int n1, int n2) ; 

int main (){
    int n1 , n2 ; 
     
    cout << "Introduce dos numeros separados por un espacio para comprobar si son divisibles : "<<endl;
    cin >> n1 >> n2 ; 

    bool resultado = calculo (n1,n2);

    if ( resultado == true ) cout << "Los numeros son divisibles "<<endl; 
    else cout<< "Los numeros no son divisibles. "<<endl; 


    

    return 0 ; 
}

bool calculo(int n1, int n2){

    if ( n1 % n2 == 0) return true ;   
    else  return false ; 

}