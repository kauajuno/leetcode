#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        auto it = s.begin();
        auto ref = it;
        int hs = 0, sc = 0;
        unordered_map<char, bool> umap;
        while(it != s.end()){
            if(umap.find(*it) == umap.end()){
                umap[*it] = true;
                sc++;
                it++;
            }else{
                if(sc > hs) hs = sc;
                sc = 0;
                umap.clear();
                ref++;
                it = ref;
            }
        }
        if(sc > hs) hs = sc;
        return hs;
    }
};



int main(){

    Solution s;

    int a = s.lengthOfLongestSubstring("dvdf");

    cout << a;
    
    return 0;
}
