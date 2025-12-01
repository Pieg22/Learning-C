/*Queremos hacer un programa que muestre información sobre libros. Determina
qué tipo de estructura de datos debería implementar un libro y realiza un
programa que lea los datos del teclado y los muestre por pantalla.*/

#include <iostream> // Libreria de persona a consola , consola a persona 
#include <string> // Para utilizar las funciones de getline conjunto con ws 
using namespace std ; // std:: 


int main (){
    struct database {  // nombramos nuestra estructura de datos  para guardar la informacion sobre los libros
        string title ;  // declaramos una variable string para el titulo
        string writter ;  // variable autor 
        int year ;  // variable de enteros para  el año
        float precio ; //  variable con decimales para el precio
    } ;  // Algo muy importante en este caso con las estructuras es necesario poner ; después del } , si no se rompe todo ! 

    database libros ;  // montamos nuestra esctructura de datos  encima de "libros" , de esta manera tenemos facil acceso a la misma . 
    
// A partir de aquí hacia abajo , simplemente pedimos datos , guardamos datos , y finalmente imprimimos los datos de nuevo . 
    cout << "Introduce el titulo del libro : " <<endl; 
    getline(cin >> ws, libros.title);

    cout << "Quien es el escritor/ra ? " <<endl;
    getline(cin >> ws, libros.writter);

    cout << "De que año es el libro ? " <<endl;
    cin >> libros.year ; 

    cout << "Que precio tiene el tomo ? " <<endl;
    cin >> libros.precio ; 

    cout << "Caracteristicas del libro : " << "\n" 
            " - Titulo : " <<libros.title<< "\n"
            " - Autor : " <<libros.writter<< "\n"
            " - Año : " <<libros.year<< "\n"
            " - Precio : " <<libros.precio<< endl; 




    return 0; 
}