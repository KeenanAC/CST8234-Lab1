#include <stdio.h>

/* Macro definitions for leap year requirements */
#define DIV_BY_4(year) ((year) % 4 == 0)
#define DIV_BY_100(year) ((year) % 100 != 0)
#define DIV_BY_400(year) ((year) % 400 == 0)

/* Main program logic starts here */
int main(void) {

    /* Variable declarations */
    int year, result = 0;

    /* User prompt for the year */
    printf("Enter a year: ");
    scanf("%d", &year);

    /* Determine if the given year is a leap year by using macros */
    if (DIV_BY_4(year) && (DIV_BY_100(year) || DIV_BY_400(year))) {
        result = 1;
    }

    /* Print out if the year is a leap year based on the result value */
    if (result == 1) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    printf("\n");
    return 0;

}