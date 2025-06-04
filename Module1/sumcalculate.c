<<<<<<< HEAD
=======
/* write a program to calculate sum of 5 subjets & find the percentage */

>>>>>>> 3d4d72f (hello)
#include<stdio.h>
#include<conio.h>

void main()
{
    int sub1,sub2,sub3,sub4,sub5,sum;
    int total=500;
    float percentage;
    
    printf("Enter the marks of Gujrati:");
    scanf("%d",&sub1);
    
     printf("Enter the marks of Hindi:");
    scanf("%d",&sub2);
    
     printf("Enter the marks of English:");
    scanf("%d",&sub3);
    
     printf("Enter the marks of Mathes:");
    scanf("%d",&sub4);
    
     printf("Enter the marks of Science:");
    scanf("%d",&sub5);
    
    sum = sub1+sub2+sub3+sub4+sub5;
    printf("sum of all subject are:%d",sum);
    
    percentage = (sum*100)/total;
    printf("\n percentage is:%f",percentage);
    
    getch();
<<<<<<< HEAD
}
=======
}
>>>>>>> 3d4d72f (hello)
