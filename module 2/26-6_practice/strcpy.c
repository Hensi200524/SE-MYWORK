//string funcation(strcpy)

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char a[20]="apple";
    char b[20];
    
    printf("\n Enter name: ");
    scanf("%s", b);

    printf("\n You entered: %s",b);

    strcpy(b, a);
    printf("\n After strcpy, b=%s",b);
	getch();
}
