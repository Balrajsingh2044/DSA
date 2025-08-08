#include <iostream>
#include <vector>

using namespace std;

int insertionSort(vector<int> &nums){
    int n = nums.size();

    for(int i = 1; i < n; i++){
        int curr = nums[i];
        int prev = i-1;

        while(prev >= 0 && nums[prev] < curr){
            nums[prev+1] = nums[prev];

            prev--;

        }
        nums[prev+1] = curr;
    }
}

int printArray(vector<int> &nums){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {4,1,3,5,2};
    int n = nums.size();

    insertionSort(nums);
    printArray(nums);

}