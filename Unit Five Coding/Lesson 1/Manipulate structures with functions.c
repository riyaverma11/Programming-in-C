// The function advanceDay() should take as input a date (stored in a struct date)
// and return the date of the following day. You do not have to take into account 
// leap years (although you may if you wish to). That is, it is okay for your function 
// to always return March 1 as the day following February 28, no matter the year.
#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void readDate(struct date * reading) {
    scanf("%d %d %d", &(*reading).year, &(*reading).month, &(*reading).day);
}

void printDate(struct date writing) {
    printf("%02d/%02d/%d\n", writing.month, writing.day, writing.year);
}

struct date advanceDay(struct date calcTomorrow) {
    if (calcTomorrow.day == 30 && (calcTomorrow.month == 4 || calcTomorrow.month == 6 || calcTomorrow.month == 9 || calcTomorrow.month == 11)) {
        calcTomorrow.day = 1;
        calcTomorrow.month += 1;
    } else if (calcTomorrow.day == 31 && (calcTomorrow.month == 1 || calcTomorrow.month == 3 || calcTomorrow.month == 5 || calcTomorrow.month == 7 || calcTomorrow.month == 8 || calcTomorrow.month == 10)) {
        calcTomorrow.day = 1;
        calcTomorrow.month += 1;
    } else if (calcTomorrow.day == 28 && calcTomorrow.month == 2) {//feb only has 28 days
        calcTomorrow.day = 1;
        calcTomorrow.month = 3;
    } else if (calcTomorrow.day == 31 && calcTomorrow.month == 12) {//new year
        calcTomorrow.day = 1;
        calcTomorrow.month = 1;
        calcTomorrow.year += 1;
    } else {//regular day
        calcTomorrow.day += 1;
        calcTomorrow.month += 1;
    }
    
    struct date tomorrow = calcTomorrow;
    return tomorrow;
}
