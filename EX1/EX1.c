#include <stdio.h>

int main() {
    float gpa;

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    if (gpa >= 0.0 && gpa <= 4.0) {
        if (gpa < 1.0)
            printf("Failed semester — registration suspended");
        else if (gpa < 2.0)
            printf("On probation for next semester");
        else if (gpa < 3.0)
            printf("No message");
        else if (gpa < 3.5)
            printf("Dean's list for semester");
        else
            printf("Highest honors for semester");
    } else {
        printf("Invalid GPA");
    }

    return 0;
}

