// So if here works diferent than python , here we use ' if , else if , else ' . well just the mid word change , because in python is elif , more or less , same thing . 

/*Find your level on Codédex on your user profile and store it in a level variable.*/

#include <iostream>
int main () {

    int level  ;

    std::cout << "Write your level account in Codedex :"; 
    std::cin >> level ; 

    if (level <= 5) {
        std::cout << "🥉 Bronze: Level 1-5" ;
    }
    else if (level <= 10) {
        std::cout << "🥈 Silver: Level 6-10" ;
    }
    else if (level <= 15) {
        std::cout << "🥇 Gold: Level 11-15" ; 
    }
    else if (level <= 20){
        std::cout << "🏅 Platinum: Level 16-20" ; 
    }
    else {
        std::cout << "💎 Diamond: Level 21 -25" ; 
    }


    return 0;
}