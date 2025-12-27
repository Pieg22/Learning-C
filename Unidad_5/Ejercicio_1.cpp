/*Realiza una función que, dado un vector de N números enteros, devuelva la
posición del primer cero que encuentre en el vector.*/

#include <iostream>
using namespace std; 
const int N_numeros = 100 ; // Constante para definir la entrada de numeros 

int Find_the_position(int numeros[],int tamanio); //  Prototipo  : Avisamos al compilador de que esta funcion existe 
                                                  // para que el main sepa como usarla antes de leer el codigo completo abajo  . 
int main (){

    int numeros[N_numeros] ;  // Variable array con la cantidad de cajones definida por la constante 
    int recogida ; // Variable que utilizaremos para recojer la cantidad de numeros que querra introducir el user

    cout << "Cuantos numeros quieres introducir ? " <<endl ;  // Pedimos al user 
    cin >> recogida ; // Guardamos el int que inidicara al programa la cantidad finita de numeros que va a introducir el user , el que mandara sobre el bucle for .

    for ( int i = 0  ; recogida > i ; i++) { // En el bucle llenamos tantos cajones como haya querido utilizar en recogida el user 
        
        cout << " Introduce un numero por favor : " <<endl ; // Mensage que se imprime a cada vuelta del bucle 
        cin >> numeros[i] ; // Cada numero que el user introduce en cada vuelta del bucle , lo guardamos uno por uno en los cajones del array numeros[100] ; 

    } 

    int resultado = Find_the_position(numeros,recogida) ; // Esta variable almacena , guarda y recoje . Es decir , sin esta funcion c++ cojería el resultado en la 
    //memoria temporal , en el instante que la funcion termina si no tenemos esta variable el procesador cojera el trabajo de la funcion y la tirara a la basura . 
    
    return 0; 
}


int Find_the_position (int numeros[], int tamanio){ // Funcion para realizar la busqueda de el 0 dentro de el array 

    for (int k = 0 ; k < tamanio ; k++){  // Revisamos todos los cajones que haya creado el user para buscar ese 0 . 

        if (numeros[k] == 0 ){ // Cuando encuentra el 0 , se chiva de su posicion . 
            cout << "La posicion en la que se encuentra el 0 es : " << k <<endl;  

            return k ;  // aquí se le indica al programa , que a encontrado el 0 satisfactoriamente . 
        }

    }
    cout << "No se ha encontrado ningun 0." << endl; // Si el programa no se ejecuta en su totalidad en el if anterior . 
    return -1; // el programa lo que ara es devolver este return -1 , para indicar que no a encontrado ningun 0 .  
  
} 