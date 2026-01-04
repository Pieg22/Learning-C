
/* Implementa una función NO recursiva que muestre por pantalla en orden inverso
las cifras de un número
Hay que implementar el programa entero, no solo la función.
Los programas de los ejercicios 7 y 8 hacen lo mismo, pero uno usa una función recursiva (ej7) y el otro usa una función iterativa (ej8). Os recomiendo que hagáis primero el 8 y luego el 7.*/


#include <iostream>
using namespace std ; 

//prototipo
void lectura_inversa(int numero);

int main (){
    //variable numero_dado_por_user
    int numero_largo;

    cout << "Introduce un numero de minimo dos cifras : " <<endl;
    cin >> numero_largo ; 
    //llamada funcion
    lectura_inversa(numero_largo) ; 
    return 0 ; 
}

void lectura_inversa(int numero){
    //bucle inverso y variable para el bucle 
    cout << "El numero al reves es: "; 

    while(numero > 0) { // corre el bucle mientras queden numeros enteros difernetes de 0 

        int ultima_cifra = numero % 10 ; // el resto de dividir entre 10 de un int siempre da la última cifra 

        cout << ultima_cifra ;  // imprimimos el numero que tenemos recien calculado en ese momento 

        numero = numero / 10 ; // nos quitamos de encima el decimal  que proviene del resto 
    } //  llegamos aquí con un numero menos , pero si aún queda alguno de la cifra larga , volvemos arriba y vamos por el siguiente 
 
    cout << endl ;  // salto de linea cuando no se cumple la condicion del bucle 
}