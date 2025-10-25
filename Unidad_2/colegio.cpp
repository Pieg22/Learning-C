/*5. Implementa un programa que gestiona la partida presupuestaria de un colegio
internacional. Se deben introducir los ingresos en euros, dólares y rublos, y el
programa debe indicar, en euros, cuánto dinero se destina al profesorado (60%
del total), cuánto dinero se dedica a mejorar las instalaciones (20% del total) y
cuánto a otros gastos (el resto). */ 
#include <iostream>

int main () {
    int ingresos_e = 160 ; // Entrada de euros
    int ingresos_r = 3500 ; //entrada de rublos
    int ingresos_d = 6500 ;  //entrada de dolares
    float exchange_1 = ingresos_d * 0.86 ; // Cambio de dolares a euros
    float exchange_2 = ingresos_r * 0.011 ; // Cambio de rublos a euros  
    int suma_total = ingresos_e + exchange_1 + exchange_2 ; // Suma total de los ingresos 
    int teachers = (suma_total * 60) / 100 ;  //Dinero destinado al profesorado euros
    int instalations = (suma_total * 20) / 100 ; //Dinero destinado a las instalaciones euros
    int resto = (suma_total * 20) / 100 ; //Dinero destinado a otros gastos  euros 

    
    std::cout << "El dinero destinado a los profesores asciende a : "<<teachers<< " euros , quedando  "<<instalations<<" euros destinado a instalaciones y "<<resto<<" euros  para otros gastos "; 
    



    return 0;
}