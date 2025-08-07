#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {2,7,11,15};

    int target = 26;
    vector<int> ans;
    int i = 0, j = nums.size() -1;

    while (i < j){
        if(nums[i] + nums[j] == target) {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            break;
        }
        else if (nums[i] + nums[j] > target){
            j--;
        }
        else{
            i++;
        }
    }
    for(int val : ans) {
        cout << val << " ";
    }

}