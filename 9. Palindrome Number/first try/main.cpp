// Adição de cada elemento à lista com comparação posteriormente entre o primeiro e o último elemento.

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        list<int> l;
        while(x > 0){
            l.push_back(x % 10);
            x /= 10;
        }
        while(l.size() >= 2){
            if(l.front() != l.back())
                return false;
            l.pop_back();
            l.pop_front();
        }
        return true;
    }
};

int main(){
    Solution solving;
    string result = solving.isPalindrome(5225) ? "true" : "false";
    cout << result;
}