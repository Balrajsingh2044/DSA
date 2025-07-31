#include <iostream>
#include <numeric>

using namespace std;

int isPrime(int n) {
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return 0;
    }

    else{
        for (int i = 2; i < n; i++) {
            if (n%i == 0) {
                cout << n << " is not a prime number." << endl;
                return 0;
            } else {
                cout << n << " is a prime number." << endl;
                return 1;
            }
        }
    }
}

int main() {
    int x;
    cout << "Enter a positive integer: ";
    cin >> x;

    isPrime(x);
    return 0;
}