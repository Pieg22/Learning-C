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
    

    for (int i = 0 ; i < 5 ; i++){ //Creamos nuestro bucle . Con la variable "i" = 0 ; Con la condición de que mientras i sea menor 
                                   // que cinco , no pare el bucle ; i++ , en cada vuelta se le suma +1 a i . 
    int actual_number ;            // Creamos la variable que utilizaremos más tarde para guardar los valores que introduce el user
    
    cout << "Introduce el numero " << i + 1 << " de 5: "<<endl; // Creamos el output para pedir los 5 digitos al user . De esta forma 
                                                                // i + 1 , no tenemos que crear 5 variables . con una hacemos !!
    cin >> actual_number;                                       // Guardamos los valores de i + 1 

    int resultados = signVerification(actual_number) ;  // Guardamos los valores que nos devuelve la funcion en la nueva variable 

    //A partir de aquí cojemos el resultado que nos devuelve la funcion y, que despues hemos guardado en la variable para imprimir 
    // el resultado después de cada corrida del bucle . 
    if (resultados == 1){                  
        cout << " El numero "<<actual_number<<" es positivo "<<"\n";
    }
    else if (resultados == 0){             
        cout << " El numero es  " <<actual_number<<"  "<<"\n";
    }
    else {                              
        cout << " El numero "<<actual_number<<" es negativo "<<"\n";
    }


    

    

    }
    return 0 ; 
}



