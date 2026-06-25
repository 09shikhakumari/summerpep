#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1, i = 1;

    cout << "Enter a number: ";
    cin >> n;

    do
    {
        fact = fact * i;
        i++;
    } while (i <= n);

    cout << "Factorial = " << fact;
    return 0;
}