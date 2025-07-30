#include<iostream>
#include<string>

using namespace std;

int main() {
    char x;
    cout << "Enter a character: ";
    cin >> x;

    int value = x;

    if(value >= 65 && value <= 90) {
        cout << "The character is an uppercase letter." << endl;
    } else if(value >= 97 && value <= 122) {
        cout << "The character is a lowercase letter." << endl;
    } else if(value >= 48 && value <= 57) {
        cout << "The character is a digit." << endl;
    } else {
        cout << "The character is a special symbol." << endl;
    }
}