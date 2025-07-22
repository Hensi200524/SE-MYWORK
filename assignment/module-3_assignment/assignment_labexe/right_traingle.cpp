//Write a program that prints a right-angled triangle using stars (*) with a nested loop

#include <iostream>
using namespace std;

int main()
{
    int rows,i,j;

    cout<<"Enter the number of rows: ";
    cin>>rows;

    // Outer loop for rows
    for(i=1;i<=rows;i++)
    {
        // Inner loop for stars
        for (j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

