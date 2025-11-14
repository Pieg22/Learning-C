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
    

    for (int i = 0 ; i < 5 ; i++);
          
    float actual_number ; 
    
    cout << "Introduce el numero " <<  + 1 << " de 5: "<<endl;
    cin >> actual_number; 




  








   
    
    return 0 ; 
}



