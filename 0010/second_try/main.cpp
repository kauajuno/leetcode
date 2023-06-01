#include<bits/stdc++.h>

using namespace std;

// TODO: Solve this

class Solution {
public:
    bool isMatch(string s, string p) {

        if(p.size() > s.size()) return false;

        int ss = s.size();
        bool joker = false;
        for(int i = 0, j = 0; i < ss; i++){
            if(s[i] == p[j]){
                j++;
                continue;
            }
            if(p[j] == '.'){
                j++;
                joker = true;
                continue;
            }
            if(p[j] == '*'){
                if(s[i] == s[i - 1] && s[i] == p[j - 1]){
                    continue;
                }
                if(joker){
                    
                }
                else{
                    j++;
                    i--;
                    if(j == p.size()) return false;
                    continue;
                }
                
            }
            return false;
        }
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