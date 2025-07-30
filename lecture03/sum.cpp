#include <iostream>
#include <string>   

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers: " << sum << endl;
    return 0;
}