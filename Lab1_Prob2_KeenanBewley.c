#include <stdio.h>

#define LOWER_LIMIT 18.5
#define UPPER_LIMIT 25
#define MAX_LIMIT 30


int main(void) {

    float height, weight;

    printf("Enter the height in m: ");
    scanf("%f", &height);
    printf("Enter the weight in Kg: ");
    scanf("%f", &weight);

    /* IDE yells here - is there a difference if the var is initialized here vs above all code? */
    float bmi = weight / (height * height);
    printf("BMI is %.2f\n", bmi);

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

    return 0;

}