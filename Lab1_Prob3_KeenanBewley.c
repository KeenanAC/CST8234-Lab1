#include <stdio.h>

#define DIV_BY_4(year) ((year) % 4 == 0)
#define DIV_BY_100(year) ((year) % 100 != 0)
#define DIV_BY_400(year) ((year) % 400 == 0)

int main(void) {

    int year, result = 0;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (DIV_BY_4(year) && (DIV_BY_100(year) || DIV_BY_400(year))) {
        result = 1;
    }

    if (result == 1) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    printf("\n");
    return 0;

}