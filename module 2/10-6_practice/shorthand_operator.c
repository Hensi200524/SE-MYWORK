#include<stdio.h>
#include<conio.h>

int main()
{
	int a = 24;
	int b = 1;
	int c = 2;
	
	//shorthand operator
	a+=b;//a=a+b,ans=25
	printf("%d\n",a);
	
	b-=a;//b=b-a,ans=-24
	printf("%d\n",b);
	
	c*=b;//c=c*b,ans=-48
	printf("%d\n",c);
	
	return 0;
}
