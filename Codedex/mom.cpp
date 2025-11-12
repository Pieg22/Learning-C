/*
Month-over-month (MoM) is a metric that measures the rate of change in a metric over a one-month period.
100
MoM= 
(month1)
(month2−month1)
​
 ∗100

Create a mom.cpp program that asks the user for two numbers, month1 and month2, and then calculates the change.
Here we will see how the input works . 
*/

#include <iostream>
int main () {
    int month_1 ;
    int month_2 ;  
    std::cout << "Enter first month : " ; 
    std::cin >>  month_1 ; 
    std::cout << "Enter the second month : " ; 
    std::cin >> month_2 ; 
    double MoM =  ((month_2 - month_1) / month_1 ) * 100 ; 
    std::cout << MoM ; 

    return 0;
}