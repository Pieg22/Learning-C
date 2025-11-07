//Ejemplo 2. Calcular potencias de 2 hasta un valor máximo dado por el usuario.

//Calcula potencias de 2 menores que un valor maximo
#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
   int maximo, pot, j; 
   cout<<"Introduce el valor maximo"<<endl;
   cin >> maximo;
   pot = 1; j = 1;                
   while(2*pot < maximo){
    pot = pow(2, j);
    cout<<"2 elevado a "<<j<<" es "<<pot<<endl;
    j++;
   } 
    return 0;
}