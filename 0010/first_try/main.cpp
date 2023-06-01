#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        if(s[0] != p[0] && p[0] != '.') return false;

        int ip = 1;
        int is = 1;

        for(; is != s.size() && ip != p.size(); is++){
            if(s[is] != p[ip]){
                if(p[ip] == '.'){
                    ip++;
                    continue;
                }
                if(p[ip] == '*' && p[ip - 1] == '.'){
                    if(s[is] != s[is - 1]){
                        ++ip;
                        --is;
                    }
                    continue;
                }
                return false;
            }
            ip++;
        }

        if(is != s.size() || ip < p.size() - 1) return false;

        return true;
    }
};

int main(){

    Solution s;

    while(true){
        string a, b;
        cout << "INPUT\n";
        getline(cin, a);
        getline(cin, b);
        cout << (s.isMatch(a, b)? "true\n" : "false\n");
    }
    
    
    return 0;
}