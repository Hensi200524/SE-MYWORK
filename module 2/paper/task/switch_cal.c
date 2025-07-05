/*10.Write a program using switch to perform a basic calculator 
(addition, subtraction, multiplication, division) based on user choice.*/
 
 #include <stdio.h>
 #include <conio.h>
 
 void main()
 {
 	int ans,choice,n1,n2;
 	
 	printf("\n enter the two number : ");
 	scanf("%d %d",&n1,&n2);
 	
 	printf("\n enter choice (1-4) : ");
 	scanf("%d",&choice);
 	
 	switch(choice)
 	{
 		case 1: 
		 ans = n1+n2;
		 printf("\n the sum is : %d",ans);	
		 break;
		 
		 case 2: 
		 ans = n1-n2;
		 printf("\n the subraction is : %d",ans);	
		 break;
		 
		 case 3: 
		 ans = n1*n2;
		 printf("\n the multiplication is : %d",ans);	
		 break;
		 
		 case 4: 
		 ans = n1/n2;
		 printf("\n the divison is : %d",ans);	
		 break;
		 
		 default:
		 	printf("\n invalid choice");
		 	
	}
 	
 	
 	getch();
 }
