//Declare and use different data types (int, char, float) and display their values.

#include <stdio.h> 
#include <conio.h> 

void main() 
{
    int age = 20;
	char grade = 'A';
	float height = 5.9;

    printf("Age : %d\n", age);       
    printf("Grade : %c\n", grade);   
    printf("Height : %.1f\n", height); 

    getch();
}

