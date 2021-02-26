#include <stdio.h>
int main(){
    int i;
    int factor = 0;
    for (i=0; i<11; i++) { //goes through the loop 11 times[i=0,i=1,i=2,i=3,i=4,i=5,i=6,i=7,i=8,i=9,i=10]
        printf("%dx8 = %d\n", factor, factor*8);
        factor = factor + 1;
    }
    
    return 0;
}
