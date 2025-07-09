//Write a C Program to Print the Multiplication Table of N

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,no,ans;

    printf("\n Enter number : ");
    scanf("%d",&no);

    for(i=1;i<=10;i++)
    {
        ans=no*i;
        printf("\n %d * %d = %d",no,i,ans);
    }
    return 0;
}