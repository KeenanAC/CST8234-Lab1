#include <stdio.h>

/* Macro definitions for BMI thresholds */
#define LOWER_LIMIT 18.5
#define UPPER_LIMIT 25
#define MAX_LIMIT 30

/* Main program logic begins here */
int main(void) {

    /* variable declarations */
    float height, weight;

    /* Prompt user for height and weight */
    printf("Enter the height in m: ");
    scanf("%f", &height);
    printf("Enter the weight in Kg: ");
    scanf("%f", &weight);

    /* IDE yells here - is there a difference if the var is initialized here vs above all code? */
    /* Calculates and displays BMI */
    float bmi = weight / (height * height);
    printf("BMI is %.2f\n", bmi);

    /* Checking BMI against macro thresholds and displaying the appropriate category */
    if (bmi < LOWER_LIMIT) {
        printf("Category: Underweight");
    }
    else if (bmi >= LOWER_LIMIT && bmi < UPPER_LIMIT) {
        printf("Category: Normal weight");
    }
    else if (bmi >= UPPER_LIMIT && bmi < MAX_LIMIT) {
        printf("Category: Overweight");
    }
    else {
        printf("Category: Obese");
    }

    printf("\n");
    return 0;

}