// 4. Implementa un programa que, dado radio de una circunferencia, calcule su perímetro . 
//#define _USE_MATH_DEFINES //Ojo he encontrado la libreria oculta para utilizar PI! https://cplusplus.com/forum/general/102410/

#include <iostream> // Importamos la libreria de comunicación 
#include <cmath>
int main () {     // Empieza nuestro programa principal 
    int radio , calculo ;  // Variable nombrada radio y calculo  , con data type int
    std::cout << "Introduce el radio de tu circunferencia : " ; // Clasico Input para preguntar el valor del radio de la circunferencia 
    std::cin >> radio ;  // Guardamos aquí el valor que nos dió el user en el paso anterior 
    calculo = pow(radio , 2) * 3.1415 ;
    std::cout << "El radio de la circunferencia es : " << calculo << "\n" ;  // Se imprime el valor del resultado de calculo 


 return 0; // el programa retorna 0 si a funcionado todo bien , de lo contrario saldría un nonzero , para indicar que a fallado el programa . En el "Output" podemos observarlo 

}