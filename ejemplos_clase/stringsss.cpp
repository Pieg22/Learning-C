#include <iostream> 
using namespace std;
 
int main (){         
 
    string frase, sust = "XX", palabra1, palabra2;
    int longitud;
    cout<<"Introduce una palabra"<<endl;
    getline(cin >> ws, palabra1);
 
    cout<<"Introduce otra palabra"<<endl;
    getline(cin >> ws, palabra2);
 
    frase = palabra1 + palabra2;
    cout<< frase<<endl;
    longitud = frase.length();
    cout<<"La longitud de la frase es "<<longitud<<endl;
/*    
    frase.replace(2, 2, sust);
    cout<< frase<<endl;
    frase.insert(5, "Y");
    cout<< frase<<endl;
*/  
    return 0 ; 
}