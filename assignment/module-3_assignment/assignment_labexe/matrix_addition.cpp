//Write a C++ program to perform matrix addition on two 2x2 matrices.

#include <iostream>
using namespace std;

int main()
{
	int a[2][2],b[2][2],result[2][2];
	int i,j;
	
	//Input first matrix
	cout<<"\n Enter element of first 2*2 matrix : "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout <<"Element [" << i << "][" << j << "]: ";
            cin >> a[i][j];
		}
	}
	
	// Input second matrix
	cout<<"\n Enter element of second 2*2 matrix : "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout <<"Element [" << i << "][" << j << "]: ";
            cin >> b[i][j];
		}
	}
	
	//Perform matrix addition
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j] = a[i][j]+b[i][j];
		}
	}
	
	// Display result
    cout << "\nResultant Matrix after Addition." << endl;
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		cout<<result[i][j]<<"\t";
		}
		cout<<endl;
	}

	return 0;
}
