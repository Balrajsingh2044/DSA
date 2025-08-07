#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<int> nums = {1,2,2,1,1,2,2,2,2};

    for(int val : nums) {
        int freq = 0;
        
        for(int target_el : nums){
            if(val == target_el) {
                freq++;
            }
            
            if(freq > (nums.size()/2)){
                printf("Majority Element: %d\n", val);
                return 0;
            }
        }
    }
}