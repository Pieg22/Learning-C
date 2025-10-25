// 4. Implementa un programa que, dado radio de una circunferencia, calcule su perímetro . 
//#define _USE_MATH_DEFINES //Ojo he encontrado la libreria oculta para utilizar PI! https://cplusplus.com/forum/general/102410/

#include <iostream> // Importamos la libreria de comunicación 
int main () {     // Empieza nuestro programa principal 
    int radio ;  // Variable nombrada radio , con data type double 
    std::cout << "Introduce el radio de tu circunferencia : " ; // Clasico Input para preguntar el valor del radio de la circunferencia 
    std::cin >> radio ;  // Guardamos aquí el valor que nos dió el user en el paso anterior 
    std::cout << "El perímetro de tu circunferencia es :"<< radio * radio  * 3.1415<< " \n " ;  // Print con un string y el cálculo del perimetro de la circunferencia utilizando el formateo dentro del string
    

return 0; // el programa retorna 0 si a funcionado todo bien , de lo contrario saldría un nonzero , para indicar que a fallado el programa . En el "Output" podemos observarlo 

}

