#include <stdio.h>
// Your program should read two integers, between 1 and 6, representing the values 
// of each die. If the sum is greater than or equal to 10, then you must pay a special 
// fee (36 coins). Otherwise, you pay twice the sum of the values of the two dice. 
// Your program must then display the text "Special tax" or "Regular tax" followed 
// by the amount you have to pay on the next line.
int main(void) {
    int firstNum;
    int secondNum;
    int sum;
    
    scanf("%d%d", &firstNum, &secondNum);
    sum = firstNum + secondNum;
    
    if(sum >= 10) {
        printf("Special tax\n%d", 36);
    } else {
        printf("Regular tax\n%d", sum*2);
    }
    
    return 0;
}
