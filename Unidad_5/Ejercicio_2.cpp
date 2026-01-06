/*Realiza una función ( un programa completo ) que diga si un número es divisible por otro ( es decir que el resultado sea un n entero 
y que el resto sea 0 ).*/ 

#include <iostream>
using namespace std ; 

bool calculo(int n1, int n2) ; //prototipo funcion con argumentos int 

int main (){
    int n1 , n2 ; // variables para recoger los dos numeros 
     
    cout << "Introduce dos numeros separados por un espacio para comprobar si son divisibles : "<<endl;
    cin >> n1 >> n2 ;  // guardamos los numeros 

    bool resultado = calculo (n1,n2); // creamos una variable boleana , dandole como valor la función con los dos numeros guardados previamente

    if ( resultado == true ) cout << "Los numeros son divisibles "<<endl; // si la funcion devuelve true , es ejecuta el if 
    else cout<< "Los numeros no son divisibles. "<<endl;  // si return false , se imprime esta linea . 

    return 0 ; 
}

bool calculo(int n1, int n2){ // funcion boleana , para no crear una void o una int y tener que hacer una flag dentro , directamente la creamos bool . 

    if ( n1 % n2 == 0) return true ;   // Si el resto de la division de los numeros es 0 querra decir que esos dos numeros si son divisibles , de lo contrario , siempre quedara algun otro n real.
    else  return false ; // Si el if no se cumple directamente enviamos un false . 

}