// not working yet

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        int size = s.size();

        if(size == 0) return 0;
        if(size == 1) return 1;

        int prev = 1, curr = 1, aux;

        for(int i = 2; i <= size; i++){

            aux = prev;
            prev = curr;
            curr = aux + prev;
        }

        cout << "Before removals : " << curr << '\n';

        auto it = s.begin();
        auto itnext = s.begin();

        itnext++;

        while(itnext != s.end()){
            if(*it != '2' && *it != '1'){
                curr--;
            }else if(*it == '2' && (*itnext == '7' || *itnext == '8' || *itnext == '9')){
                curr--;
            }
            it++;
            itnext++;
        }

        return curr;
    }
};

int main(){


    Solution s;

    cout << s.numDecodings("11106") << '\n'; 
    cout << s.numDecodings("12") << '\n';
    cout << s.numDecodings("113") << '\n';


    return 0;
}