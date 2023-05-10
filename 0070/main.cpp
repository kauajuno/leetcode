#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;

        int aux, prev = 1, curr = 1;

        for(int i = 2; i <= n; i++){
            aux = curr;
            curr += prev;
            prev = aux;
        }

        return curr;
    }
};

int main(){

    Solution s;
    cout << s.climbStairs(3) << '\n';
    cout << s.climbStairs(4) << '\n';
    return 0;
}