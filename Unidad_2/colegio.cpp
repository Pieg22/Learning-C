/*5. Implementa un programa que gestiona la partida presupuestaria de un colegio
internacional. Se deben introducir los ingresos en euros, dólares y rublos, y el
programa debe indicar, en euros, cuánto dinero se destina al profesorado (60%
del total), cuánto dinero se dedica a mejorar las instalaciones (20% del total) y
cuánto a otros gastos (el resto). */ 
#include <iostream>
#include <string>
int main () {
    int ingresos_e = 100 ;
    int exchange_1 = ingresos_e * 1.16 ; 
    int exchange_2 = ingresos_e * 94.58 ;
    int teachers = (ingresos_e * 60) / 100 ;  //Dinero destinado al profesorado 
    int instalations = (ingresos_e * 20) / 100 ; //Dinero destinado a las instalaciones 
    int resto = (ingresos_e * 20) / 100 ; //Dinero destinado a otros gastos 
    
    std::cout << "El dinero destinado a los profesores asciende a : "<<teachers<< " euros , quedando  "<<instalations<<" euros destinado a instalaciones y "<<resto<<" euros  para otros gastos "; 
    



    return 0;
}