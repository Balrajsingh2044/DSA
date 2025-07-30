#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Check if the number is odd
            sum += i;
        }
    }

    cout << "Sum of first " << n << " odd natural numbers: " << sum << endl;
    return 0;
}