#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestprefix = strs[0];
        for(int i = 1; i < strs.size(); i++){
            for(int j = 0; j < longestprefix.length(); j++){
                if(longestprefix[j] != strs[i][j]){
                    longestprefix = strs[i].substr(0, j);
                    break;
                }
            }
            if(longestprefix.length() == 0)
                return longestprefix;
        }
        return longestprefix;
    }
};

int main(){

    vector<string> v;

    v.push_back("dog");
    v.push_back("car");
    v.push_back("flight");

    Solution sol;
    cout << sol.longestCommonPrefix(v);

    return 0;
}