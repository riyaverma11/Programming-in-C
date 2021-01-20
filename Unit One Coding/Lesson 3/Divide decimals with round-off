#include <stdio.h>
// Your program should first read a decimal number representing the amount of cement
// needed (in pounds) for the foundations of your new home. Your program should then 
// display the total cost of the cement bags you have to purchase to have enough cement 
// to build your foundation. To make your program simpler, you are guaranteed that the
// amount of cement needed will NEVER be a multiple of 120.

int main(void){
    double cementNeeded;
    double numOfBags;
    int numOfFullBags; //each 120 pound bag is $45
    
    scanf("%lf", &cementNeeded); //finding out cement needed to the decimal
    
    numOfBags = cementNeeded/120; //returns a double
    numOfFullBags = (int) numOfBags; //cast to an int (removes everything after decimal point)
    numOfFullBags = numOfFullBags + 1; //add one to the total because we removed the remainder, however we need a whole bag for that extra
    
    printf("%d", numOfFullBags*45);
    return 0;
}
