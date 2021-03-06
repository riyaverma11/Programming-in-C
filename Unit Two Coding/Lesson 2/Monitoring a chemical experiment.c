#include <stdio.h>
// Your program should first read two integers representing the minimum and maximum 
// safe temperatures. Next, your program should continuously read temperatures (integers) 
// that are being provided by the device. Once the chemical reaction is complete the 
// device will send a value of -999, indicating to you that temperature readins are done. 
// For each recorded temperature that is in the correct range (it could also be equal to 
// the min or max values), your program should display the text "Nothing to report". 
// But as soon as a temperature reaches an unsafe level your program must display the text 
// "Alert!" and stop reading temperatures (although the device may continue sending 
// temperature values).
int main(void) {
    int minimum;
    int maximum;
    int temperatures;
    
    scanf("%d%d", &minimum, &maximum);
    scanf("%d", &temperatures);
    
    while(temperatures != -999) {
        if(temperatures < minimum || temperatures > maximum) {
            printf("Alert!\n");
            return 0;
        } else {
            printf("Nothing to report\n");
            scanf("%d", &temperatures);
        }
    }
    return 0;
}
