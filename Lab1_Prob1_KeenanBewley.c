#include <stdio.h>

/* Macro defining for calculator operators */
#define ADD(first_Number,second_Number) ((first_Number)+(second_Number))
#define SUB(first_Number,second_Number) ((first_Number)-(second_Number))
#define MUL(first_Number,second_Number) ((first_Number)*(second_Number))
#define DIV(first_Number,second_Number) ((first_Number)/(second_Number))

/* Main program logic begins here */
int main(void) {

    /* Variable declarations */
    int first_Number,second_Number, result, calc_Choice;

    /* User prompt for first number */
    printf("Enter the first number: ");
    scanf("%d", &first_Number);
    /* Clearing the leftover char - input.next() equivalent in java */
    getchar();

    /* User prompt for second number */
    printf("Enter the second number: ");
    scanf("%d", &second_Number);
    getchar();

    /* User prompt for calculator operation */
    printf("Select operation(1 for ADD, 2 for SUB, 3 for MUL, 4 for DIV): ");
    scanf("%d", &calc_Choice);
    getchar();

    /* Begin switch block */
    switch (calc_Choice) {
        /* Addition */
        case 1:
            result = ADD(first_Number, second_Number);
            printf("Result: %d + %d = %d \n",first_Number, second_Number, result);
            break;
        /* Subtraction */
        case 2:
            result = SUB(first_Number, second_Number);
            printf("Result: %d - %d = %d \n",first_Number, second_Number, result);
            break;
        /* Multiplication */
        case 3:
            result = MUL(first_Number, second_Number);
            printf("Result: %d * %d = %d \n",first_Number, second_Number, result);
            break;
        /* Division */
        case 4:
            /* Check if the second number is 0 - Arithmetic error */
            if (second_Number == 0) {
                printf("Error: Division by Zero is not allowed!");
                return 1;
            }
            result = DIV(first_Number, second_Number);
            printf("Result: %d / %d = %d \n",first_Number, second_Number, result);
            break;
        /* Default case for any input that is not 1-4 */
        default:
            printf("Error: Invalid Choice! Please enter a valid number (1-4).");
    }

    printf("\n");
    return 0;

}