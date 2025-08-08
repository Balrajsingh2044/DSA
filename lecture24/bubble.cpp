#include <iostream>
#include <vector>

using namespace std;

int bubbleSort(vector<int> &nums){
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        bool isswap = false;
        for(int j = 0; j < n - i -1; j++) {
            if(nums[j] > nums[j +1]){
                swap(nums[j], nums[j + 1]);
                isswap = true;
            }
        }
        if(!isswap) {
            break; 
        }
    }
}

int printArray(vector<int> &nums){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {5, 3, 8, 6, 2};
    int n = nums.size();

    bubbleSort(nums);
    printArray(nums);

}