#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int res = 0;
        bool neg = false;
        if(x < 0){
            x = abs(x);
            neg = true;
        }
        while(x > 0){
            if(res > INT_MAX / 10) return 0;
            res = res * 10 + x % 10;
            x /= 10;
        }
        return neg? -1 * res : res;
    }
};

int main(){
    
    return 0;
}