//task to calculate bike price

#include <iostream>
using namespace std;

int calculateprice(string condition,string insurance,int year)
{
    int price = 80000;

    if (condition == "Good")
        price -= 5000;
    else if (condition == "Medium")
        price -= 15000;
    else if (condition == "Poor")
        price -= 25000;

    if (insurance == "Expired")
        price -= 5000;

    // Model year depreciation
    int age = 2025 - year;
    price -= age * 2000;

    return price;

}

int main()
{
    string vehicleno,Rcbookno,condition,insurance,company;
    int year,n;

    cout<<"\n Enter the Number of Bike : "<<endl;
    cin>> n;

    for(int i=0;i<n;i++)
    {
        cout<<"\n Enter Vehicle No : ";
        cin>>vehicleno;

        cout<<"\n Enter Rcbook No : ";
        cin>>Rcbookno;

        cout<<"\n Enter Model Year : ";
        cin>>year;

        cout<<"\n Enter Condition (Good,Medium,Poor) : ";
        cin>>condition;

        cout<<"\n Enter insurance Status (Running , Expried) : ";
        cin>>insurance;

        cout<<"\n Enter Company Name : ";
        cin>>company;

        int price = calculateprice(condition,insurance,year);

        cout<<"\n-----------Bike Details----------------";
        cout<<"\n Vehicle No: "<<vehicleno;
        cout<<"\n RcBook No: "<<Rcbookno;
        cout<<"\n Model Year: "<<year;
        cout<<"\n Condition: "<<condition;
        cout<<"\n Insurance status: "<<insurance;
        cout<<"\n Company Name: "<<company;
        cout << "\nEstimated Price: Rs. " << price << "\n";

    }
    return 0;
}