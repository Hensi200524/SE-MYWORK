/****Write a C program that takes three numbers from the user and determines:The largest number and
smallest number using switch-case****/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    int code_large,code_small;

    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    //largest no find

    if(a>=b && a>=c)
    {
        code_large = 1;
    }
    else if(b>=a && b>=c)
    {
        code_large = 2;
    }
    else
    {
        code_large  = 3;
    }

    switch(code_large)
    {
        case 1:
        printf("largest : %d\n",a);
        break;

        case 2:
        printf("largest : %d\n",b);
        break;

        case 3:
        printf("largest : %d\n",c);
        break;

        default:
        printf("not largest no found\n");
    }


    //find small no
    if(a<=b && a<=c)
    {
        code_small = 1;
    }
    else if(b<=a && b<=c)
    {
        code_small = 2;
    }
    else
    {
        code_small = 3;
    }

    switch(code_small)
    {
        case 1:
        printf("smallest : %d\n",a);
        break;

        case 2:
        printf("smallest : %d\n",b);
        break;

        case 3:
        printf("smallest : %d\n",c);
        break;

        default:
        printf("not smallest no found\n");
    }
    return 0;
}
