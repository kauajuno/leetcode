#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || x != 0 && x % 10 == 0)
            return false;
        int half = 0;
        while(x > half){
            half = half * 10 + x % 10;
            x /= 10;
        }
        return x == half || x == half / 10;
    }
};

int main(){

    
    Solution s;
    cout << s.isPalindrome(1221) << '\n';
    return 0;
}