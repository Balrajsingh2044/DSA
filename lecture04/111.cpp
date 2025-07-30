#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i =0; i < n; i++) {
        for(int k = 0; k < i+1; k++) {
            cout << "  ";
        }
        for(int j = n; j > i; j--){
            cout << i+1 << " ";
        }
        cout << endl;
    }
}