/* If the temperature is greater than or equal to 100°F, the program should output “You have a fever. 🤒”
Otherwise, it should output “You do not have a fever. 🕺*/

#include <iostream>
int main () { 
    int temp ;
    std::cout << "Introduce your actual corporal temperature : " ; 
    std::cin >> temp ; 
    if ( temp >= 100){
        std::cout << "You have a fever ofc ." ;
    }
    else  {
        std::cout << "You do not have a fever . Fiesta!" ;

    }
    return 0 ; 
}
