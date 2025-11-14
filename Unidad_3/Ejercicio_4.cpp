/*Implementa un programa que pida cinco números al usuario y, para cada
número, indique si es positivo o negativo
*/

#include <iostream>                // Incluimos nuestra libreria de interacicion

using namespace std ;             // Definimos std:: para todos nuestros cout's y cin's . 

int signVerification(float num){     //Creamos la función para la verificación de signo , indicando que devera obtener un 'int' para su alimentacion , y que trabajara con el parametro 'float num'

    if (num > 0){return 1;}       // En esta condición analizamos si el num es positivio , si lo es nos devolvera 1 . 
    else if (num == 0){return 0;}  // En esta condición analizamos si el num es 0 , si lo es nos devolvera 0 .
    else {return -1 ;}             // En esta condición analizamos si el num es negativo , si lo es nos devolvera -1 .

}; 

int main () {                     // Arrancamos con nuestra función principal del programa
    float n1 , n2 , n3 , n4 , n5 ;  // Creamos nuestras variables de los 5 numeros , para más  tarde guardarlos . 

    cout << "Introduce 5 numeros , con un espacio entre ellos : " << "\n" ;  // Pedimos al user los cinco numeros
    cin >> n1 >> n2 >> n3 >> n4 >> n5 ;   // Guardamos esos cinco numeros en sus correspondientes variables 


    /*A partir de aquí vamos a repetir el patron : 1. Variable + llamada a la función signverification . 2. Bloque if/else if / else para la comprobacion de cada numero . Lo único que cambia
     es el numero que comprobamos */

    int result_n1 = signVerification(n1); // Llamamos a la función partiendo de una nueva variable para analizar el n1 . 

    if (result_n1 == 1){                  // Si el n1 es positivo se ejecuta 
        cout << " El numero "<<n1<<" es positivo "<<"\n";
    }
    else if (result_n1 == 0){             // Si el n1 es 0 se corre esto 
        cout << " El primer numero es  " <<n1<<"  "<<"\n";
    }
    else {                               // Si el n1 es negativo salta este else . 
        cout << " El numero "<<n1<<" es negativo "<<"\n";
    }


    
    int result_n2 = signVerification(n2); 

    if (result_n2 == 1){
        cout << " El numero "<<n2<<" es positivo "<<"\n";
    }
    else if (result_n2 == 0){
        cout << " El segundo numero es  " <<n2<<"  "<<"\n";
    }
    else { 
        cout << " El numero "<<n2<<" es negativo "<<"\n";
    }

    
    int result_n3 = signVerification(n3);  

    if (result_n3 == 1){
        cout << " El numero "<<n3<<" es positivo "<<"\n";
    }
    else if (result_n3 == 0){
        cout << " El tercer numero es  " <<n3<<"  "<<"\n";
    }
    else { 
        cout << " El numero "<<n3<<" es negativo "<<"\n";
    }

    
    int result_n4 = signVerification(n4);   // Comprobamos el 4 numero

    if (result_n4 == 1){
        cout << " El numero "<<n4<<" es positivo "<<"\n";
    }
    else if (result_n4 == 0){
        cout << " El cuarto numero es  " <<n4<<"  "<<"\n";
    }
    else { 
        cout << " El numero "<<n4<<" es negativo "<<"\n";
    }

    
    int result_n5 = signVerification(n5);  //Comprobamos el quinto numero 

    if (result_n5 == 1){
        cout << " El numero "<<n5<<" es positivo "<<"\n";
    }
    else if (result_n5 == 0){
        cout << " El quinto numero es  " <<n5<<"  "<<"\n";
    }
    else { 
        cout << " El numero "<<n5<<" es negativo "<<"\n";
    }









   
    
    return 0 ; 
}



