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
    bool isSymmetric(TreeNode* root) {
        if(root->left == nullptr && root->right == nullptr) return true;
        if(root->left == nullptr ^ root->right == nullptr) return false;
        TreeNode *lst = root->left, *rst = root->right;
        stack<TreeNode*> s;
        while(true){
            if((lst->right == nullptr ^ rst->left == nullptr) || (lst->left == nullptr ^ rst->right == nullptr))
                return false;
            if(lst->val != rst-> val)
                return false;
            if(lst->right){
                s.push(lst->right);
                s.push(rst->left);
            }
            if(lst->left){
                s.push(lst->left);
                s.push(rst->right);
            }
            if(s.empty())
                break;
            rst = s.top();
            s.pop();
            lst = s.top();
            s.pop();
        }
        return true;
    }
};

int main(){


    
    return 0;
}