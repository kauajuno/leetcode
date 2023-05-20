#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() < nums2.size()) swap(nums1, nums2);
        for(int i : nums2) nums1.push_back(i);
        sort(nums1.begin(), nums1.end());
        if(nums1.size() & 1) return (double) nums1[nums1.size() / 2];
        return (double) (nums1[nums1.size() / 2] + nums1[(nums1.size() / 2) - 1]) / 2;
    }
};

int main(){
    Solution s;
    vector<int> l1 {1, 3};
    vector<int> l2 {2};
    cout << s.findMedianSortedArrays(l1, l2);
    cout << '\n';
    return 0;
}