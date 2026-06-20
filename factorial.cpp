#include<iostream>
using namespace std;
int main()
{
    int n, *ptr;
    cout<<"Enter a number: ";
    cin>>n;
    ptr=&n;
    int fact=1;
    for(int i=1;i<=*ptr;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<*ptr<<" is "<<fact;
    return 0;
}