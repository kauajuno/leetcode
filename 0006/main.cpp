#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {

        
        if(numRows == 1) return s;

        int counter = 0;
        bool ascending = false;
        vector<string> v(numRows);
        
        for(char c : s){
            if(!ascending){
                v[counter].push_back(c);
                counter++;
            }else{
                v[counter].push_back(c);
                counter--;
            }
            if(counter == 0 || counter == numRows - 1){
                ascending = !ascending;
            }
        }

        string nw = "";
        for(string ss : v)
            nw += ss;

        return nw;
    }
};

int main(){
    
    return 0;
}