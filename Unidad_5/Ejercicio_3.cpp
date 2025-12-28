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

int main (){
    
    float x, y, m, M, F, f , div , multi ; 
    int question ; 

    cout << "Itroduce un numero complejo en cartesianas de la siguiente forma : x espacio y . "<<endl;
    cin >> x >> y; 

    m = modulo(x,y);
    f = fase(x,y);

    cout << "Itroduce un numero complejo en cartesianas de la siguiente forma : x espacio y . "<<endl;
    cin >> x >> y; 

    M = modulo(x,y);
    F = fase(x,y);

    cout << "Que operacion deseas realizar , multiplicacion o division ? Escribe 1 para multiplicacion , 2 para divison"<<endl;
    cin >> question ; 

    if (question == 1){
        //la multi va aquí
    }
    else //la div va aquí 


    return 0; 
}

float modulo (float x,float y){
    
    return sqrt(x*x + y*y);
}

float fase (float x , float y){
    float angulo ; 

    if(y > 0) angulo = atan2(y,x) * 180.00/PI ; 
    else angulo =  atan2(y,x) * 180.0/PI + 360.0 ; 

    return angulo ; 
}