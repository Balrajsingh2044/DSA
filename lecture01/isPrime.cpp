#include <iostream>
#include <string>   

using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    bool flag = false;

    for (int i = 2; i < x; i++){
        if(x % i != 0){
            flag = true;
            break;
        }

    }

    if(flag){
        cout << x << " is a prime number." << endl;
    } else {
        cout << x << " is not a prime number." << endl;

    }

}