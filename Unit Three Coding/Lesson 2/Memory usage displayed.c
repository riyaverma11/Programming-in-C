#include <stdio.h>
// Your job is to write a program that shows, in human-readable form (see below for
// specifics), how much memory a set of variables of a certain type will use. Your 
// program should read a character that identifies the data type ('i' for int, 's' 
// for short, 'c' for char, 'd' for double). Next it should read an integer that 
// indicates how many variables of the given type you wish to store.

// Your program should then calculate the amount of memory required to store the 
// given variables. Your program needs to be written in such a way that it would 
// also perform correctly on other computers. In other words, rather than hard-coding 
// specific sizes for the different variable types, your program needs to use the "sizeof()" 
// function to determine how much memory an individual variable of a given type needs.
int main(void) {
    int amountOfVariable;
    char typeOfCode[1];
    //int i = 0;
    int sum = 0;
    
    scanf("%c %d", typeOfCode, &amountOfVariable);
    
    if (typeOfCode[0] == 'i') {
        sum = sum + (sizeof(int) * amountOfVariable);
    }
    else if (typeOfCode[0] == 'd') {
        sum = sum + (sizeof(double) * amountOfVariable);
    }
    else if (typeOfCode[0] == 'c') {
        sum = sum + (sizeof(char) * amountOfVariable);
    }
    
    if (sum < 1000) {
        printf("%d B", sum);
    } else if (sum >= 1000 && sum < 1000000) {
        printf("%d KB and %d B", sum/1000, sum%1000);
    } else if (sum >= 1000000) {
        printf("%d MB and %d KB and %d B", sum/1000000, ((sum%1000000)/1000), ((sum%1000000)%1000));
    }
    
    return 0;
}
