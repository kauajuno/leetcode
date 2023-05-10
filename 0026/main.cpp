#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;

        for(int cont = 0, prev = -101; cont < nums.size(); cont++){
            if(nums[cont] > prev){
                nums[k] = nums[cont];
                prev = nums[k];
                k++;
            }else{
                nums[cont] = 101;
            }
        }
        
        return k;
    }
};

int main(){

    vector<int> test;
    Solution solution;
    
    test.push_back(-10);
    test.push_back(-10);
    test.push_back(-10);
    test.push_back(-10);
    test.push_back(-5);
    test.push_back(-5);
    test.push_back(0);
    test.push_back(0);
    test.push_back(0);
    test.push_back(0);
    test.push_back(0);
    test.push_back(10);
    test.push_back(10);
    test.push_back(10);

    cout << solution.removeDuplicates(test) << '\n';

    return 0;
}