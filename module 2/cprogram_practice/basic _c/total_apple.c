/*Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/

#include <stdio.h>
#include <conio.h>

int main() 
{
    int students, total_apples;

    printf("\nEnter number of students: ");
    scanf("%d", &students);

    total_apples = students*5;

    printf("\nTotal apples required: %d\n", total_apples);

    return 0;
}

