#include<stdio.h>
#include<conio.h>

void main() {
    int marks;

    // Input marks from user
    printf("Enter student marks (0 – 100): ");
    scanf("%d", &marks);

    // Check grade using if-else and logical AND
    if (marks > 90) {
        printf("Grade: A\n");
    } else if (marks > 75 && marks <= 90) {
        printf("Grade: B\n");
    } else if (marks > 50 && marks <= 75) {
        printf("Grade: C\n");
    } else if (marks >= 0 && marks <= 50) {
        printf("Grade: D\n");
    } else {
        printf("Invalid marks entered.\n"); // For marks < 0 or > 100
    }

    getch();
}

