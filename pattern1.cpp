#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    int s = 0;

    for(int i = 1; i <= n; i++)
    {
        if(i == n)
        {
            cout << i << " = ";
        }
        else
        {
            cout << i << " + ";
        }

        s += i;
    }

    cout << s;

    return 0;
}