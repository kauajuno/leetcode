#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> umap;
        vector<int> res;
        int sum = 0;
        for(int i = 0; i < A.size(); i++){
            if(umap.find(A[i]) == umap.end()){
                umap[A[i]] = 0;
            }else{
                sum++;
            }
            if(umap.find(B[i]) == umap.end())
                umap[B[i]] = 0;
            else{
                sum++;
            }
            res.push_back(sum);
        }
        return res;
    }
};

int main(){

    return 0;
}