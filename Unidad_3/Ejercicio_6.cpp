/*Implementa un programa que, según el número introducido por el usuario,
realice diversas operaciones, siguiendo los siguientes criterios:

a. Si el usuario introduce un 1, se le pide dos números y se calcula la suma y
la multiplicación.

b. Si el usuario introduce un 2, se le pide un número y se muestra la tabla de
multiplicar de ese número.

c. Si el usuario introduce un 3, se escribe el mensaje “Prueba realizada
correctamente”.

d. Si el usuario introduce cualquier otro valor, el programa termina
*/

#include <iostream>
#include <cmath>

using namespace std ; 

int main (){

    int num,answer1,answer_1,answer2,answer3,multiplicacion = 10; 

    cout << "Por favor introduce un número : "<<endl; 
    cin >> num ;

    if (num == 1) {
        cout << "Ahora introduce dos numeros : "<<endl ; 
        cin >> answer1 >> answer_1 ; 
        cout << "La suma de los dos numeros es : " << answer1 + answer_1 << " y la multiplicacion :  " << answer1 * answer_1 << endl;
    }
    else if (num == 2){
        cout << "Por favor introduce un numero : "<<endl ; 
        cin >> answer2 ; 

    for ( int i = 1 ; i < multiplicacion ; i++){
         
        cout << i << " x " << answer2 << " = " << answer2 * i << endl ; 

    } 
    }
    else if (num == 3) {
        cout << "Prueba realizada correctamente"<<endl;
    }
    
    else cout << "El programa a terminado" ;

return 0 ; 

}