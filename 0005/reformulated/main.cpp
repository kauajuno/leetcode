#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {

        int lpalm = 1, llpalm = 1, l = 0, r = s.size() - 1;
        string lpalindrome = s.substr(0, 1);
        for(int i = l; i <= r ; i++){
            lpalm = 1;
            int lb = i - 1, rb = i + 1;
            while(lb >= l && rb <= r){
                if(s[lb] == s[rb]){
                    lpalm += 2;
                    lb--;
                    rb++;
                }else
                    break;
            }
            if(lpalm > llpalm){
                lb++;
                llpalm = lpalm;
                lpalindrome = s.substr(lb, lpalm);
            }
            lb = i, rb = i + 1, lpalm = 0;
            while(lb >= l && rb <= r){
                if(s[lb] == s[rb]){
                    lpalm += 2;
                    lb--;
                    rb++;
                }else
                    break;
            }
            if(lpalm > llpalm){
                lb++;
                llpalm = lpalm;
                lpalindrome = s.substr(lb, lpalm);
            }
            lb = i - 1, rb = i, lpalm = 0;
            while(lb >= l && rb <= r){
                if(s[lb] == s[rb]){
                    lpalm += 2;
                    lb--;
                    rb++;
                }else
                    break;
            }
            if(lpalm > llpalm){
                lb++;
                llpalm = lpalm;
                lpalindrome = s.substr(lb, lpalm);
            }
        }

        return lpalindrome;
    }
};

int main(){

    Solution s;

    cout << s.longestPalindrome("ababd") << '\n';
    
    return 0;
}