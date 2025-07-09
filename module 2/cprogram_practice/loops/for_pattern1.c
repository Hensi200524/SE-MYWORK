/*
Display below pattern using for loop
1 2 3 4 5 6 7 8 9 10
11 12 13 14 15 16 17 18 19 20
21 22 23 24 25 26 27 28 29 30 
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,num=1;
    for(i=1;i<=30;i++)
    {
        printf("%d",num);
        num++;

         if(i%10== 0)
          {
            printf("\n");
          }
    }
    return 0;
}