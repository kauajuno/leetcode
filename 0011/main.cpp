#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int highestArea = 0, currArea;
        while(l < r){
            currArea = min(height[l], height[r]) * (r - l);
            if(currArea > highestArea)
                highestArea = currArea;
            
            if(height[l] > height[r])
                r--;
            else
                l++;
        }

        return highestArea;
    }
};

int main(){
    
}