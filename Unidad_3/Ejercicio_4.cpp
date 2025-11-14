/*Implementa un programa que pida cinco números al usuario y, para cada
número, indique si es positivo o negativo
*/

#include <iostream>
#include <math.h>

using namespace std ; 

int signVerification(float num){     //Creamos la función 

    if (num > 0){return 1;}
    else if (num == 0){return 0;}
    else {return -1 ;}

}; 

int main () {
    float n1 , n2 , n3 , n4 , n5 ; 

    cout << "Introduce 5 numeros , con un espacio entre ellos : " << "\n" ; 
    cin >> n1 >> n2 >> n3 >> n4 >> n5 ;  

    int result_n1 = signVerification(n1); // Trabajamos con el primer numero 

    if (result_n1 == 1){
        cout << " El numero "<<n1<<" es positivo "<<"\n";
    }
    else if (result_n1 == 0){
        cout << " El primer numero es  " <<n1<<"  "<<"\n";
    }
    else { 
        cout << " El numero "<<n1<<" es negativo "<<"\n";
    }


    
    int result_n2 = signVerification(n2); // Trabajamos el segundo numero 

    if (result_n2 == 1){
        cout << " El numero "<<n2<<" es positivo "<<"\n";
    }
    else if (result_n2 == 0){
        cout << " El segundo numero es  " <<n2<<"  "<<"\n";
    }
    else { 
        cout << " El numero "<<n2<<" es negativo "<<"\n";
    }

    
    int result_n3 = signVerification(n3);  // Comprobamos el 3 numero

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



