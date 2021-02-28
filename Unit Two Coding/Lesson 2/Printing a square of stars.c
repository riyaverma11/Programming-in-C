#include <stdio.h>
// Create a program that displays on the screen a square of n x n stars,
// with the integer n given as an input.
int main(void){
    int userInput;
    int width;
    int height;
    
    scanf("%d", &userInput);
    
    for(width=0; width<userInput; width++){
        for(height=0; height<userInput; height++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
