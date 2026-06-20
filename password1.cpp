#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char password[] = "admin123";
    char pass[30];

    cin >> pass;

    cout << "Password = " << password << endl;
    cout << "Pass = " << pass << endl;

    cout << strcmp(password, pass);

    return 0;
}