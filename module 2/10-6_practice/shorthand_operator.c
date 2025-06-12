#include<stdio.h>
#include<conio.h>

int main()
{
	int a = 24;
	int b = 1;
	int c = 2;
	
	//shorthand operator
	a+=b;
	printf("%d\n",a);
	
	b-=a;
	printf("%d\n",b);
	
	c*=b;
	printf("%d\n",c);
	
	return 0;
}
