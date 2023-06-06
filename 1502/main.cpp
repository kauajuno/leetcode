#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        float ratio = arr[1] / arr[0];
        for(int i = 2; i < arr.size(); i++){
            if(arr[i] / arr[i-1] != ratio){
                return false;
            }
        }
        return true;
    }
};

int main(){
    int tc;
}