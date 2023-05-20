#include<bits/stdc++.h>

using namespace std;

class Solution {
public:

    bool isPalindrome(string s){
        int l = 0, r = s.size() - 1;
        while(l < r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        if(s.empty()) return "";
        int l = 0, r = s.size() - 1, lpalm = 0, resetr = s.size() - 1;
        string palindromeHolder = s.substr(0, 1);
        for(l; l < s.size() - lpalm; l++){
            while(l < r){
                if(isPalindrome(s.substr(l, r - l + 1))){
                    if((r - l + 1) > lpalm){
                        palindromeHolder = s.substr(l, r - l + 1);
                        lpalm = r - l + 1;
                        break;
                    }
                }
                r--;
            }
            r = resetr;
        }
        return palindromeHolder;
    }
};

int main(){

    Solution s;
    cout << s.longestPalindrome("babad") << '\n';
    
    return 0;
}