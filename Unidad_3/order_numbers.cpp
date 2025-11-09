// This program will be a input from user of 3 numbers , and we need to return the numbers in order from lowest one to the biggest . 
#include <iostream>
using namespace std;

int main () {
    float n1, n2, n3, aux ; // Creamos las variables necesarias 
    cout<<"Introduce 3 separate numbers for space : "<<"\n"; // Este es el mensaje en consola para pedir los 3 numeros
    cin >> n1 >> n2 >> n3 ; // Aquí guardamos los valores introducidos por el user 

    if (n1 < n2 && n1 < n3) {        // Aquí comprobamos el n1 es el más pequeño de todos . 

        if (n2 < n3){ //comrpobamos el orden de los dos restantes

            cout << "El orden es "<<n1<<","<<n2<<","<<n3<<"\n"; // El orden será n1,n2,n3 de menor a mayor 
        }
        else {
            cout << "El orden es "<<n1<<","<<n3<<","<<n2<<"\n"; // El orden será n1,n3,n2 

        } 
    }
    
    else if (n2 < n1 && n2 < n3) {  // Comprobamos que el n2 es el más pequeño de todos 

         if (n1 < n3){ // Sabiendo que n2 es el más pequeño comprobamos los otros dos values 

            cout << "El orden es "<<n2<<","<<n1<<","<<n3<<"\n"; // El orden será n2,n1,n3 de menor a mayor 
        }
        else {
            cout << "El orden es "<<n2<<","<<n3<<","<<n1<<"\n"; // El orden será n2,n3,n1 

        } 



    }
    else if (n3 < n1 && n3 < n1) {  // Comprobamos que el n3 es el más pequeño de todos 

         if (n1 < n2){ // Sabiendo que n3 es el más pequeño comprobamos los otros dos values 

            cout << "El orden es "<<n2<<","<<n1<<","<<n3<<"\n"; // El orden será n2,n1,n3 de menor a mayor 
        }
        else {
            cout << "El orden es "<<n2<<","<<n3<<","<<n1<<"\n"; // El orden será n2,n3,n1 

        } 



    }
    

       

    
        
    
    
  return 0;  }
   

    
