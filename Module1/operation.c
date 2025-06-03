//write a program to  make addition,subtraction,multiplication and divison of two number[user input]


#include<stdio.h>
#include<conio.h>

void main()
{ 
   int num1;
   int num2;
   int add,sub,mul,divison;
    
    
    printf("Emter First number:");
    scanf("%d",&num1);
    
    printf("Enter Second number:");
    scanf("%d",&num2);
    
    add = num1+num2;
    printf("addition of two number is: %d \n",add);
    
    sub = num1-num2;
    printf("subtraction of two number is: %d \n",sub);
    
    mul = num1*num2;
    printf("multiplication of two number is: %d \n",mul);
    
    divison = num1/num2;
    printf("divison of two number is: %d \n",divison);
    
     getch();
}
