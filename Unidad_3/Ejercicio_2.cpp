/*Diseño de un programa que pide al usuario dos números. Si el primer número es menor que el segundo , 
el programa debe devolver el producto de los dos números . Si el segundo es igual o menor al primero , 
el programa debe devolver la resta . 
*/

#include <iostream> 
#include <cmath>
using namespace std ; 


int main (){
    float n1 , n2 ; 
    
    cout << "Introduce dos números separados por un espacio entre ambos : " <<"\n" ;
    cin >> n1 >> n2 ; 

    if( n1 < n2) {
        cout << "El producto de los dos numeros es : " << n1 * n2 << "\n" ; 
    }
    else if (n2 <= n1){
        cout <<"La resta de los dos numeros es : "<< n2 - n1 << "\n" ; 

    }


return 0 ; 
}