/*Implementa un programa donde el usuario introduce una frase (con caracteres
anglosajones) y nos indique si esa frase es o no palíndroma.
ASCI ? Podemos prescindir de los espacios entre palabras .
ASCI no , solamente necesitamos comparar las posiciones 
Acordemonos que string ya funciona como un array */

#include <iostream> // Libreria de interaccion 
#include <string> // Libreria de trabajo con caracteres 
using namespace std; // ::std 

int main (){
    string frase ; // Variable que utilizaremos para trabajar el palindromo 


    bool frase_pali = true ; // Nuestra red flag para operar de una forma sencilla y segura 

    cout << "Introduce una frase con caracteres anglosajones en minusculas : " <<endl; 
    getline(cin, frase) ;  // Guardamos el valor introducido en la linea anterior 

    int longitud =  frase.length() ; // Creamos la variable para contar la longitud de la palabra , es importante crearla en este punto , ya que anteriormente es donde adquirimos la palabra 
                                     // Si la ponemos antes del getline , nos valdría todo el rato 0 . 
    


    for (int i = 0 ; i < longitud / 2  ; i++ ) { // Bucle tipico excepto la condición , aquí funciona de esta manera  " longitud/2 " porque solo necesitamos ver la mitad de la palabra 
                                                 // no es necesario ver toda la palabra , entonces comprobamos solamente hasta el centro de la palabra 

        if ( frase[i] != frase[longitud -1 -i]) { // frase [i] pertenece a la letra 0 por la izquierda (en su forma original)  . frase[longitud -1] Hasta aquí esto representa la ultima 
           frase_pali = false ;                  // castilla de nuestro string frase , con [-i]  es lo que nos permite "caminar hacia atras " para analizar los caracteres desde la derecha
                                                 // y con != lo que buscamos , es que exista una diferencia entre ambos lados de la palabra , lo que es lo determinante para el caso de palindromo
            cout << " La palabra " << frase << " no es palindroma "<<endl; 
            break; 
        } }

    if( frase_pali == true) cout << " La palabra "  << frase <<  " es palindroma ." << endl ;  // si nuestra bandera aun esta verde al pasar el bucle . Es que es palindroma ! 
    

    return 0 ; 

}