#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        int x = 1;
        for(int j = 0; j < i; j++){
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}