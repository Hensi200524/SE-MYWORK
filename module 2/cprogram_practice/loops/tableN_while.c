//Write multiplication table using while loop

#include <stdio.h>
#include <conio.h>

int main()
{
    int i=1,no,ans;

    printf("\n Enter number : ");
    scanf("%d",&no);

    while(i<=10)
    {
        ans=no*i;
        printf("\n %d * %d = %d",no,i,ans);
        i++;
    }
    return 0;
}