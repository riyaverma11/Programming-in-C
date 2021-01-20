#include <stdio.h>
// Your program must first read an integer indicating the number of grades to be averaged. 
// Next, your program will read the grades one by one, all of which are integers as well. 
// Finally, your program will calculate and print the average of the grades to two decimal places.
int main(void) {
    int numOfGrades;
    int i;
    int grade;
    int sum = 0;
    double doubleSum;
    double doubleNumGrades;
    
    scanf("%d", &numOfGrades);
    
    for(i=0; i<numOfGrades; i++) {
        scanf("%d", &grade);
        sum = sum + grade;
    }
    
    doubleSum = (double) sum; //cast the integer sum to a double and store it in a variable of type double
    doubleNumGrades = (double) numOfGrades;
    printf("%.2lf", doubleSum/doubleNumGrades); //use lf to print a double value (we use d for integers)
    //prints the double in two decimal places because we specified .2
    return 0;
    
}
