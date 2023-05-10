#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m, aux = 0; aux < n; i++, aux++){
            nums1[i] = nums2[aux];
        }
        sort(nums1.begin(), nums1.end());
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