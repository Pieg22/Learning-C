/*Realiza un programa que pida N números al usuario y una cadena de texto. Si la
cadena es más corta que el vector, se debe reemplazar el contenido del vector
por cada carácter de la cadena (hasta llegar al final de la cadena). Si es al
contrario, se deben reemplazar los caracteres de la cadena por los números del
vector
No podemos utilizar swap porque las variables son de diferentes longitudes , y para que swap funcione , tienen que ser identicos en longitud */


#include <iostream> 
#include <string>
using namespace std ;  

const int TAM = 5 ; // Constante que utilizaremos para los strings

int main (){

     string numeros[TAM] ;  // Variable string con 5 cajones
     int longitud_cadena ; // variable que utilizaremos de contador 
     string cadena ;       // Variable sin cajones pero como array 

    for (int  i = 0 ; i < TAM ; i++){  // Funciona hasta recibir las 5 entradas 
        
        cout<< "Introduce un numero entero del 1 al 20 : " <<endl; // Pedimos al user las entradas
       getline( cin >>  ws , numeros[i] );  // Guardamos cada entrada , con getline para que no se contamine el programa y detecte un enter falso y se sale las siguientes lineas 
    } 

    cout << "Introduce una cadena de texto : "<<endl; // Pedimos al user la cadena 
    getline(cin , cadena );  //Guardamos la cadena en su variable

     longitud_cadena = cadena.length() ; // Medimos la cadena  , para así traducirla a int y poder comparlarla 

    if (longitud_cadena < TAM) { // Si pepe es menor que 5
        for ( int k = longitud_cadena ; k < TAM ; k++) { // Empezamos a añadir cosas después de la cadena ya que le estamos dando el valor de "longitud_cadena " a k . 
                                                         // de la misma forma meteremos números , hasta que k sea igual de larga que TAM . 
            cadena += numeros[k] ;  // concatenamos  porque necesitamos añadir más cosas ( numeros en este caso ) , es decir , enlazamos los characteres con los numeros que entren hasta llegar
                                    // al mismo tamaño que k . 
            

        } ; 

        cout << " " << cadena <<endl; // Imprimimos la cadena fuera del bucle , después de haber sido "formateada"
    }
    else if (longitud_cadena > TAM){ // Si paquito ( 7 leters) > TAM (5) 
        for ( int q = 0 ; q < TAM ; q++) { //  // En este bucle empezamos por 0 , ya que lo que queremos es sustituir las letras por los numeros , por lo tanto queremos empezar desde 
                                               // el principio de la cadena , ( posicion 0 ofc ). 
            cadena.replace(q, 1 , numeros[q]) ; // indicamos a replace que empieze desde la posición 'q' , el 1 es la cantidad de objetos que queremos reemplazar en cada ronda 
                                                // numeros[q] coje lo que se encuentre en ese momento en "numeros" para reemplazarlo por lo que este dentro de ese cajon ! 
            
        } ; 
        
        cout << " " << cadena <<endl; 

    }
        
    return 0 ; 
}