#include <iostream>
#include <numeric>

using namespace std;  

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int nCr(int n, int r) {
    return factorial(n) / factorial(r) / factorial(n - r);


}

int main () {
    int n, r;
    cout << "Enter values for n and r (n >= r): ";
    cin >> n >> r;

    cout << "nCr(" << n << ", " << r << ") = " << nCr(n, r) << endl;


}