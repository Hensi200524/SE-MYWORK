#include <stdio.h>
#include <conio.h>

void main() {
    FILE *ptr;
    int i, number;
    float balance;
    char name[30], filename[50];

    printf("Enter the file name: ");
    gets(filename);  // You can use fgets(filename, 50, stdin) for safety

    ptr = fopen(filename, "w");
    if (ptr == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    printf("\nEnter data:\n");
    for (i = 0; i < 3; i++) {
        printf("\nEnter A/c No.: ");
        scanf("%d", &number);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter Balance: ");
        scanf("%f", &balance);
        fprintf(ptr, "%4d %10s %6.2f\n", number, name, balance);  // fixed
    }

    fclose(ptr);

    ptr = fopen(filename, "r");
    if (ptr == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }

    printf("\n\n\tNumber\t\tName\t\tBalance\n");
    printf("\t-------------------------------------------------------------\n");

    while (fscanf(ptr, "%d %s %f", &number, name, &balance) == 3) {
        printf("\t%4d\t\t%10s\t\t%6.2f\n", number, name, balance);
    }

    fclose(ptr);
    getch();
}

