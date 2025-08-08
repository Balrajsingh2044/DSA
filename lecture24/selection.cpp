#include <iostream>
#include <vector>

using namespace std;

int selectionSort(vector<int> &nums){
    int n = nums.size();
    for(int i = 0; i < n; i++){
        int si = i;
        for(int j = i+1; j < n; j++){
            if(nums[si] > nums[j]){
                si = j;
            }

        }
        swap(nums[i], nums[si]);
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

    selectionSort(nums);

    printArray(nums);

}