#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        if(b.size() > a.size()) swap(a, b);

        while(b.size() < a.size()) b = "0" + b;

        string sum = "";
        int remainder = 0;

        for(int i = a.size() - 1; i >= 0; i--){
            if(a[i] == '1' && b[i] == '1'){
                if(remainder == 0){
                    sum += '0';
                    remainder = 1;
                }
                else
                    sum += '1';

            }else if(a[i] == '0' && b[i] == '0'){
                if(remainder == 0)
                    sum += '0';
                else{
                    sum += '1';
                    remainder = 0;
                }
            }
            else{
                if(remainder == 1)
                    sum += '0';
                else
                    sum += '1';
            }
        }

        if(remainder) sum = sum + '1';

        reverse(sum.begin(), sum.end());

        return sum;
    }
};

int main(){

    Solution s;
    cout << s.addBinary("100", "100") << '\n';

    return 0;
}