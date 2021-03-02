#include <stdio.h>
// 1 meter = 3.2808 feet;
// 1 gram = 0.002205 pounds;
// temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

// On the first input line you are given the number of conversions to be made. 
// Each of the following lines contains a value to be converted as well as its unit:
// m, g or c (for meters, grams or degrees Celsius). There will be a space between 
// the number and the unit. You should print your output value for each input line 
// immediately after calculating it (ie, you do not have to wait until you have read all inputs).

// Display the converted values with 6 decimal places, followed by a space and 
// their unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit). 
// Each conversion result should be printed on its own line, and you should store 
// and display all decimal values as doubles.
double meterConversion(double x) {
    double conversion;
    conversion = x * 3.2808;
    return conversion;
}

double gramConversion (double y) {
    double conversion;
    conversion = y * 0.002205;
    return conversion;
}

double celciusConversion (double z) {
    double conversion;
    conversion = 32 + (1.8*z);
    return conversion;
}


int main(void) {
    int numConversions;
    double value;
    char unit[6];
    int i = 0;
    double result;
    
    scanf("%d", &numConversions);
    
    scanf("%lf %s", &value, unit);
    
    while(i<numConversions) {
        if (unit[0] == 'm') {
            result = meterConversion(value);
            printf("%.6lf ft\n", result);
            i++;
            unit[0] = '0';
            scanf("%lf %c", &value, unit);
            
        } else if (unit[0] == 'g') {
            result = gramConversion(value);
            printf("%.6lf lbs\n", result);
            i++;
            unit[0] = '0';
            scanf("%lf %c", &value, unit);
            
        } else if (unit[0] == 'c') {
            result = celciusConversion(value);
            printf("%.6lf f\n", result);
            i++;
            unit[0] = '0';
            scanf("%lf %c", &value, unit);
        }
        
    }
    return 0;
}
