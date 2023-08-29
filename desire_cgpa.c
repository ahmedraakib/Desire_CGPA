#include <stdio.h>

int main() {
    double currentCGPA, desiredCGPA;
    int completedCreditHours, remainingCreditHours;

    printf("Enter your current CGPA: ");
    scanf("%lf", &currentCGPA);

    printf("Enter your completed credit hours: ");
    scanf("%d", &completedCreditHours);

    printf("Enter your remaining credit hours: ");
    scanf("%d", &remainingCreditHours);

    printf("Enter your desired CGPA: ");
    scanf("%lf", &desiredCGPA);

    double requiredSGPA = (desiredCGPA * (completedCreditHours + remainingCreditHours) - currentCGPA * completedCreditHours) / remainingCreditHours;

    printf("You need a required SGPA of %.2lf to achieve your desired CGPA.\n", requiredSGPA);

    return 0;
}

