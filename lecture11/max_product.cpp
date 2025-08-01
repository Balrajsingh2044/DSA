#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mp = nums[0], cp =1;
        for(int vals : nums){
            cp *= vals;
            mp = max(cp, mp);
            if(cp < 0){
                cp *= 1;
            }
            else if(cp == 0){
                cp = 1;
            }
        }
        return mp;
    }
};

int main() {
    vector<int> nums = {3,-1,4};
    cout << "Maximum Product Subarray: " << Solution().maxProduct(nums) << endl;
    return 0;
}