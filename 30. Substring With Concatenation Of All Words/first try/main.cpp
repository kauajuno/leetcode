#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> positions;

        int strsize = words.size();
        int substrsize = words[0].size();
        string handler;

        for(int i = 0; i < s.length() - (substrsize * strsize) + 1; i++){
            vector<string> colstrings = words;
            int k = 0;
            int j = i;
            while(!colstrings.empty()){
                int found = 0;
                handler = s.substr(j, substrsize);
                auto it = std::find(colstrings.begin(), colstrings.end(), handler);
                if(it != colstrings.end()){
                    colstrings.erase(it);
                    found = 1;
                    k++;
                }
                if(!found) break;
                j += substrsize;
            }
            if(k == strsize)
                positions.push_back(i);
        }

        return positions;
    }
};

int main(){

    Solution sol;
    vector<string> vec;
    vec.push_back("foo");
    vec.push_back("bar");
    vector<int> answer = sol.findSubstring("barfoothefoobarman", vec);
    for(int i : answer)
        cout << i << '\n';


    return 0;
}