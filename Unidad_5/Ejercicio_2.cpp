/*Realiza una función ( un programa completo ) que diga si un número es divisible por otro ( es decir que el resultado sea un n entero 
y que el resto sea 0 ).*/ 

#include <iostream>
using namespace std ; 

int calculo(int n1, int n2) ; 

int main (){
    int n1 , n2 ; 
    float result ; 

    cout << "Introduce dos numeros separados por un espacio para comprobar si son divisibles : "<<endl;
    cin >> n1 >> n2 ; 

    cout<< "El resultado del calculo es : "<< result <<endl; 
    
    int resultado = calculo (n1,n2);

    return 0 ; 
}

int calculo(int n1, int n2){

   float result = n1 / n2 ; 
    if ( n1 % n2 == 0) return 0 ;   
    else if ( n1 % n2 != 0) return -1 ; 

}