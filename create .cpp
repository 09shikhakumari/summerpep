//write a c++ program to create an element in an array and display the elements of the array
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}