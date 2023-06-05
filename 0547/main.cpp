#include <bits/stdc++.h>

using namespace std;

class Solution {
    // TODO: solve again.
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int score = 0;
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                score++;
                dfs(isConnected, visited, i);
            }
        }

        return score;
    }

    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int node) {
        visited[node] = true;
        for (int neighbor = 0; neighbor < isConnected.size(); neighbor++) {
            if (isConnected[node][neighbor] == 1 && !visited[neighbor]) {
                dfs(isConnected, visited, neighbor);
            }
        }
    }
};

int main()
{
    vector<vector<int>> v{
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 }, 
        { 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 }, 
        { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, 
        { 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0 }, 
        { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 }, 
        { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, 
        { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, 
        { 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 }, 
        { 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 }, 
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 }, 
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 }, 
        { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 }, 
        { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 }, 
        { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 }, 
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }
    };

    Solution s;

    cout << s.findCircleNum(v) << '\n';
}