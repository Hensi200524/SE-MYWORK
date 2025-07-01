#include <stdio.h>
#include <conio.h>


 void multiple(int a,int b,int *result)
 {
 	printf("\n befor multiplicaton is function: %d * %d = %d",a,b,*result);
 	*result = a*b;
 	printf("\n after multiplicaton is function: %d * %d = %d",a,b,*result);
 }

int main()
{
	int x,y,ans=0;
	
	x=8;
	y=5;
	
	
	printf("\n befor multiplicaton is : %d * %d = %d",x,y,ans);
	multiple(x,y,&ans);
	printf("\n after multiplicaton is : %d * %d = %d",x,y,ans);
	return 0;
}
