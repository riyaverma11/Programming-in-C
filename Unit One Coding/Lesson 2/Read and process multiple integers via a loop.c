#include <stdio.h>
int main(){
    int numOfRobots;
    int enginePower;
    int resistance;
    int weight;
    int height;
    int i;
    int individualRobotPower;
    int totalPower = 0;
    
    scanf("%d", &numOfRobots); //number of robots specified by the user
    
    for(i=0; i<numOfRobots; i++){ //only loops for num of robots
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance); //getting user input for each of the robots
        individualRobotPower = (enginePower + resistance) * (weight - height);
        totalPower = totalPower + individualRobotPower;
    }
    
    printf("%d", totalPower);
    return 0;
}
