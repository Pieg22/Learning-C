/*Implementa una función recursiva que muestre por pantalla en orden inverso las
cifras de un número. Para ello, utiliza divisiones sucesivas por 10 y la operación
módulo
Hay que implementar el programa entero, no solo la función.
Los programas de los ejercicios 7 y 8 hacen lo mismo, pero uno usa una función recursiva (ej7) y el otro usa una función iterativa (ej8). Os recomiendo que hagáis primero el 8 y luego el 7.*/


#include <iostream>
using namespace std ; 

//prototipo
void lectura_inversa_recursiva(int numero);

int main (){
    //variable numero_dado_por_user
    int numero_largo;

    cout << "Introduce un numero de minimo dos cifras : " <<endl;
    cin >> numero_largo ; 
    
    cout << "El numero al reves es: "; // integramos aquí el cout de la función para que no se repita todo el rato como la función

    //llamada funcion 
    lectura_inversa_recursiva(numero_largo) ; 
    
    //cout << endl; // salto de linea  
    return 0 ; 
}

void lectura_inversa_recursiva(int numero){
    
    if(numero == 0){ // Esto viene a ser como la condición que teniamos en el while , para cuando este en la situación no se vuelva infinito y pare !
        return;
    }
     cout << (numero % 10)<< " "; // el resto de dividir entre 10 de un int siempre da la última cifra 

     lectura_inversa_recursiva(numero/10); // llamada a si misma con el argumento de quitarnos de encima el decimal 


}