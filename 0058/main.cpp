#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        auto it = s.rbegin();
        int k = 0;
        while(*it == ' ') it++;
        for(; it != s.rend() &&  *it != ' '; it++)  
            k++;
        return k;
    }
};

int main(){

    Solution s;
    cout << s.lengthOfLastWord("Testing here!") << '\n';

    return 0;

}