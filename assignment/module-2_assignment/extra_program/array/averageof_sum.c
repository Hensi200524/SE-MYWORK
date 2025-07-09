// Modify the program to also find the average of the numbers

#include <stdio.h>
#include <conio.h>

int main()
{
	int n,i,sum=0;
	float average;
    
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int arr[n]; // Array to store N elements

    printf("Enter %d numbers:\n", n);
    for(i=0;i<n;i++)
	{
        printf("Element %d: ", i+1);
        scanf("%d",&arr[i]);
        sum += arr[i]; // Add element to sum
    }
    
    average = sum/n;

    printf("\nSum of all array elements = %d",sum);
    printf("\nAverage of the elements = %.2f\n",average);
    
	return 0;
}
