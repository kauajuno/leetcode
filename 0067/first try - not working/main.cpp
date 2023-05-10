#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int asize = a.size() - 1, bsize = b.size() - 1, leftover = 0, remaindersize;
        string remainderholder, res = "";
        for(; min(asize, bsize) >= 0; asize--, bsize--){
            if(a[asize] == '1' && b[bsize] == '1'){
                if(leftover == 0){
                    res += '0';
                    leftover = 1;
                }
                else
                    res += '1';

            }else if(a[asize] == '0' && b[bsize] == '0'){
                if(leftover == 0)
                    res += '0';
                else{
                    res += '1';
                    leftover = 0;
                }
            }
            else{
                if(leftover == 1)
                    res += '0';
                else
                    res += '1';
            }
        }

        if(asize){
            remainderholder = a;
            remaindersize = asize;
        }else if(bsize){
            remainderholder = b;
            remaindersize = bsize;
        }else{
            remainderholder = "";
            remaindersize = 0;
        }
        
        if(leftover){
            if(!remaindersize){
                res += '1';
                reverse(res.begin(), res.end());
                return res;
            }
                
            else{
                if(remainderholder[remaindersize] == '1'){
                    res += '0';
                }else{
                    res += '1';
                }
                remaindersize--;
                /*
                if(asize){
                    if(a[asize] == '1'){
                        res += '0';
                    }else{
                        res += '1';
                    }
                    remainderholder = a;
                    remaindersize = --asize;
                }else{
                    if(b[bsize] == '1'){
                        res += '0';
                    }else{
                        res += '1';
                    }
                    remainderholder = b;
                    remaindersize = --bsize;
                }
                */
            }
        }

        

        for(;remaindersize >= 0;remaindersize--)
            res += remainderholder[remaindersize];

        reverse(res.begin(), res.end());

        return res;
    }
};

int main(){

    Solution s;

    cout << s.addBinary("11", "11") << '\n';

    return 0;
}