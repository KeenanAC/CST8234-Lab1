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

    /* Provide output statement for given value */
    printf("Fibonacci sequence up to the %dth term: ", n);

    /* Begin for loop to complete Fibonacci sequence */
    for (i = 0; i < n; i++) {
        c = a + b;
        printf("%d ", a);
        a = b;
        b = c;
    }


    printf("\n");
    return 0;
}