//method overloading with same method name and same no. of parameter


#include <iostream>
using namespace std;

class Cal
{
    public:
        int count(int a,int b)
        {
            return a+b;
        }
        int count(int a,int b,int c)
        {
            return a*b*c;
        }
};

int main()
{
        
        Cal c;
        
        cout<<c.count(3,2)<<endl;//5
        cout<<c.count(3,2,2)<<endl;//12

    return 0;
}
