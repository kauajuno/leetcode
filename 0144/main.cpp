#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        stack<TreeNode*> s;
        while(root){
            preorder.push_back(root->val);
            if(root->right)
                s.push(root->right);
            root = root->left;
            if(!root && !s.empty()){
                root = s.top();
                s.pop();
            }
        }
        return preorder;
    }
};

int main(){

    Solution s;
    TreeNode bt = TreeNode(5);
    
    return 0;
}