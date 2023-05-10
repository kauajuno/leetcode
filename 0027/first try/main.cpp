#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int track = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val)
                track++;
            else
                nums[i - track] = nums[i];
        }
        return nums.size() - track;
    }
};

int main(){

    Solution s;
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(7);
    vec.push_back(7);
    vec.push_back(1);
    vec.push_back(1);

    cout << s.removeElement(vec, 7) << '\n';

    return 0;
}