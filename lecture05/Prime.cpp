#include<iostream>
#include<numeric>

using namespace std;

int Prime(int n) {
    cout << 2 << " is a prime number." << endl;
    for (int i = 3; i <=n; i++){
        int flag = 0;
        for(int j = 2; j < i; j++) {
            if (i % j == 0){
                flag = 1;
            }
            if (flag != 1) {
                cout << i << " is a prime number." << endl;
                break;
            }
            else {
                cout << i << " is not a prime number." << endl;
                break;
            }
            
        }

    }
}

int main() {
    int x;
    cout << "Enter a positive integer: ";
    cin >> x;

    Prime(x);
    return 0;
}
