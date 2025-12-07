/*Se pide implementar un programa que, dados dos números reales, se muestre
por pantalla el carácter equivalente al resto de los dos números*/
#include <iostream> 
using namespace std ;

int main (){
    float n1 , n2 ; // Dos variables float para guardar los numeros reales que quiera introducir el user 
    int calculo ;  // Variable que utilizamos para guardar nuestro resultado de la resta de los dos numeros 

    cout << "Introduce dos numeros reales con un espacio entre ellos : " <<endl;  // Pedimos los dos numeros al user
    cin >> n1 >> n2 ; // Guardamos los dos valores 

    int N1 = n1 , N2 = n2 ;  // transformamos los dos valores inicialmente floats a enteros 

    if ( N1 > N2)  calculo = N1 - N2 ;  // Nos aseguramos de restar  la cantidad pequeña al numero grande 
    else if ( N2 > N1) calculo = N2 - N1 ;
    
    cout << "En ASCII lo correspondiente a " << calculo << " es : " <<  (char)calculo << endl;  // tenemos la posibilidad de crear una variable previamente y cambiarle el dato a char 
                                                                                                // o bien añadimos (char) en el mismo print para hacer el cambio y listo . 
}