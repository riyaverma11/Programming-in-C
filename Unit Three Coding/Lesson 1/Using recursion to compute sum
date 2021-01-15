#include <stdio.h>
// Please write a C-program that uses a recursive function called 
// "sumOfDigits()" to compute the sum of the digits of a number. To do so, your main 
// function should first read an integer number as input and then call sumOfDigits(), 
// which should in turn call itself until there are no digits left to sum, at which point 
// the final sum should display to the user.
int sumOfDigits(int);
int main(void) {
    int value;
    int result = 0;
    
    scanf("%d", &value);
    result = sumOfDigits(value);
    printf("%d", result);
    return 0;
}

int sumOfDigits(int n) {
    int sum;
    if (n < 10) {
        sum = n;
    } else {
        sum = (n%10) + sumOfDigits(n/10);
    }
    return sum;
}
