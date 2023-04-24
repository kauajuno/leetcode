#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 1;
        int i = 2;
        while(true){
            if(x < (i * i))
                break;
            i++;
        }
        return i - 1;
    }
};

int main(){

    Solution s;
    
    cout << s.mySqrt(9) << '\n';

    return 0;
}