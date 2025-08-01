#include <iostream>

using namespace std;

int swap(int &x, int &y){
        int temp;
        temp = x;
        x = y;
        y = temp;
}    


int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};

    cout << "Original" << endl;
    int size = 0;

    for(int i = 0; i < 9; i++){
        cout << arr[i] << " ";
        size++;
    }

    cout << endl;

    int start = 0; 
    int end = size -1;

    while (start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reverse" << endl;

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}