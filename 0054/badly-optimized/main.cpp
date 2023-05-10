#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int direction = 0, line = 0, col = 0;
        pair<int, int> p;
        map<pair<int, int>, bool> mapi;
        vector<int> output;
        int c = 0;

        while(true){
            if(direction % 4 == 0){
                if((col + 1 < n) && mapi.find(make_pair(line, col + 1)) == mapi.end()){
                    output.push_back(matrix[line][col]);
                    mapi[make_pair(line, col)] = true;
                    col++;
                    c = 0;
                }else{
                    direction++;
                    c++;
                }
            }else if(direction % 4 == 1){
                if((line + 1 < m) && mapi.find(make_pair(line + 1, col)) == mapi.end()){
                    output.push_back(matrix[line][col]);
                    mapi[make_pair(line, col)] = true;
                    line++;
                    c = 0;
                }else{
                    direction++;
                    c++;
                }
            }else if(direction % 4 == 2){
                if((col - 1 >= 0) && mapi.find(make_pair(line, col - 1)) == mapi.end()){
                    output.push_back(matrix[line][col]);
                    mapi[make_pair(line, col)] = true;
                    col--;
                    c = 0;
                }else{
                    direction++;
                    c++;
                }
            }else if(direction % 4 == 3){
                if((line - 1 >= 0) && mapi.find(make_pair(line - 1, col)) == mapi.end()){
                    output.push_back(matrix[line][col]);
                    mapi[make_pair(line, col)] = true;
                    line--;
                    c = 0;
                }else{
                    direction++;
                    c++;
                }
            }
            if(c == 4){
                output.push_back(matrix[line][col]);
                break;
            }
        }

        return output;


    }
};

int main(){

    Solution s;

    vector<vector<int>> aux{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    vector<int> v = s.spiralOrder(aux);

    for(int i : v){
        cout << i;
    }

    return 0;
}