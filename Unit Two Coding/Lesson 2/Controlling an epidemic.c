#include <stdio.h>
// Your program should first read an integer representing the total population of the area. 
// Knowing that a person was infected on day 1 and that each infected person contaminates 
// two new people every day, you must calculate the day at which the entire population of 
// the area will be infected
int main(void){
    int totalPop;
    int infectedPpl = 1;
    int day = 1;
    
    scanf("%d", &totalPop);
    while(infectedPpl < totalPop) {
        infectedPpl = (infectedPpl*2) + infectedPpl;
        day = day+1;
    }
    printf("%d", day);
    return 0;
}
