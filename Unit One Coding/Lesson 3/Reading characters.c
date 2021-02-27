#include <stdio.h>
int main(void) {
    char userInput;

    scanf("%c", &userInput);
    
    printf("++++%c++++\n", userInput);
    printf("+++%c%c%c+++\n", userInput, userInput, userInput);
    printf("++%c%c%c%c%c++\n", userInput, userInput, userInput, userInput, userInput);
    printf("+%c%c%c%c%c%c%c+\n", userInput, userInput, userInput, userInput, userInput, userInput, userInput);
    printf("%c%c%c%c%c%c%c%c%c", userInput, userInput, userInput, userInput, userInput, userInput, userInput, userInput, userInput);
    
    return 0;
    
}
