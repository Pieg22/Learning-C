//Ejemplo 1. Calcular las potencias de 2 que indique el usuario. 


#include <iostream>

using namespace std;
 
int main()

{

   int numpot, pot; 

   cout<<"Cuantas potencias de 2 quieres ver"<<endl;

   cin >> numpot;

   pot = 1;     

   for(int j = 1; j <= numpot; j++){   //j = j + 1 es lo mismo que j++
    // variable  ; condicion ; condicion 
    pot = pot*2;

    cout<<"2 elevado a "<<j<<" es "<<pot<<endl;

   } 

    return 0;

}
 