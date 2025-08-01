#include<iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    int arr[] = {4,2,7,1,8,2,5};

    for(int i = 0; i < 7; i++){
        if (arr[i] == n){
            cout << "Index is: " << i;
        }

        else{
            cout <<"Not found"<< -1;
        }
    }
}