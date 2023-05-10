#include <bits/stdc++.h>

using namespace std;

vector<int> sum_two(vector<int>& vec, int target){
    unordered_map<int, int> map;
    int complement;
    for(int i = 0; i < vec.size(); i++){
        complement = target - vec[i];
        if(map.find(complement) != map.end()){
            return {map[complement], i};
        }
        map[vec[i]] = i;
    }
    return {-1, -1};
}

int main(){


    vector<int> test;
    int target = 6;

    test.push_back(3);
    test.push_back(2);
    test.push_back(4);
    
    vector<int> res = sum_two(test, target);
    cout << res[0] << res[1];

    return 0;
}