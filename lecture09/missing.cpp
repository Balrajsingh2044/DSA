#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {3,0,1};
    int n = nums.size();
    for(int i = 0; i <= n; i++){
        bool flag = false;
        for(int val : nums){
            if(val == i){
                flag = true;
            }
        }
        if(!flag){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
