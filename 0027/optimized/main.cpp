#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto it = nums.begin();
        for(int i = 0; i < nums.size(); i++, it++){
            if(nums[i] == val){
                nums.erase(it);
                it--;
                i--;
            }
        }
        return nums.size();
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