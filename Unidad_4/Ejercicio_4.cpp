/*Implementa un programa que pida los elementos de una matriz de tamaño no
superior a 10x10 e indique si la matriz es diagonal simétrica, triangular superior y/o
la matriz identidad.
 -Para ver simetria , primeramente hay que trasponerla y ver si los elementos que crean la diagional , al trasponerla estan en el mismo sitio o no , buscaremos que no esten en el mismo 
sitio . Una matriz cuadrada siempre tendrá la diagonal identica  tanto la original como la traspuesta ? 
 - para triangular superior necesitamos saber si la parte inferior de la diagional , esta llena de 0 ( U = upper triangular matrix) 
 */

#include <iostream> // Libreria de interaccion con la consola 
using namespace std ;  // std::

const int nmax = 10 ;  // Constante declarada para el maximo de la dimension de la matriz

int main (){
    float matrix [nmax][nmax] ; // Declaramos un array para la matriz , añadiendo su constante en  los dos parametros 
    int nuser ;  // variable que utilizaremos para pedir al user la dimension de la matriz 
    bool diagonal = true  , triangular = true ; // nuestras banderas para realizar las comprobaciones que pide el enunciado 

    cout << "Introduce el numero de filas de la matriz cuadrada (<10) : "<<endl; // pedimos datos al user en consola 
    cin >> nuser; // Guardamos el valor de la dimension de la matriz que creara el user 

    for(int i = 0 ; i < nuser ; i++){ // bucle para crear las filas de la matriz 
        for (int j = 0; j < nuser; j++) // bucle para crear las columnas de la matriz 
        {
         cout<< "Introduce el elemento i "<< i+1 << " y j " << j+1 <<endl;  // salida de consola con interaccion con los bucles para determinar los valores de cada posicion de la matriz 
         cin >> matrix[i][j] ; // guardamos cada entrada de cada posicion de la matriz  . 
        }
        }

     for(int i = 0 ; i < nuser ; i++){ // reutilizamos los bucles anteriores para realizar las comprobaciones 
        for (int j = 0; j < nuser; j++)
        {
         if (matrix[i][j] != matrix[j][i]) {diagonal = false ; } ; // Si la matriz original es diferente a la espejo , la diagonal no va a ser igual , por lo tanto no será diagonal simetrica

         if ( i > j  && matrix[i][j] != 0 ) {triangular = false ; } ; // i > j , comprende que bajamos hasta la parte inferior de la matriz , y ademas , si NO encontramos un 0  , no sera 
                                                                      // una matriz triangular! 


        }
        
    }

    if(diagonal == true ) cout << "La matriz es diagonal simetrica. " <<endl; // Comprobamos bandera diagonal 
    else cout << "La matriz no es diagonal simetrica . " <<endl;

    if ( triangular == true ) cout << "La matriz es triangular superior " <<endl; // comprobamos bandera triangular 
    else cout << "La matriz no es triangular superior . " <<endl;



    return 0 ; 
 }

