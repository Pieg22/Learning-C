/*5. Implementa un programa que gestiona la partida presupuestaria de un colegio
internacional. Se deben introducir los ingresos en euros, dólares y rublos, y el
programa debe indicar, en euros, cuánto dinero se destina al profesorado (60%
del total), cuánto dinero se dedica a mejorar las instalaciones (20% del total) y
cuánto a otros gastos (el resto). */ 
#include <iostream>
#include <string>
int main () {
    double ingresos_e = 100 ;
    double exchange_1 = ingresos_e * 1.16 ; 
    double exchange_2 = ingresos_e * 94.58 ;
    double teachers = (ingresos_e * 60) / 100 ;  //Dinero destinado al profesorado 
    double instalations = (ingresos_e * 20) / 100 ; //Dinero destinado a las instalaciones 
    double resto = (ingresos_e * 20) / 100 ; //Dinero destinado a otros gastos 
    
    std::cout << "El dinero destinado a los profesores asciende a : "<<teachers<< "\n"  "Quedando : "<<instalations<<" destinado a instalaciones " \n" Y "<<resto<<" para otros gastos "; 
    



    return 0;
}