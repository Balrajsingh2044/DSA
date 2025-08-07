#include <iostream>
#include <vector>

using namespace std;

int binarysearch(const vector<int>& nums, int target){
    int st = 0, end = nums.size() - 1;

    while (st <= end){
        int mid = (st+end)/2;

        if(target > nums[mid]){
            st = mid +1;
        }
        else if(target < nums[mid]){
            end = mid -1;
        }

        else{
            return mid;
        }
    }

    return -1;

}

int recbinarySearch(vector<int> & nums, int target, int st, int end){
    if(st <= end){
        if(target < nums[(st+end)/2]){
            return recbinarySearch(nums, target, st, ((st+end)/2)-1);
        }

        else if (target > nums[(st + end)/2]){
            return recbinarySearch(nums, target, ((st+end)/2)+1, end);
        }
        else{
            return (st+end)/2;
        }

    }
    return -1;
}

int main() {
    vector<int> nums = {-1,0,3,4,5,9,12};
    int target = 0;



    cout << recbinarySearch(nums, target, 0, nums.size()-1) << endl;
}