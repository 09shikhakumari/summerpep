#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == 2 * n)
        cout << n << " is a Thunder Number";
    else
        cout << n << " is Not a Thunder Number";

    return 0;


}