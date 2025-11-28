#include <iostream> 
using namespace std;
 
int main (){         
 
    struct basedatos{
        string marca;
        int year;
        float precio;
    } ;    
 
    basedatos miscoches;
    cout<<"Introduce la marca"<<endl;
    getline(cin >> ws, miscoches.marca);
 
    cout<<"Introduce el año"<<endl;    
    cin >> miscoches.year;
    cout<<"Introduce el precio"<<endl;    
    cin >> miscoches.precio;
    cout<<"Marca: "<<miscoches.marca<<endl;
    cout<<"Año: "<<miscoches.year<<endl;
    cout<<"Precio: "<<miscoches.precio<<endl;

    return 0 ; 
}
 