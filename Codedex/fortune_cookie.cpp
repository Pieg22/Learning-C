// Here we will work with the random variable . We need include de library of <cstdlib>
//C standard general utilities library <cstdlib> 

/*Create a fortune_cookie.cpp program that gives the user random fortunes from the options below:

Don't pursue happiness – create it.
All things are difficult before they are easy.
The early bird gets the worm, but the second mouse gets the cheese.
Someone in your life needs a letter from you.
The fortune you search for is in another cookie.
Help! I'm being held prisoner in a Chinese bakery!
*/

#include <iostream>
#include <cstdlib>  //With this library we can make de random part
#include <string>  //this library give to us the power of save string values in variables . 

int main (){
    std::string fortune_1  =  "Don't pursue happiness – create it." ;  // Data tipe {variable_name} =(operator)  Value ; 
    std::string fortune_2 = "All things are difficult before they are easy.";
    std::string fortune_3 = "The early bird gets the worm, but the second mouse gets the cheese." ; 
    std::string fortune_4 = "Someone in your life needs a letter from you." ; 
    std::string fortune_5 = "The fortune you search for is in another cookie." ; 
    std::string fortune_6 = "Help! I'm being held prisoner in a Chinese bakery!" ; 

    std::cout << std::rand(fortune_1,fortune_2,) << "\n" ; 

    //Well I do it on hard way , easy If i create one std::rand() for every chance we have on the list of the fortunes ofc . 
}









/*Bonus: Some fortune cookies also include a list of “lucky” numbers used by some as lottery numbers. Add a list of random numbers between 0 and 50: */