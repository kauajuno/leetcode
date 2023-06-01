#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int shortestPathBinaryMatrix(vector<vector<int>> &grid)
    {
        if(grid[0][0] == 1) return -1;
        if(grid[0][0] == 0 && grid.size() == 1 && grid[0].size() == 1) return 1;

        set<pair<int, int>> neighbors = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};

        queue<pair<pair<int, int>, int>> q;
        vector<vector<bool>> v(grid.size(), vector<bool>(grid.size(), false));
        q.push({{0, 0}, 1});

        while(!q.empty()){
            int pathSize = q.front().second;
            int currX = q.front().first.first;
            int currY = q.front().first.second;
            q.pop();

            for(pair<int, int> n : neighbors){

                int newX = currX + n.first;
                int newY = currY + n.second;
                if(newX >= 0 && newX < grid.size() && newY >= 0 && newY < grid[0].size() && grid[newX][newY] == 0 && !v[newX][newY]){
                    q.push({{currX + n.first, currY + n.second}, pathSize + 1});
                    v[newX][newY] = true;

                    if(newX == grid.size() - 1 && newY == grid[0].size() - 1)
                        return pathSize + 1;
                }
            }
        }

        return -1;
    }
};


int main()
{
    int tc;
}