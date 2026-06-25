#include <iostream>
using namespace std;

int main()
{
    int n, temp, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if (sum == temp)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}