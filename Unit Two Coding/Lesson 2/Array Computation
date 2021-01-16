#include <stdio.h>
// The program should read in the number of ingredients (up to a maximum of 10 
// ingredients), then for each ingredient the price per pound. Finally your program
// should read the weight necessary for the recipe (for each ingredient in the same
// order). Your program should calculate the total cost of these purchases, then 
// display it with 6 decimal places.
int main(void) {
    int i;
    int j;
    int k;
    int numOfIngredients;
    double arrayPrice[10];
    double arrayWeight[10];
    double totalPrice = 0;
    
    scanf("%d", &numOfIngredients);
    
    for(i=0; i<numOfIngredients; i++) {
        scanf("%lf", &arrayPrice[i]);
    }
    
    for(j=0; j<numOfIngredients; j++) {
        scanf("%lf", &arrayWeight[j]);
    }
    
    for(k=0; k<numOfIngredients; k++) {
        totalPrice = arrayWeight[k]*arrayPrice[k] + totalPrice;
    }
    
    printf("%.6lf", totalPrice);
    return 0;
}
