#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {

        int sum = 0;
        
        int max = *max_element(nums.begin(), nums.end());
        vector<int>::iterator it = find(nums.begin(), nums.end(), max);
        nums.erase(it);

        for(int i = 0; i < k; i++){
            sum += max;
            max++;
        }

        nums.push_back(max);

        return sum;
    }
};

int main(){

    vector<int> v = {5, 5, 5};
    Solution s;
    s.maximizeSum(v, 3);
    for(int i : v){
        cout << i;
    }


}