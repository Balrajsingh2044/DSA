#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(),  maxSum = nums[0], currSum = 0;
        for(int val : nums){
            currSum += val;
            maxSum = max(currSum, maxSum);
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    vector<int> nums = {5,4,-1,7,8};
    cout << "Maximum Subarray Sum: " << Solution().maxSubArray(nums) << endl;
    return 0;

}