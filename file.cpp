#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name, percentage;
    int roll;

    ofstream file("student.txt");

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Roll No: ";
    cin >> roll;

    cout << "Enter Percentage : ";
    cin >> percentage;

    file << name << endl;
    file << roll << endl;
    file << percentage << endl;
    file.close();

    return 0;
}