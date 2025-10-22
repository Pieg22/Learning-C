// This is the first exercice in C++ for Roberto 

//3. Diseña e implementa un programa que calcule el área de un triángulo.

#include <iostream> //Importamos la libreria con la que podemos interactuar con la terminal 
int main () {       //Aquí empieza nuestro programa 
    
    double base ;      // Creamos la variable nombrada base con su data type double , para guardar la base del triángulo. 
    double high ;      // Variable nombrada high con data type double , para guardar la altura del triángulo . 
    std::cout << "Please introduce the base of the triangle :  " ; //Creamos un print en la terminal para que el user introduzca la base del triángulo
    std::cin >> base ;  // Utilizamos la variable base , para guardar el valor del anterior input ( la base )
    std::cout << "Can you write the high of the triangle : " ;  // Otro print para preguntar por la altura del triángulo 
    std::cin >> high ;  // Guardamos el valor introducido anteriormente como la altura del triángulo 
    
    if ( base > 0 && high > 0) {            //Creamos este condicional , por si se cumplen las dos condiciones , se ejecute su interior 
                                            // True and true == Acción . Si alguno de los dos es False no sigue adelante el programa 
        std::cout << "The area of your triangle is " << base * high / 2 << "\n" ;  // Tras cumplirse la condición  se ejecuta este print junto con el formateo del string que le añade la operación final. 

    }


    return 0 ; }  // Si todo va bien , el programa retorna 0 . De lo contrario reotrna a veces un -1 para indicar que a fallado el programa . En el "output" podemos verlo 




