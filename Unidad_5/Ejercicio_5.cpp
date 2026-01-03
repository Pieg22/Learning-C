/*Usando la estructura de datos para almacenar libros del ejercicio del boletín
anterior, implementa un programa que, usando funciones, sea capaz de
inicializar libros con los datos que introduzca el usuario por teclado, mostrar libros
e indicarte si un libro está escrito por un autor introducido por teclado por el
usuario*/

#include <iostream>
using namespace std ; 

const int max_libros = 100 ; // Constante para determinar la cantidad de huecos en la estanteria 

struct database {  // nombramos nuestra estructura de datos  para guardar la informacion sobre los libros
        string title ;  // declaramos una variable string para el titulo
        string writter ;  // variable autor 
        int year ;  // variable de enteros para  el año
        float precio ; //  variable con decimales para el precio
    }libros[max_libros] ;  // Algo muy importante en este caso con las estructuras es necesario poner ; después del } , si no se rompe todo !
//A partir de aquí iran los prototipos de las funciones . 

int main (){
    //variables + what we can put in while () ? 
string comando ; 
database liros ; 
    
    



    do {

    }while();
    return 0; 
}

void nuevo_libro (){
    cout << "A continuacion introduce los caracteres del nuevo libro"<<endl;
    for( int i= 0 ; i < 4 ; i++){ // 4 porque el database se compone de 4 componentes ofc 
        

    }
    

}

 void show_con_numero(int registrer){
     cout << "Introduce el numero de registro para encontrar el libro : " <<endl; // Pedimos al user el numero de registro en la memoria a la cual quiere acceder , si una prestablecida o una que haya creado recientemente
     cin >> registrer ; // guardamos el valor de la pregunta anterior , para recoger el nº de registro y imprimir en consola la info del libro deseado 

    cout << "Caracteristicas del libro : " << "\n" 
            " - Titulo : " <<libros[registrer -1 ].title<< "\n" // registrer hace de int , para buscar el libro en la memoria 
            " - Autor : " <<libros[registrer -1 ].writter<< "\n"
            " - Año : " <<libros[registrer -1 ].year<< "\n"
            " - Precio : " <<libros[registrer -1 ].precio<< endl; 

}

void show_con_nombre(string registrer){
     cout << "Introduce el nombre del autor/a para encontrar el libro : " <<endl; // Pedimos al user el numero de registro en la memoria a la cual quiere acceder , si una prestablecida o una que haya creado recientemente
     cin >> registrer ; // guardamos el valor de la pregunta anterior , para recoger el nº de registro y imprimir en consola la info del libro deseado 

    cout << "Caracteristicas del libro : " << "\n" 
            " - Titulo : " <<libros[registrer].title<< "\n" // registrer hace de int , para buscar el libro en la memoria 
            " - Autor : " <<libros[registrer].writter<< "\n"
            " - Año : " <<libros[registrer].year<< "\n"
            " - Precio : " <<libros[registrer].precio<< endl; 
}

