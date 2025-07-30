#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> "Enter a number: " >> n;
    for (int i = 0; i < n; i++){
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers: " << sum << endl;
    return 0;
}