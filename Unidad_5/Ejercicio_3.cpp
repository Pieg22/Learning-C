/*Realiza un programa que permita multiplicar y dividir números complejos. Para
ello, se utilizará su forma polar. El usuario introducirá los números en forma
cartesiana y después introducirá la operación a realizar (multiplicación o
división). El programa mostrará la solución tanto en formato cartesiano como en
formato polar.*/
 
#include <iostream>
#include <cmath>
using namespace std ; 

#define PI 3.141593 

float modulo(float x,float y);
float fase(float x,float y);
float multi_angulos (float f1, float f2);
float multi_modulos (float m1, float m2);

int main (){
    
    float x, y, m, M, F, f ; 
    int question ; 

    cout << "Itroduce un numero complejo en cartesianas de la siguiente forma : x espacio y . "<<endl;
    cin >> x >> y; 

    m = modulo(x,y);
    f = fase(x,y);

    cout << "Itroduce un numero complejo en cartesianas de la siguiente forma : x espacio y . "<<endl;
    cin >> x >> y; 

    M = modulo(x,y);
    F = fase(x,y);

    //cout << "Print m" <<m<< "print f " <<f<< "print M" <<M<< "print F" <<F<<endl;  // Test 

    cout << "Que operacion deseas realizar , multiplicacion o division ? Escribe 1 para multiplicacion , 2 para divison"<<endl;
    cin >> question ; 

    if (question == 1){
        //aquí va la multiplicacion

        
    }
    else //la division va aquí 


    return 0; 
}// Hasta aquí el main block 

float modulo (float x,float y){
    
    return sqrt(x*x + y*y);
}

float fase (float x , float y){
    float angulo ; 

    if(y > 0) angulo = atan2(y,x) * 180.00/PI ; 
    else angulo =  atan2(y,x) * 180.0/PI + 360.0 ; 

    return angulo ; 
}

float multi_modulos (float m1, float m2){ // Multiplicacion normal para los modulos 

    float multiplicacion = m1 * m2 ; 
    return multiplicacion ; 
}

float multi_angulos (float f1, float f2){ // los angulos se suman , pero no pueden pasar de 360 grados . 
   float suma = f1 + f2 ; 

    if (suma >= 360) suma = suma - 360 ;  // Ya que 360 es lo mismo que 0 , ya que la flecha esta apuntando directamente a la derecha tanto en 360 como 0 . 
    
    return suma ; 

}