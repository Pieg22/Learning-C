#include <iostream> 
using namespace std;
 
const int ncoches = 2;
int main (){         
 
    struct basedatos{
        string marca;
        int year;
        float precio;
    } ;    
 
    basedatos miscoches[ncoches];
    int registro;
    for(int q = 0; q < ncoches; q++){
      cout<<"Introduce la marca"<<endl;
      getline(cin >> ws, miscoches[q].marca);
 
      cout<<"Introduce el año"<<endl;    
      cin >> miscoches[q].year;
      cout<<"Introduce el precio"<<endl;    
      cin >> miscoches[q].precio;    
    }
    cout<<"Introduce el numero de registro para visualizar"<<endl;
    cin >> registro;
    cout<<"Marca: "<<miscoches[registro-1].marca<<endl;
    cout<<"Año: "<<miscoches[registro-1].year<<endl;
    cout<<"Precio: "<<miscoches[registro-1].precio<<endl;
    return 0 ; 
}
 