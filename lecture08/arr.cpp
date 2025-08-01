#include <iostream>

using namespace std;

int max(int arr[]){
    int max = arr[0];

    for(int i =0; i < 6; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[]){
    int min = arr[0];

    for(int i =0; i < 6; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

int main() {
    int arr[6] = {5,15,22,1,-15,24};

    cout << "Max: " << max(arr) << endl;
    cout << "Min: " << min(arr) << endl;

    

}