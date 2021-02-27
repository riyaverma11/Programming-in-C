#include <stdio.h>
// Your program should first read an integer indicating the number of members per team.
// Then, the program should read the player weights (integers representing kilograms) 
// alternating by team. 

// After calculating the total weight of each team, the program should display the 
// text "Team X has an advantage" (replacing X with 1 or 2 depending on which team 
// has a greater total weight).

// You will then display the text "Total weight for team 1:" followed by the weight 
// of team 1, then "Total weight for team 2:" followed by the weight of team 2 
// (see example below).
int main(void) {
    int teamOneTotal = 0;
    int teamTwoTotal = 0;
    int numOfPlayers;
    int playerWeight;
    int i;
    int result;
    
    scanf("%d", &numOfPlayers);
    
    for(i=0; i<(numOfPlayers*2); i++){
        scanf("%d", &playerWeight);
        result = (i+1) % 2;
        if (result == 0) {
           teamTwoTotal = teamTwoTotal + playerWeight;
        } else {
            teamOneTotal = teamOneTotal + playerWeight;
        }
    }
    
    if (teamOneTotal > teamTwoTotal) {
        printf("Team 1 has an advantage\n");
    } else {
        printf("Team 2 has an advantage\n");
    }
    
    printf("Total weight for team 1: %d\n", teamOneTotal);
    printf("Total weight for team 2: %d", teamTwoTotal);
    
    return 0;
}
