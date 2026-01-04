
/* Implementa una función NO recursiva que muestre por pantalla en orden inverso
las cifras de un número
Hay que implementar el programa entero, no solo la función.
Los programas de los ejercicios 7 y 8 hacen lo mismo, pero uno usa una función recursiva (ej7) y el otro usa una función iterativa (ej8). Os recomiendo que hagáis primero el 8 y luego el 7.*/


#include <iostream>
using namespace std ; 

//prototipo
int lectura_inversa(int numero,int contador);

int main (){
    //variable numero_dado_por_user
    int numero_largo;

    cout << "Introduce un numero de minimo dos cifras : " <<endl;
    cin >> numero_largo ; 
    //llamada funcion
    lectura_inversa(numero_largo) ; 
    return 0 ; 
}

int lectura_inversa(int numero){
    //bucle inverso y variable para el bucle 
    int contador ; 
    for(int i = contador -1 ; i >= 0 ; i--){

        cout << " el numero en orden inverso es : " << i << endl ; 
    }
}