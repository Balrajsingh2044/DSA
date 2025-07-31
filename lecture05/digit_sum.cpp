#include <iostream>
#include <numeric>

using namespace std;

int sum_ddigit(int n){
    int sum = 0;
    while (n > 0) {
        sum += n%10;
        n /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
}


int main() {
    int x;
    cout << "Enter a positive integer: ";
    cin >> x;

    sum_ddigit(x);
}