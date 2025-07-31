#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;

int dectoBinary(int n) {
    int ans = 0; 
    int power = 1;

    while (n > 0) {
        int rem = n % 2;
        n /= 2;

        ans += rem * power;
        power *= 10;
    }
    return ans;
}

int bintoDec(int n) {
    int ans = 0;
    int power = 0;
    while (n > 0) {
        int rem = n % 10;
        n /= 10;

        ans += rem * pow(2,power);
        power++;
    }
    return ans;
}


int main() {
    int x;
    cout << "Enter a positive integer: ";
    cin >> x;

    cout << "Decimal to Binary: " << dectoBinary(x) << endl;

    int y;
    cout << "Enter a binary number: ";
    cin >> y;

    cout << "Binary to Decimal: " << bintoDec(y) << endl;

}