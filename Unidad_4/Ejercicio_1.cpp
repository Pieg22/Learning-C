/*Se desea implementar un programa que indique si un número entero introducido
por teclado es primo.
Criba de Eratostenes para comprobación ? Creo que no es buena idea , ya que solamente tenemos que decir si es primo o no . 
*/

#include <iostream>
using namespace std ; 

int main (){
    int number ; 

    cout<<"Introduce un numero para comprobar si es primo : "<<endl; 
    cin >> number ; 

    for (int i = 2 ; i < number ; i++ ){
        if (number % i == 0  ) {
            cout << "El " << number << "no es primo " << endl ; 
            break;
        }
        
    } 



    return 0;
}

