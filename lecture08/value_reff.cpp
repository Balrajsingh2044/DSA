#include <iostream>

using namespace std;

int change(int arr[]){

    for (int i =0 ;i < 3; i++) {
        arr[i] = 2 * arr[i];
    }
}

int change(int x){
    x = x*2;
    cout << x<<endl;
}


int main() {
    int x = 2;
    int arr[3] = {1,2,3};
    
    change(arr);
    cout << "In main"<<endl;
    for(int i = 0; i <3; i++) {
        cout << arr[i]<<" ";
    }
    cout << endl;

    change(x);
    cout << x;

}