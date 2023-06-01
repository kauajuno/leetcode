#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        bool justStarted = true;
        int res = 0;
        bool neg = false;
        for(char c : s){
            if(tolower(c) >= 'a' && tolower(c) <= 'z') break;
            if(c == ' '){
                if(justStarted)
                    continue;
                else
                    break;
            }
            justStarted = false;
            if(c == '-') neg = true;
            else{
                if(res > INT_MAX / 10) return 0;
                res = res * 10 + c - '0';
            }
        }
        return neg? -1 * res : res;
    }
};

int main(){
    
    return 0;
}