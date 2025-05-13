#include <stdio.h>


/* Main program logic begins here */
int main(void) {

    /* Variable declarations */
    int a = 0, b = 1, c, n, i = 0;

    /* User prompt for Nth value */
    printf("Enter the value of N: ");
    scanf("%d", &n);

    /* Check if N is negative */
    if (n < 0) {
        printf("N must be positive!");
        return 1;
    }

    printf("Fibonacci sequence up to the %d term: ", n);

    /* Begin for loop to complete Fibonacci sequence */
    for (i = 0; i < n; i++) {
        /* First print out a before calculation */
        if (i == 0) {
            printf("%d ", a);
        }
        /* Then print out b before calculation */
        else if (i == 1) {
            printf("%d ", b);
        }
        /* Finally do calculations until i < n */
        else {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

    printf("\n");
    return 0;
}