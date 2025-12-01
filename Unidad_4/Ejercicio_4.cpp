/*Implementa un programa que pida los elementos de una matriz de tamaño no
superior a 10x10 e indique si la matriz es diagonal simétrica, triangular superior y/o
la matriz identidad.
 -Para ver simetria , primeramente hay que trasponerla y ver si los elementos que crean la diagional , al trasponerla estan en el mismo sitio o no , buscaremos que no esten en el mismo 
sitio . Una matriz cuadrada siempre tendrá la diagonal identica  tanto la original como la traspuesta . 
 - para triangular superior necesitamos saber si la parte inferior de la diagional , esta llena de 0 ( U = upper triangular matrix) 
 */

#include <iostream>
using namespace std ; 

const int nmax = 10 ; 

int main (){
    float matrix [nmax][nmax] ;
    int nuser ; 
    bool diagonal = true , triangular = true ; 

    cout << "Introduce el numero de filas de la matriz cuadrada (<10) : "<<endl;
    cin >> nuser;

    for(int i = 0 ; i < nuser ; i++){
        for (int j = 0; j < nuser; j++)
        {
         cout<< "Introduce el elemento i "<< i+1 << " y j " << j+1 <<endl; 
         cin >> matrix[i][j] ; 
        }
        }

     for(int i = 0 ; i < nuser ; i++){
        for (int j = 0; j < nuser; j++)
        {
         if (matrix[-i -1] != 0) triangular = false ; 


        }
        
    }
    return 0 ; 
 }

