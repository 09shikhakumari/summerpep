//write a c++ program to search for an element in an array
#include <iostream>
using namespace std;

int main() {
    int a[10], n, x, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> x;

    for(i = 0; i < n; i++) {
        if(a[i] == x) {
            cout << "Element found";
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}
