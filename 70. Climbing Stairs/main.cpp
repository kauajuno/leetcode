#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int i = 0;
        if(n >= 2)
            i++;
        if(n >= 1)
            i += 2;
        return i + climbStairs(n-2);
    }
};

int main(){

    Solution s;
    cout << s.climbStairs(3) << '\n';

    return 0;
}