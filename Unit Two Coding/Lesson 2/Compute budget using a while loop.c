#include <stdio.h>
// Your program will have to read a sequence of positive integers and display their 
// sum. We do not know how many integers there will be, but the sequence always ends 
// with the value -1 (which is not an expense, just an end marker).
int main(void){
    int expense;
    int total = 0;
    
    scanf("%d", &expense);
    
    while(expense != -1) {
        total = total + expense;
        scanf("%d", &expense);
    }
    
    printf("%d", total);
    return 0;
}
