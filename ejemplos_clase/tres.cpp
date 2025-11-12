/* Ejemplo 3. Haz un prgrama que despliegue un menú de opciones:
"Opcion a - Declarar ingresos"
"Opcion b - Declarar impuestos"
 "Opcion c - Declarar bancarrota"
 "Opcion d - Salir de la aplicacion" */ 

//Despliega un menu
#include <iostream>
using namespace std;
 
int main()
{
   char opcion;
   cout<<"Elige una de estas opciones"<<endl;
   cout<<"Opcion a - Declarar ingresos"<<endl;
   cout<<"Opcion b - Declarar impuestos"<<endl;
   cout<<"Opcion c - Declarar bancarrota"<<endl;
   cout<<"Opcion d - Salir de la aplicacion"<<endl;
   cin>>opcion;
   switch(opcion){
       case 'a':
         cout<<"Has elegido"<<endl;
         cout<<"Declarar ingresos"<<endl;
       break;
       case 'b':
         cout<<"Has elegido"<<endl;
         cout<<"Declarar impuestos"<<endl;
       break;  
       case 'c':
         cout<<"Has elegido"<<endl;
         cout<<"Declarar bancarrota"<<endl;
       break;
       case 'd':
         cout<<"Has elegido"<<endl;
         cout<<"Salir de la aplicacion"<<endl;
       break;
   }
    return 0;
}