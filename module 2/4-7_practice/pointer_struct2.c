//pointer with structure

#include <stdio.h>
#include <conio.h>


struct details
{
	int num;
}d1,*ptr;
int main()
{

	ptr=&d1;
	ptr->num=26;
	printf("\n %d",d1.num);
	return 0;
}
