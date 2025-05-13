#include <stdio.h>


#define ADD(first_Number,second_Number) ((first_Number)+(second_Number))
#define SUB(first_Number,second_Number) ((first_Number)-(second_Number))
#define MUL(first_Number,second_Number) ((first_Number)*(second_Number))
#define DIV(first_Number,second_Number) ((first_Number)/(second_Number))

int main(void) {
    int first_Number,second_Number, result, calc_Choice;

    printf("Enter the first number: ");
    scanf("%d", &first_Number);
    getchar();
    printf("Enter the second number: ");
    scanf("%d", &second_Number);
    getchar();

    printf("Select operation(1 for ADD, 2 for SUB, 3 for MUL, 4 for DIV): ");
    scanf("%d", &calc_Choice);
    getchar();

    switch (calc_Choice) {
        case 1:
            result = ADD(first_Number, second_Number);
            printf("Result: %d + %d = %d \n",first_Number, second_Number, result);
            break;
        case 2:
            result = SUB(first_Number, second_Number);
            printf("Result: %d - %d = %d \n",first_Number, second_Number, result);
            break;
        case 3:
            result = MUL(first_Number, second_Number);
            printf("Result: %d * %d = %d \n",first_Number, second_Number, result);
            break;
        case 4:
            if (second_Number == 0) {
                printf("Error: Division by Zero is not allowed!");
                return 1;
            }
            result = DIV(first_Number, second_Number);
            printf("Result: %d / %d = %d \n",first_Number, second_Number, result);
            break;
        default:
            printf("Error: Invalid Choice! Please enter a valid number (1-4).");
    }
    return 0;

}