/*5. Implementa un programa que gestiona la partida presupuestaria de un colegio
internacional. Se deben introducir los ingresos en euros, dólares y rublos, y el
programa debe indicar, en euros, cuánto dinero se destina al profesorado (60%
del total), cuánto dinero se dedica a mejorar las instalaciones (20% del total) y
cuánto a otros gastos (el resto). */ 
#include <iostream>
using namespace std ; 

const float exchange_1  = 0.86 ; //Constante para dolares
const float exchange_2 = 0.011 ; // Constante para rublos
int main () {
    float ingresos_e , ingresos_r , ingresos_d ; // Variables para

    cout << "Introduce el dinero en euros : " ; 
    cin >> ingresos_e ; 

    cout << "Introduce la cantidad de rublos : " ; 
    cin >> ingresos_r ; 

    cout << "Introduce la entrada de doalres : " ; 
    cin >> ingresos_d ; 

    float exchange_dolares = ingresos_d * exchange_1  ; // Cambio de dolares a euros
    float exchange_rublos = ingresos_r * exchange_2  ; // Cambio de rublos a euros  

    float suma_total = ingresos_e + exchange_1 + exchange_2 ; // Suma total de los ingresos 
    
    float teachers = (suma_total * 60) / 100 ;  //Dinero destinado al profesorado euros
    float instalations = (suma_total * 20) / 100 ; //Dinero destinado a las instalaciones euros
    float resto = (suma_total * 20) / 100 ; //Dinero destinado a otros gastos  euros 

    
    cout << "El dinero destinado a los profesores asciende a : "<<teachers<< " euros , quedando  "<<instalations<<" euros destinado a instalaciones y "<<resto<<" euros  para otros gastos "; 
    



    return 0;
}