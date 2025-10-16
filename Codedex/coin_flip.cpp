// Here we will see how the conditionals work in C++ , with the follow example : 

#include <iostream> // Standard Input / Output Streams Library
#include <cstdlib> //C standard general utilities library 

int main () {

    srand(time(NULL)) ; 
     int num = std::rand() % 2 ; //Generates a random number , 0 or 1

     if (num > 0.5) {
        std::cout << "Heads \n" ;  // It prints Heads when number == 1

     }
     else {                      // When number is 0 it prints Tails
        std::cout << "Tails\n" ; 

     }
    return 0 ; 
}
