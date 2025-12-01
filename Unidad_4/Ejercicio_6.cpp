/*Queremos hacer un programa que muestre información sobre libros. Determina
qué tipo de estructura de datos debería implementar un libro y realiza un
programa que lea los datos del teclado y los muestre por pantalla.*/

#include <iostream>
#include <string>
using namespace std ; 


int main (){
    struct database {
        string title ; 
        string category ;
        string writter ;  
        int npages ; 
        float precio ; 
    } ; 

    database libros ; 
    

    cout << "Introduce el titulo del libro : " <<endl;
    getline(cin >> ws, libros.title);

    cout << "Escribe la categoria del libro : " <<endl;
    getline(cin >> ws, libros.category );

    cout << "Quien es el escritor/ra ? " <<endl;
    getline(cin >> ws, libros.writter);

    cout << "Cuantas paginas tiene el libro ? " <<endl;
    cin >> libros.npages ; 

    cout << "Que precio tiene el tomo ? " <<endl;
    cin >> libros.precio ; 

    cout << "Caracteristicas del libro : " << "\n" 
            " - Titulo : " <<libros.title<< "\n"
            " - Categoria : " <<libros.category<< "\n"
            " - Autor : " <<libros.writter<< "\n"
            " - Nº paginas : " <<libros.npages<< "\n"
            " - Precio : " <<libros.precio<< endl; 




    return 0; 
}