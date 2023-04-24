// first try

#include <bits/stdc++.h>

using namespace std;

vector<int> sum_target(vector<int>& nums, int target){
    int size = nums.size();
    vector<int> solution;
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if((nums[i] + nums[j]) == target){
                solution.push_back(i);
                solution.push_back(j);
                return solution;
            }
        }
    }
    return solution;
}

int main(){

    vector<int> input;
    int target = 6;
    input.push_back(3);
    input.push_back(2);
    input.push_back(4);

    vector<int> solution = sum_target(input, target);
    cout << solution[0] << solution[1];


    return 0;
}