#include <stdio.h>
// Your program should first read an integer number indicating how many tracking 
// codes you plan on entering. Next, for each successive tracking code your program
// should read in the integer length of code followed by a space and then the type 
// of code ('i' for integer, 'd' for decimal, or 'c' for character). Finally your 
// program should print the total amount of space required to store all of the tracking 
// codes (in bytes). If the user enters an incorrect type for any tracking number, 
// the program should print 'Invalid tracking code type' and exit.
int main(void) {
    int numTrackingCodes;
    int trackingCode;
    char typeOfCode[101];
    int i = 0;
    int sum = 0;
    
    scanf("%d", &numTrackingCodes);
    
    while(i<numTrackingCodes) {
        scanf("%d %s", &trackingCode, typeOfCode);
        if (typeOfCode[0] == 'i') {
            sum = sum + (trackingCode * 4);
            i++;
        }
        else if (typeOfCode[0] == 'd') {
            sum = sum + (trackingCode * 8);
            i++;
        }
        else if (typeOfCode[0] == 'c') {
            sum = sum + (trackingCode * 1);
            i++;
        }
        else {
            printf("Invalid tracking code type");
            return 0;
        }
    }
    printf("%d bytes", sum);
    return 0;
    
}
