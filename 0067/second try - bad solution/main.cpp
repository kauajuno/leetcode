// will work poorly for large string inputs

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int sum = 0;
        string res = "";
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for(int i = 0; i < a.size(); i++){
            if(a[i] == '1')
                sum += pow(2, i);
        }
        for(int i = 0; i < b.size(); i++){
            if(b[i] == '1')
                sum += pow(2, i);
        }

        if(sum == 0) return "0";
        
        while(sum > 0){
            if(sum & 1)
                res += '1';
            else
                res += '0';
            sum >>= 1;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main(){

    Solution s;
    cout << s.addBinary("1", "111") << '\n';

    return 0;
}