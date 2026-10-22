#include <stdio.h>

int main() {
    float wt_lb, ht_in, bmi;

    printf("Enter weight (pounds): ");
    scanf("%f", &wt_lb);

    printf("Enter height (inches): ");
    scanf("%f", &ht_in);

    bmi = (wt_lb / (ht_in * ht_in)) * 703;

    printf("BMI = %.1f\n", bmi);

    if (bmi < 18.5)
        printf("Underweight");
    else if (bmi < 25)
        printf("Normal weight");
    else if (bmi < 30)
        printf("Overweight");
    else
        printf("Obese");

    return 0;
}

