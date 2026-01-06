/*Realiza un programa que permita multiplicar y dividir números complejos. Para
ello, se utilizará su forma polar. El usuario introducirá los números en forma
cartesiana y después introducirá la operación a realizar (multiplicación o
división). El programa mostrará la solución tanto en formato cartesiano como en
formato polar.*/
// X = es la parte real , yi = la parte imaginaria por que va multiplicado por i . 
 
#include <iostream>
#include <cmath>
using namespace std ; 

#define PI 3.141593 // valor de pi 

//prototipos de las funciones 
float modulo(float x,float y);
float fase(float x,float y);
float multi_angulos (float f1, float f2);
float multi_modulos (float m1, float m2);
float div_modulos (float m1, float m2);
float div_angulos(float f1, float f2);
float cartesiana_x(float r , float angulo);
float cartesiana_y(float r , float angulo); 


int main (){
    
    float x, y, m, M, F, f ; // Variables float que utilizaremos para guardar y calcular 
    int question ; // Variable int que la utilizamos para llevar a cabo la elección del programa que se desea 
    float resultado_angulos_multi , resultado_modulos_multi, resultados_modulos_division, resultado_angulos_division; // variables para sustituir su valor mas tarde por el calculo final de las funciones
    float resultado_cartensiano_x , resultado_cartesiano_y ; 

    cout << "Itroduce un numero complejo en cartesianas de la siguiente forma : x espacio y . "<<endl;
    cin >> x >> y; // guardamos x y y , dos numeros reales 
    // modulo = a la longitud del vector que representa el n complejo .  fase =  es el angulo , el argumento . 
    m = modulo(x,y); // calculamos el modulo y lo guardamos en esta variable 
    f = fase(x,y); // calculamos el angulo 

    cout << "Itroduce un numero complejo en cartesianas de la siguiente forma : x espacio y . "<<endl;
    cin >> x >> y; 

    M = modulo(x,y);
    F = fase(x,y);

    //cout << "Print m" <<m<< "print f " <<f<< "print M" <<M<< "print F" <<F<<endl;  // Test 

    cout << "Que operacion deseas realizar , multiplicacion o division ? Escribe 1 para multiplicacion , 2 para divison"<<endl;
    cin >> question ; 

    

    if (question == 1){
        resultado_modulos_multi =  multi_modulos(m,M);
        resultado_angulos_multi =  multi_angulos(f,F);
        resultado_cartensiano_x = cartesiana_x(resultado_modulos_multi, resultado_angulos_multi) ; 

        cout << "El resultado de la multiplicacion es :  " <<resultado_modulos_multi<< " exp(i"<<resultado_angulos_multi<<")"<<"\n"; 
        cout << "Y su formato cartesiano (rectangular) es : " << << " " ; 
    }
    else {
        resultados_modulos_division = div_modulos(m,M);
        resultado_angulos_division = div_angulos(f,F);

        cout << "El resultado de la division es :  " <<resultados_modulos_division<< " exp(i"<<resultado_angulos_division<<")"<<endl;

    }


    return 0; 
}// Hasta aquí el main block --------------------------------------------------------------------------------------------------------------------------------------

float modulo (float x,float y){
    
    return sqrt(x*x + y*y); // calculamos con el teorema de pitagoras  x^2 + y^2 . 
}

float fase (float x , float y){
    float angulo ; 

    if(y > 0) angulo = atan2(y,x) * 180.00/PI ;  //atan(y,x) = y/x , arc(resultado) , nos devuelve el angulo en radianes , por eso le añadimos el calculo  de *  180/PI  , para tenerlo en grados . 
    else angulo =  atan2(y,x) * 180.0/PI + 360.0 ; // Es lo mismo que lo anterior , pero añadiendole 360 grados  

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

float div_modulos (float m1, float m2){

    float division = m1 / m2 ; 
    return division ; 

}

float div_angulos(float f1, float f2){

    float resta = f1 - f2 ; 
    if(resta < 0) resta = resta + 360 ; 
    return resta ; 

}

float cartesiana_x(float r , float angulo){ // calculamos el x (real)
    return r*cos(angulo* PI / 180); // Convertimos el ángulo a radianes dentro del cos , calculamos el coseno y multiplicamos por el radio 
}

float cartesiana_y(float r , float angulo){// calculamos el y ( imaginario)
    return r*sin(angulo * PI / 180) ;  // Convertiamos el ángulo a radianes dentro del sin , calculamos el sin y multiplicamos por el radio . 
    
}