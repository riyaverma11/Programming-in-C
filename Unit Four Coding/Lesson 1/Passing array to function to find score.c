#include <stdio.h>
// Your program should first read, from the user input, 
// the number of players participating in the game. There are never more than 10 players 
// in the game. Next, your program should read the current scores of each player and store
// them in an array. Then you should call the function behind(), to which you pass as a 
// first argument, the array holding the player's scores, and as a second argument the 
// number of players in the game. The function behind should replace the scores stored 
// in the array with the number of points by which each individual player is behind the 
// top-scoring player.

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N); //user input for number of players
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]); //read current scores of each player || loops through number of players
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

/* Write your function behind() here: */
void behind(int * ptr, int playerCount) {
    int i;
    int j;
    int max = 0;
    for(i=0; i<playerCount; i++) {
        if(ptr[i] > max) {
            max = ptr[i];
        }
    }
    
    for(j=0; j<playerCount; j++) {
        ptr[j] = max - ptr[j];
    }
}
