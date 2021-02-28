#include <stdio.h>
// Your program should first read the number of cars to be weighed (integer) followed 
// by the weights of the cars (doubles). Then your program should calculate and display 
// how much weight to add or subtract from each car such that every car has the same weight. 
// The total weight of all of the cars should not change. These additions and subtractions 
// of weights should be displayed with one decimal place.
int main(void){
    int numOfCars;
    int i;
    int j;
    double weightOfCar;
    double totalWeight = 0;
    double avgWeight;
    double array[50];
    
    scanf("%d", &numOfCars);
    
    for(i=0; i<numOfCars; i++) {
        scanf("%lf", &weightOfCar);
        array[i] = weightOfCar;
        totalWeight = totalWeight + weightOfCar;
    }
    
    avgWeight = totalWeight/numOfCars;
    
    for(j=0; j<numOfCars; j++) {
        printf("%.1lf\n", avgWeight-array[j]);
    }
    
    return 0;
}
