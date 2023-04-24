#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        auto it = digits.rbegin();
        while(true){
            if(*it == 9 && it != digits.rend()){
                *it = 0;
                it++;
            }else if(*it != 9 && it != digits.rend()){
                *it = *it + 1;
                break;
            }else{
                vector<int>::iterator it = digits.begin();
                digits.insert(it, 1);
                break;
            }
        }
        return digits;    
    }
};

int main(){

    Solution s;

    vector<int> t = {9, 9, 9};
    vector<int> t2 = {1, 2, 4};
    vector<int> t3 = {1, 9, 9};

    s.plusOne(t);
    s.plusOne(t2);
    s.plusOne(t3);

    vector<vector<int>> vectors = {t, t2, t3};

    for(vector<int> v : vectors){
        for(int i : v){
            cout << i << " ";
        }
        cout << '\n';
    }

    return 0;
}