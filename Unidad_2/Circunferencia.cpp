// 4. Implementa un programa que, dado radio de una circunferencia, calcule su perímetro . 

#include <iostream> // Importamos la libreria de comunicación 
#include <cmath>  // También importe la de calculos math , pensando que estaría inlcuido el número pi , pero ya he visto que no ! Esto no es Python hahahah
int main () {     // Empieza nuestro programa principal 
    double radio ;  // Variable nombrada radio , con data type double 
    std::cout << "Introduce el radio de tu circunferencia : " ; // Clasico Input para preguntar el valor del radio de la circunferencia 
    std::cin >> radio ;  // Guardamos aquí el valor que nos dió el user en el paso anterior 

    if (radio > 0) {   // Condicional afirmando que si el radio es un número positivo realize su interior . De lo contrario , no seguirá el programa . 
        std::cout << "El perímetro de tu circunferencia es :"<< radio * radio  * 3.141592653589793 << " \n " ;  // Print con un string y el cálculo del perimetro de la circunferencia 
    } 

 return 0; // el programa retorna 0 si a funcionado todo bien , de lo contrario saldría un nonzero , para indicar que a fallado el programa . 

}