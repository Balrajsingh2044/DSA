#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers: " << sum << endl;
    return 0;
}