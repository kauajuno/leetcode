#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==1) return {{1}};
        int count = 1, u = 0, l = 0, r = n - 1, d = n - 1, square = pow(n, 2), i = 0, j = 0;
        int matrix[n][n];
        bool flag = false;
        vector<vector<int>> answer;


        while(count <= square){
            while(j <= r && count <= square){
                matrix[i][j++] = count++;
                flag = true;
            }
            u++;
            if(flag) j--; flag = false;
            i++;
            while(i <= d && count <= square){
                matrix[i++][j] = count++;
                flag = true;
            }    
            r--;
            if(flag) i--; flag = false;
            j--;
            while(j >= l && count <= square){
                matrix[i][j--] = count++;
                flag = true;
            }
            d--;
            if(flag) j++; flag = false;
            i--;
            while(i >= u && count <= square){
                matrix[i--][j] = count++;
                flag = true;
            }
            l++;
            if(flag) i++; flag = false;
            j++;
        }
        
        for(int line = 0; line < n; line++){
            vector<int> aux;
            for(int col = 0; col < n; col++){
                aux.push_back(matrix[line][col]);
            }
            answer.push_back(aux);
        }

        return answer;
    }
};

int main(){


    Solution s;
    vector<vector<int>> vv = s.generateMatrix(4);

    for(auto v : vv){
        for(auto i : v){
            cout << i << ' ';
        }
        cout << '\n';
    }

    return 0;

}