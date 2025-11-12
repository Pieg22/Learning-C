/*
Have you wondered how old your cat is when they are older? Your furry friend might be cute and small, but they are older than you realize! 🐱
To put it into perspective: The first two cat years count as 24 human years (the first year = 15 human years, the second year = 9 human years).
Each additional cat year counts as 4 human years.
Write a C++ program that asks the user to enter their cat's age and then calculate the equivalent human age right meow.
*/

#include <iostream>
int main () {
    int cat_age ;
    std::cout << "Please , introduce your cat's age : " ; 
    std::cin >> cat_age ; 
    double calculo_age  = (cat_age - 2 ) * 4 + 24 ;
    std::cout<< "Your cat is "<<calculo_age<<" years old in human years ofc.  " ;

    return 0 ; 
}