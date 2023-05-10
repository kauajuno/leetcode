#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    string longestCommonPrefix(vector<string>& v){
        string ans = "";
        sort(v.begin(), v.end());
        int vsize = v.size();
        string first = v[0], last = v[vsize-1];
        for(int i = 0; i < min(first.size(), last.size()); i++){
            if(first[i] != last[i])
                return ans;
            ans += first[i];
        }
        return ans;
    }
};

int main(){
    vector<string> v;

    v.push_back("dog");
    v.push_back("document");
    v.push_back("draven");

    Solution sol;
    cout << sol.longestCommonPrefix(v);

    return 0;
}