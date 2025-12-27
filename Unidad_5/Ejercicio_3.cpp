/*Realiza un programa que permita multiplicar y dividir números complejos. Para
ello, se utilizará su forma polar. El usuario introducirá los números en forma
cartesiana y después introducirá la operación a realizar (multiplicación o
división). El programa mostrará la solución tanto en formato cartesiano como en
formato polar.*/
 
#include <iostream>
#include <cmath>
using namespace std ; 

#define PI 3.141593 

int main (){
    return 0; 
}

float modulo (float x,float y){
    
    return sqrt(x*x + y*y);
}

float fase (float x , float y){
    float angulo ; 

    if(y > 0) angulo = atan2(y,x) * 180.00/PI ; 
    else angulo atan2(y,x) * 180.0/PI + 360.0 ; 

    return angulo ; 
}