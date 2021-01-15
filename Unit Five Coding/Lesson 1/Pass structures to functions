// The function readDate() should read 3 integers from the user input. The first 
// integer is the year (a 4-digit number), the second integer is the month, and the 
// third integer is the day of the date being read. The function should store these 
// three numbers in the appropriate parts of the structure being passed into it.
// The function printDate() should print the date stored in the variable passed into 
// it in the following format: mm/dd/yyyy with a new line afterwards. So the month 
// should be printed with two digits (01, 02, 03, ..., 11, 12), the day should be 
// printed as two digits (01, 02, 03, ..., 30, 31), and the year should be printed 
// as a 4-digit number.
#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date * reading) {//don't forget to give variable a name (reading)
    //must use & w/scanf and (*reading) sets a value in that location
    scanf("%d %d %d", &(*reading).year, &(*reading).month, &(*reading).day);
}

void printDate(struct date writing) {//don't forget to give variable a name (writing)
    printf("%2d/%02d/%d", writing.month, writing.day, writing.year); //02 means printing at least 2 characters with padding zero
}
