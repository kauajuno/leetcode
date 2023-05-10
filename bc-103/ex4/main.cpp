#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>& nums) {
        long long count = 0;
        int min = *min_element(nums.begin(), nums.end());
        auto it = nums.begin();
        while(!nums.empty()){
            if(*it == min){
                nums.erase(it);
                count++;
            }else{
                nums.push_back(*it);
                nums.erase(it);
            }
        }
        return count;
    }
};

int main(){



}