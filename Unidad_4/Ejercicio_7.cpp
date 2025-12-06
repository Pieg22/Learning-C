/*Mejora el programa anterior para que permita introducir hasta un máximo de
100 libros. Además del introducido por el usuario, introduce por código dos libros
más.*/

#include <iostream> // Libreria de persona a consola , consola a persona 
#include <string> // Para utilizar las funciones de getline conjunto con ws 
using namespace std ; // std:: 

const int maxlibros = 100 ; // La máxima capacidad  del registro 


int main (){
    struct database {  // nombramos nuestra estructura de datos  para guardar la informacion sobre los libros
        string title ;  // declaramos una variable string para el titulo
        string writter ;  // variable autor 
        int year ;  // variable de enteros para  el año
        float precio ; //  variable con decimales para el precio
    } ;  // Algo muy importante en este caso con las estructuras es necesario poner ; después del } , si no se rompe todo ! 
    
    database libros[maxlibros] ;  // montamos nuestra esctructura de datos  encima de "libros" , de esta manera tenemos facil acceso a la misma . 
    int registrer ; // Esta variable la utilizaremos para acceder al registro de la memoria de un libro demandado para mostrar su información . 
// Aquí debajo creamos los dos libros pre definidos 
    libros[0].title = "Siete años en el tibet" ; 
    libros[0].writter = "Heinrich Harrer" ; 
    libros[0].year = 1953 ; 
    libros[0].precio = 4,75 ; 

    libros[1].title = "Un mundo feliz " ; 
    libros[1].writter = "Aldous huxley" ; 
    libros[1].year = 1932 ; 
    libros[1].precio = 9,75 ;

for (int i = 2 ; i < maxlibros  ; i++){ // Empezamos el bucle en i = 2 , ya que 0 y 1 ya estan ocupados en la memoria por los dos libros pre establecidos , mantenemos el bucle con un max de maxlibros (100)
    cout << "Introduce el titulo del libro  (o escribe 'fin' para saltar al registro): " <<endl;  // Pedimos al user el titulo del libro o pasar al registro 
    getline(cin >> ws, libros[i].title) ; // guardamos el valor que introduce el user para ver si segimos con la lectura de un nuevo lirbo o saltamos 

    if(libros[i].title == "fin") break ; // Con este if , creamos la acción de salir del bucle , si el user escribe "fin"

    cout << "Quien es el escritor/ra ? " <<endl;
    getline(cin >> ws, libros[i].writter); // Almacenamos el nombre del/la autor/ra

    cout << "De que año es el libro ? " <<endl; 
    cin >> libros[i].year ;  // almacenamos el año int

    cout << "Que precio tiene el tomo ? " <<endl;
    cin >> libros[i].precio ;  // almacenamos el precio float

    
}

    cout << "Introduce el numero de registro para encontrar el libro : " <<endl; // Pedimos al user el numero de registro en la memoria a la cual quiere acceder , si una prestablecida o una que haya creado recientemente
    cin >> registrer ; // guardamos el valor de la pregunta anterior , para recoger el nº de registro y imprimir en consola la info del libro deseado 

    cout << "Caracteristicas del libro : " << "\n" 
            " - Titulo : " <<libros[registrer].title<< "\n" // registrer hace de int , para buscar el libro en la memoria 
            " - Autor : " <<libros[registrer].writter<< "\n"
            " - Año : " <<libros[registrer].year<< "\n"
            " - Precio : " <<libros[registrer].precio<< endl; 




    return 0; 
}