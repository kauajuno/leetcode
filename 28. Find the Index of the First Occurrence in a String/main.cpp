#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int check = 0, counter = 0;
        while(check < needle.size() && counter < haystack.size()){
            if(haystack[counter] == needle[check])
                check++;
            else{
                counter -= check;
                check = 0;
            }
                
            counter++;
        }

        if(check == needle.size())
            return counter - check;
        return -1;
    }
};

int main(){

    Solution s;
    cout << s.strStr("onceuponatime", "ncel") << '\n';

    return 0;
}