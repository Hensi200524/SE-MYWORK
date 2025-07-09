#include <stdio.h>
#include <conio.h>

void main()
{
    int num1,num2,lcm,max;

    printf("\n Enter the two positive numbers: ");
    scanf("%d %d",&num1,&num2);

    max =(num1>num2)?num1:num2;

    while(1)
    {
        if(max%num1 == 0 && max%num2 == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }

    printf("\n LCM of %d and %d is %d\n",num1,num2,lcm);

    getch();
}

