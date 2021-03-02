#include <stdio.h>
// To help you with this task, please write a function called min() that finds and 
// returns the smallest amongst two integers (be sure to also write a prototype for 
// this function). The function thus takes two integers as input and returns the 
// smallest of the two. This function will use an if statement with a condition that 
// contains either "less than" or "greater than".

// Next, please use min() in your main function to work your way through an entire 
// list of numbers in order to find its minimum. The first number you read gives the 
// number of elements in the list of integers under consideration. You will then read
// the integer values, using min() to keep only the smallest integer read at each step.
// In the end, please print out the smallest integer in the list.

int main(void) {
    int min(int, int);
    int numElements;
    int values[101];
    int i = 0;
    int result;
    int placeHolder = 0;

    scanf("%d", &numElements);
    
    for(i=0; i<numElements; i++) {
        scanf("%d", &values[i]);
    }
    
    i = 0;
    while(i<numElements-1) {
        if (i==0) {
            result = min(values[i], values[i+1]);
            placeHolder = result;
            i++;
        } else {
            result = min(values[i], values[i+1]);
            if (placeHolder > result) {
                placeHolder = result;
                i++;
            }
            i++;
        }
    }
    printf("%d", placeHolder);
    return 0;
}

int min(int x, int y) {
    int minimum;
    if (x < y) {
        minimum = x;
        return minimum;
    } else if (y < x) {
        minimum = y;
        return minimum;
    }
    
    return 0;
}
