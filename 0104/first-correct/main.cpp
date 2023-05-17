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
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        if(root->left == nullptr && root->right == nullptr) return 1;
        int score = 1;
        stack<TreeNode*> scl, snl;
        TreeNode* aux;
        scl.push(root);
        while(true){
            while(!scl.empty()){
                aux = scl.top();
                scl.pop();
                if(aux->right != nullptr)
                    snl.push(aux->right);
                if(aux->left != nullptr)
                    snl.push(aux->left);
            }
            if(snl.empty()) break;
            else{
                score++;
                scl = snl;
                snl = stack<TreeNode*>();
            }
        }
        return score;
    }
};

int main(){


    
    return 0;
}