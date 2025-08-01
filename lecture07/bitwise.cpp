#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int x;
    cout << "Enter a positive integer: ";
    cin >> x;

    if ((x & 1) == 0){
        cout << x << " is even." << endl;
    } else {
        cout << x << " is odd." << endl;    //the last digit of every binary number that is divisble in decimal base has a 0 at the end therefore if we use and logic with it we can get the required result.
    }
}