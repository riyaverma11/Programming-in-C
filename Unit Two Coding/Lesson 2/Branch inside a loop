#include <stdio.h>
// You want to determine the number of cities in a given region that have a 
// population strictly greater than 10,000. To do this, you write a program that 
// first reads the number of cities in a region as an integer, and then the 
// populations for each city one by one (also integers).
int main(void) {
    int numOfCities;
    int cityPop;
    int i;
    int counter = 0;
    
    scanf("%d", &numOfCities);

    for(i=0; i<numOfCities; i++){
        scanf("%d", &cityPop);
        if(cityPop > 10000) {
            counter = counter + 1;
        }
    }
    printf("%d", counter);
    return 0;
}
