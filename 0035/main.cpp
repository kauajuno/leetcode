#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int c, l = 0, r = nums.size() - 1;
        while(l <= r){
            c = l + (r - l) / 2;
            if(nums[c] == target)
                return c;
            else if(nums[c] > target)
                r = c - 1;
            else
                l = c + 1;
        }
        return l;
    }
};


int main(){

    Solution sol;
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(15);
    nums.push_back(20);
    nums.push_back(25);
    nums.push_back(30);
    nums.push_back(35);
    nums.push_back(40);
    
    cout << sol.searchInsert(nums, 11) << '\n';

    return 0;
}