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

void show_con_numero(int registrer);
void nuevo_libro (string);
void show_con_nombre(string registrer);



int main (){
    //variables + what we can put in while () ? 
string comando ; 
database liros ; 
    
do {
    // --- ZONA DE TRABAJO ---
        cout << "\n--- NUEVA VUELTA ---" << endl;
        
        // Llamamos a las funciones
        

        // --- ZONA DE CONTROL ---
        cout << "Si quieres salir, escribe: 'quiero terminar con el programa'" << endl;
        cout << "Si quieres seguir, pulsa Enter o escribe cualquier otra cosa." << endl;
        
        // ??? (HUECO 2: ¿Cómo leemos una frase entera con espacios?)

 }while(comando != "quiero terminar con el programa");
    return 0; 
}

void nuevo_libro (string){
 for (int i = 2 ; i < max_libros  ; i++){ // Empezamos el bucle en i = 2 , ya que 0 y 1 ya estan ocupados en la memoria por los dos libros pre establecidos , mantenemos el bucle con un max de maxlibros (100)
    cout << "Introduce el titulo del libro  (o escribe 'fin' para saltar al registro): " <<endl;  // Pedimos al user el titulo del libro o pasar al registro 
    getline(cin >> ws, libros[i].title) ; // guardamos el valor que introduce el user para ver si segimos con la lectura de un nuevo lirbo o saltamos 

    if(libros[i].title == "fin") break ; // Con este if , creamos la acción de salir del bucle , si el user escribe "fin"

    cout << "Quien es el escritor/ra ? " <<endl;
    getline(cin >> ws, libros[i].writter); // Almacenamos el nombre del/la autor/ra

    cout << "De que año es el libro ? " <<endl; 
    cin >> libros[i].year ;  // almacenamos el año int

    cout << "Que precio tiene el tomo ? " <<endl;
    cin >> libros[i].precio ;  // almacenamos el precio float
    

};

 void show_con_numero(int registrer);{
     cout << "Introduce el numero de registro para encontrar el libro : " <<endl; // Pedimos al user el numero de registro en la memoria a la cual quiere acceder , si una prestablecida o una que haya creado recientemente
     cin >> registrer ; // guardamos el valor de la pregunta anterior , para recoger el nº de registro y imprimir en consola la info del libro deseado 

    cout << "Caracteristicas del libro : " << "\n" 
            " - Titulo : " <<libros[registrer -1 ].title<< "\n" // registrer hace de int , para buscar el libro en la memoria 
            " - Autor : " <<libros[registrer -1 ].writter<< "\n"
            " - Año : " <<libros[registrer -1 ].year<< "\n"
            " - Precio : " <<libros[registrer -1 ].precio<< endl; 

}

void show_con_nombre(database libros[max_libros],int total_ocupados ,string registrer);{
     cout << "Introduce el nombre del autor/a para encontrar el libro : " <<endl; // Pedimos al user el numero de registro en la memoria a la cual quiere acceder , si una prestablecida o una que haya creado recientemente
     getline(cin >> ws, registrer ); // guardamos el valor de la pregunta anterior , para recoger el nº de registro y imprimir en consola la info del libro deseado 

     bool encontrado = false ; // flag para determinar si hemos encontrado el libro o no

     for( int i = 0 ; i < max_libros ; i++ ){

     if(registrer == libros[i].writter) {

     cout << "Caracteristicas del libro : " << "\n" 
            " - Titulo : " <<libros[i].title<< "\n" // registrer hace de int , para buscar el libro en la memoria 
            " - Autor : " <<libros[i].writter<< "\n"
            " - Año : " <<libros[i].year<< "\n"
            " - Precio : " <<libros[i].precio<< endl; 
         }
    } 
}

