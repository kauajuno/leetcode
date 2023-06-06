#include <bits/stdc++.h>

using namespace std;

class Solution{

public:
    bool checkStraightLine(vector<vector<int>> &coordinates){
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];
        for (int i = 2; i < coordinates.size(); i++){
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            if ((x - x0) * (y1 - y0) != (y - y0) * (x1 - x0)){
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution s;

    vector<vector<int>> v{{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}};

    cout << s.checkStraightLine(v);
}