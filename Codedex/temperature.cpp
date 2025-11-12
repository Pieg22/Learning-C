// Some example of basic maths 
/* #include <iostream>
int main () {
int score = 0;         // score is 0 

score = 4 + 3;         // score is now 7 
score = 4 - 3;         // score is now 1 
score = 4 * 3;         // score is now 12 
score = 4 / 3;         // score is now 1 since it can't be 1.333
score = 4 % 3;         // score is now 1 

std::cout << score;    // Output: 1
return 0 ; 
}

/*Create a temperature.cpp program that converts a number from Fahrenheit (°F) to Celsius (°C).

Google the current temperature of Brooklyn, NY (where Codédex is based) in °F.

Use the following formula and write it out in C++:*/

#include <iostream>
int main () {
    double actual = 61 ;
    double celsius = (actual - 32) / 1.8 ;
    std::cout << celsius ; 
    return 0;
}