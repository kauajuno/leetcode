#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<string> MS {"", "M", "MM", "MMM"};
        vector<string> CS {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        vector<string> DS {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        vector<string> US {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

        return MS[num/1000] + CS[(num/100)%10] + DS[(num/10)%10] + US[num%10];
    }
};

int main(){

    Solution s; 
    cout << s.intToRoman(58) << '\n';
    
}