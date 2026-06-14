#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;
    
    cout << "Enter number of terms: ";
    cin >> n;
    
    // Series: 1/2 + 2/3 + 3/4 + ... + n/(n+1)
    for (int i = 1; i <= n; i++) {
        sum += (double)i / (i + 1);
    }
    
    cout << "Sum of series: " << sum << endl;
    
    return 0;
}
