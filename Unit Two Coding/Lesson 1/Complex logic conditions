#include <stdio.h>
// One room costs nothing if you are 60 (the age of the innkeeper), or 5 dollars 
// if you are less than 10 years old. For everyone else, the cost is 30 dollars 
// plus an additional 10 dollars if you bring more than 20 pounds of luggage. 
// Your program should read the customer's age first, then the weight of their luggage, 
// then output the price they have to pay.
int main(void) {
    int age;
    int luggageWeight;
    
    scanf("%d", &age);
    scanf("%d", &luggageWeight);
    
    if(age == 60){
        printf("0");
    } else if(age < 10) {
        printf("5");
    } else if(age != 60 && age > 10 && luggageWeight > 20) {
        printf("40");
    } else if (age != 60 && age > 10 && luggageWeight < 20) {
        printf("30");
    }
    
    return 0;
}
