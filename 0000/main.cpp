#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int fibonacci(int n){
        if(n == 0 || n == 1) return 1;
        int prev = 1, curr = 1;
        for(int i = 2; i <= n; i++){
            int aux = prev;
            prev = curr;
            curr += aux;
            cout << i << " : " << curr << '\n';
        }
        return curr;
    }
};

int main(){


    Solution s;
    s.fibonacci(10);

    return 0;
}