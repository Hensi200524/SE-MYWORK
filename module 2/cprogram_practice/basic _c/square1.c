#include <stdio.h>
#include <conio.h>

void main()
{
    int num;

    printf("Enter the Number : ");
    scanf("%d",&num);

    int ans = num*num;
    printf("square of %d is : %d\n",num,ans);

    getch();
}