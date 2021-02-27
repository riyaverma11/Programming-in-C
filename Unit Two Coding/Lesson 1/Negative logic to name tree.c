#include <stdio.h>
// the "Tinuviel" is 5 meters high or less and its leaves are composed of 8 or more leaflets
// the "Calaelen" is 10 meters high or more and its leaves are composed of 10 or more leaflets
// the "Falarion" is 8 meters high or less and its leaves are composed of 5 or fewer leaflets
// the "Dorthonion" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets
// Your program should read the height and the number of leaflets of a given tree 
// (both integers), and should be able to determine and display the name of the 
// corresponding tree.  If the height and number of leaflets does not match any of 
// the tree type descriptions, your program should display "Uncertain".
int main(void) {
    int height;
    int numLeaflets;
    
    scanf("%d", &height);
    scanf("%d", &numLeaflets);
    
    if (height <= 5 && numLeaflets >= 8) {
        printf("Tinuviel");
    } else if (height >= 10 && numLeaflets >= 10) {
        printf("Calaelen");
    } else if (height <= 8 && numLeaflets <= 5) {
        printf("Falarion");
    } else if (height >= 12 && numLeaflets <= 7) {
        printf("Dorthonion");
    } else {
        printf("Uncertain");
    }
    
    return 0;
}
