// This is the first exercice in C++ for Roberto 

//3. Diseña e implementa un programa que calcule el área de un triángulo.

#include <iostream> //Importamos la libreria con la que podemos interactuar con la terminal 
int main () {       //Aquí empieza nuestro programa 
    
    int base , high , calculo;      // Creamos la variable nombrada base y high con su data type int , para guardar la base y altura  del triángulo. 
    std::cout << "Please introduce the base of the triangle and high in same order with space betwen:  " ; //Creamos un print en la terminal para que el user introduzca la base del triángulo
    std::cin >> base , high ;  // Utilizamos la variable base y high , para guardar el valor del anterior input
    calculo = (base * high) / 2 ; //Se realiza el calculo del área
    std::cout << "The area of your triangle is "<< calculo << "\n" ;
   
    return 0 ; }  // Si todo va bien , el programa retorna 0 . De lo contrario reotrna a veces un 1 para indicar que a fallado el programa . En el "output" podemos verlo 




