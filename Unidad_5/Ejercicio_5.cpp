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
        string writer ;  // variable autor 
        int year ;  // variable de enteros para  el año
        float precio ; //  variable con decimales para el precio
    }libros[max_libros] ;  // Algo muy importante en este caso con las estructuras es necesario poner ; después del } , si no se rompe todo !

//añadimos variables aquí para poder acceder a ellas en las funciones , ya que si estan dentro del main block las funciones no las detectan 
int contador = 2 ; 
//A partir de aquí iran los prototipos de las funciones . 





int main (){
    //variables + what we can put in while () ? 
string comando ; 
database libros[max_libros] ; 
    
do {
    // --- ZONA DE TRABAJO ---
        cout << "\n--- NUEVA VUELTA ---" << endl;
        
        // Llamamos a las funciones
        //show_con_nombre(libros, contador);
        

        // --- ZONA DE CONTROL ---
        cout << "Si quieres salir, escribe: 'quiero terminar con el programa'" << endl;
        cout << "Si quieres seguir, pulsa Enter o escribe cualquier otra cosa." << endl;
        
        // ??? (HUECO 2: ¿Cómo leemos una frase entera con espacios?)

 }while(comando != "quiero terminar con el programa");
    return 0; 
}

void nuevo_libro (database libros[max_libros],int& contador){
 
    cout << "Introduce el titulo del libro : " <<endl;  // Pedimos al user el titulo del libro o pasar al registro 
    getline(cin >> ws, libros[contador].title) ; // guardamos el valor que introduce el user para ver si segimos con la lectura de un nuevo lirbo o saltamos 

    cout << "Quien es el escritor/ra ? " <<endl;
    getline(cin >> ws, libros[contador].writer); // Almacenamos el nombre del/la autor/ra

    cout << "De que año es el libro ? " <<endl; 
    cin >> libros[contador].year ;  // almacenamos el año int

    cout << "Que precio tiene el tomo ? " <<endl;
    cin >> libros[contador].precio ;  // almacenamos el precio float

    contador ++ ; 
    
 }


 void show_con_numero(database libros[max_libros], int contador ){
     int registrer ; 

     cout << "Introduce el numero de registro para encontrar el libro : " <<endl; // Pedimos al user el numero de registro en la memoria a la cual quiere acceder , si una prestablecida o una que haya creado recientemente
     cin >> registrer ; // guardamos el valor de la pregunta anterior , para recoger el nº de registro y imprimir en consola la info del libro deseado 

     if(registrer >= 0 && registrer < contador) { // el numero dado debe ser mayor o igual a 0 y menor que el total de libros 

     cout << "Caracteristicas del libro : " << "\n" 
            " - Titulo : " <<libros[registrer].title<< "\n" 
            " - Autor : " <<libros[registrer].writer<< "\n"
            " - Año : " <<libros[registrer].year<< "\n"
            " - Precio : " <<libros[registrer].precio<< endl; 
         }
     else cout << "No se a encontrado ningun libro con ese numero de registro."<<endl ; 
         
    } 
    



void show_con_nombre(database libros[max_libros],int contador){
    string registrer ; 
     cout << "Introduce el nombre del autor/a para encontrar el libro : " <<endl; // Pedimos al user el numero de registro en la memoria a la cual quiere acceder , si una prestablecida o una que haya creado recientemente
     getline(cin >> ws, registrer ); // guardamos el valor de la pregunta anterior , para recoger el nº de registro y imprimir en consola la info del libro deseado 

     bool encontrado = false ; // flag para determinar si hemos encontrado el libro o no

     for( int i = 0 ; i < contador ; i++ ){

     if(registrer == libros[i].writer) {

     cout << "Caracteristicas del libro : " << "\n" 
            " - Titulo : " <<libros[i].title<< "\n" 
            " - Autor : " <<libros[i].writer<< "\n"
            " - Año : " <<libros[i].year<< "\n"
            " - Precio : " <<libros[i].precio<< endl; 

    encontrado = true ; // green flag , sucess 
         }
         
    } 
     if (encontrado == false) cout << "No se a encontrado ningun libro con ese nombre."<<endl ; 
}

