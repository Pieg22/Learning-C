/* This program will run the fibonacci serie , wich works like , for example  : 1+1 = 2 , 1 + 2 = 3 .
 I mean the sum of two numbers will be the third number . Correlation of before example . But here we suppose , about we idk how many times It will work , 
 And for this case , we will use the while bucle */

 #include <iostream> //  Library Interaction 
 using namespace std; // we leave the std::
 int main (){ // Everything starts here
    int terminos , contador = 2 ; // Variables  for save the terms and accountant
    unsigned long long fib1 = 1 , fib2 = 1 , fib3 ;  // this box "unsigned long long " works is much bigger than "int" 64 bits  ( 8 bytes) .

    cout << "Introduce the amount of terms(93 max) : "<<"\n" ;  // Ask for the terms 
    cin >> terminos ; 

    if (terminos > 93){
        cout<< "Please introduce a number below than 93 or the program will explote . " ;
    }


    cout << fib1 << fib2 ; 

    while (contador < terminos){
        fib3 = fib1 + fib2;
        cout<< " " << fib3;
        fib1 = fib2 ; 
        fib2 = fib3 ; 
        contador ++ ; 

    }
    cout<< endl ; 



    return 0;
 }