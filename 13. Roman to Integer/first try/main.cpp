#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int romanToInt(string s){
        unordered_map<char, int> m{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int res = 0;
        for(int i = 0; i < s.length();){
            switch(s[i]){
                case 'I':
                    if(s[i+1] == 'V' || s[i+1] == 'X'){
                        res += m[s[i+1]] - 1;
                        i += 2;
                    }
                    else{
                        res += m[s[i]];
                        i++;
                    };
                    break;

                case 'X':
                    if(s[i+1] == 'L' || s[i+1] == 'C'){
                        res += m[s[i+1]] - 10;
                        i += 2;
                    }
                    else{
                        res += m[s[i]];
                        i++;
                    };
                    break;

                case 'C':
                    if(s[i+1] == 'D' || s[i+1] == 'M'){
                        res += m[s[i+1]] - 100;
                        i += 2;
                    }
                    else{
                        res += m[s[i]];
                        i++;
                    };
                    break;

                default:
                    res += m[s[i]];
                    i++;
                    break;
            }
        }

        return res;
    }
};

int main(){

    Solution solution;
    cout << solution.romanToInt("XVI") << '\n';
    cout << solution.romanToInt("XIV") << '\n';
    cout << solution.romanToInt("MMM") << '\n';

}