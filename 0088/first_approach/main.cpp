#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0) return;
        int i = m - 1, j = n - 1, k = m + n - 1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }else{
                nums1[k--] = nums2[j--];
            }
        }
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
    }
};

int main(){

    Solution s;
    vector<int> v1 {5, 5, 5, 5, 5, 5, 0, 0, 0};
    vector<int> v2 {2, 3, 4};

    s.merge(v1, 6, v2, 3);

    for(int i : v1)
        cout << i;

    return 0;
}