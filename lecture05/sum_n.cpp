#include <iostream>
#include <numeric>

using namespace std;

int sum_n(int n){
    int sum = 0;
    for (int i = 1; i<=n; i++){
        sum += i;
    }
    return sum;

}

int factorrial (int n){
    if (n <= 1){
        return 1;
    }
    else {
        return n * factorrial(n-1);
    }
}



int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Sum :" << sum_n(n);

    cout << "\nFactorial: " << factorrial(n) << endl;
}